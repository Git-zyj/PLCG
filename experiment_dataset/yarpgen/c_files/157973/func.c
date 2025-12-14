/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157973
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
    var_12 *= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) arr_8 [i_2] [i_2] [i_2 - 2] [i_3 + 3]);
                        var_14 = (-(var_8));
                        arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 330877862)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) -1LL)) : (var_5)))));
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */signed char) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */int) (short)-20517)) + (20530))) - (13))))) : (-1430779340)));
        arr_12 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_11)));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_0] [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) 827475846)))))));
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-20517))));
            var_17 = ((/* implicit */signed char) ((13163644003580776668ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (var_5)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            var_19 = ((((((/* implicit */_Bool) arr_21 [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) - (arr_5 [i_5])));
        }
    }
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (min((((/* implicit */int) ((unsigned char) (_Bool)0))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (short)-20517)))))) : (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))))) > (var_10)));
}
