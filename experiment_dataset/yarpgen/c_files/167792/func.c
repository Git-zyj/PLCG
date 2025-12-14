/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167792
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 -= ((/* implicit */_Bool) ((min((arr_1 [i_0]), (arr_1 [i_0]))) << ((((~(arr_1 [i_0]))) - (1302629891U)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((long long int) max((((var_10) ^ (var_3))), (var_10)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2])) * (((/* implicit */int) arr_5 [(short)1] [i_1 + 1]))));
        arr_9 [i_1] [11U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)27134))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_16))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) 9223372036854775807LL);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_21 ^= ((/* implicit */unsigned short) ((arr_13 [i_1] [i_2] [i_3]) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 + 2] [i_3] [i_2 + 1])))));
                arr_15 [11ULL] [(_Bool)1] [i_2 + 3] [12LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                arr_16 [i_1] [(unsigned char)11] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2 + 2] [i_1 + 1]))));
                arr_17 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) (unsigned char)153);
            }
            arr_18 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) var_12));
            /* LoopSeq 1 */
            for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_27 [i_1 - 1] [i_2 + 1] [15LL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 845707951)) ? (4206510208U) : (4206510208U)));
                        arr_28 [i_1] [i_2] [i_4 - 1] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((_Bool) 88457087U));
                        var_22 += ((/* implicit */unsigned char) (-(-2108126611425152486LL)));
                    }
                    arr_29 [i_5] [i_4] [14ULL] [i_2] [i_2 + 3] [i_1] &= ((/* implicit */_Bool) arr_11 [(_Bool)1] [i_4 + 1] [i_4 + 1]);
                }
                for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    arr_34 [(short)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-680))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_20 [i_1] [i_7 - 1] [i_4 - 1]))));
                }
                arr_35 [8LL] [i_2] [i_1] [i_1 + 1] = var_12;
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((short) arr_19 [i_1 - 1])))));
                arr_36 [i_1] [i_2] [4ULL] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4206510213U))));
            }
            arr_37 [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) arr_12 [i_2 + 1] [i_1 + 2] [i_1 - 1]));
        }
    }
    var_25 = ((/* implicit */short) (-(209450494U)));
}
