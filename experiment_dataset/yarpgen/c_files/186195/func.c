/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186195
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [10LL] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */int) (((((((~(var_0))) | (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (var_7)))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((/* implicit */int) arr_2 [i_0])))) - (113)))))) : (((/* implicit */int) (((((((~(var_0))) | (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (var_7)))))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((/* implicit */int) arr_2 [i_0])))) - (113))) - (113))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1301375371)) != (3633876436U)));
                    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (+(-1113969343))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (short)1131);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]);
                }
                for (signed char i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    arr_15 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1552849911U)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (signed char)105)))) % (-2147483639)));
                    var_11 = ((/* implicit */unsigned char) (+(((1886587710269516269LL) / (((/* implicit */long long int) 2742117392U))))));
                    var_12 = ((/* implicit */int) arr_9 [i_3 - 1] [i_0] [i_3 + 2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_22 [i_0] [3LL] [i_0] = ((/* implicit */_Bool) arr_18 [i_0] [10] [i_0] [9] [i_0] [i_5]);
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) == (var_2)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)92))))))))));
                                arr_23 [i_0] [i_0] [i_0] [1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)92)), (1552849911U)));
                            }
                        } 
                    } 
                }
                var_14 *= ((/* implicit */_Bool) 1634621522);
                var_15 = ((/* implicit */short) min((arr_13 [i_0] [11] [i_0] [i_0]), (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 669295444))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)94)) ? (((int) (signed char)102)) : (((((/* implicit */int) var_3)) + (var_6)))))) | (max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) / (1552849911U))), (((/* implicit */unsigned int) ((var_3) || (((/* implicit */_Bool) 13515541654478476890ULL)))))))));
    var_17 = ((/* implicit */long long int) ((int) max((min((18446744073709551607ULL), (((/* implicit */unsigned long long int) 562941363486720LL)))), (((/* implicit */unsigned long long int) (signed char)-93)))));
    var_18 = (+(min(((-(-1870836742))), (var_6))));
}
