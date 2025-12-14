/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107378
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((+(4689730848073095090ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-8941095515295209134LL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) == (((/* implicit */int) var_12)))) ? (((long long int) arr_8 [i_0] [1] [i_0] [3LL])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_2)))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) != (var_10))) ? (var_13) : ((~(7985126268168346805LL)))));
                    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) var_10)) : (arr_7 [i_0] [i_1] [i_2] [(_Bool)1])));
                    arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) : (var_10)));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        var_18 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)953)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 473214391U)) ? (min((((4294967270U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), (var_11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14336)))));
        var_20 |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_13 [8U])))) ? (max((((/* implicit */long long int) var_5)), (arr_12 [i_3 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-14336))))))));
        var_21 *= ((/* implicit */short) ((int) -2090468086));
    }
    var_22 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)-11))))) > ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))))));
}
