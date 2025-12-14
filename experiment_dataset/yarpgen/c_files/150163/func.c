/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150163
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (8553340681645846594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : ((((_Bool)0) ? ((~(((/* implicit */int) (short)32767)))) : (var_3))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 -= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (unsigned char)82)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_21 |= ((/* implicit */long long int) (unsigned char)188);
                    arr_6 [i_0] [i_0] [i_0] [(unsigned char)9] = ((/* implicit */_Bool) (unsigned char)235);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) ((1899852584) >= (((/* implicit */int) (unsigned char)7))))), (var_18)))) & ((+((((-2147483647 - 1)) / (((/* implicit */int) (_Bool)1))))))));
                    var_23 -= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4155503073926912154LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [6])) : (((/* implicit */int) (unsigned short)26384))))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((unsigned short) (signed char)127))))) | (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))))));
        arr_10 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))))));
        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 114389888088924000ULL)) ? (arr_0 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((2181431069507584ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 1])) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) arr_14 [i_4 - 1]))));
        arr_15 [i_4] = ((int) ((unsigned short) var_16));
        arr_16 [i_4] = ((/* implicit */short) var_13);
    }
    var_28 = ((/* implicit */short) ((max((var_1), (((/* implicit */unsigned int) var_14)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
}
