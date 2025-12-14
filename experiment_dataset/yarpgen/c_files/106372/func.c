/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106372
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-13098)) || (((/* implicit */_Bool) 2147483647))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) <= (arr_7 [i_0 + 1] [i_0] [i_1] [i_2])));
                    arr_9 [i_1] = ((/* implicit */long long int) ((arr_4 [i_0 + 1] [i_0 + 1]) ? (11549151212254911690ULL) : (((/* implicit */unsigned long long int) 4294967294U))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) var_9);
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_0] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2 + 1] [i_3] [i_1]))))))));
                            arr_15 [i_3] [i_1] [i_2] |= ((int) arr_6 [i_0 - 2] [i_1]);
                            var_19 &= (+(arr_5 [i_0 - 1] [i_0 - 1] [i_0] [i_0]));
                            arr_16 [i_1] [i_3] [i_3] [i_2] [i_1] [i_0 - 1] = 26407328;
                        }
                        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_19 [i_0 - 1] [i_1] [i_1] [i_2 + 1] [i_3] [i_5] &= arr_18 [i_0 - 1] [i_0 - 1] [i_2 - 3] [i_3] [i_5];
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5787038004147605461ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_1 [i_0 + 1])));
                            arr_20 [i_0] [i_1] [i_2 - 2] [i_3] [i_5] = ((/* implicit */unsigned int) arr_3 [i_2 - 1] [i_1] [i_2 + 1]);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_13 [i_0] [i_2 - 3] [i_0 - 1] [i_0 - 1] [i_5]))));
                        }
                        var_22 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                        var_23 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_16)) + (2147483647))) << (((((var_15) + (4616147138289506764LL))) - (9LL))))) / (((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((var_8) & (var_10))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
                            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_15)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_3] [i_2 - 4] [i_1] [i_0 - 2])))));
                        }
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) & (var_1)));
                            arr_28 [i_7] [i_3] [i_1] &= ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_2) : (arr_1 [i_3]));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((signed char) arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_2 - 1] [i_7 + 1])))));
                        }
                    }
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */int) var_10);
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 + 1])));
            arr_32 [i_0 - 2] = ((/* implicit */unsigned long long int) arr_25 [i_0 + 1] [i_0 + 1]);
        }
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((4038990934U) << (((((/* implicit */int) (short)19528)) - (19505))))))));
    }
    /* vectorizable */
    for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
    {
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+((~(9223372036854775790LL))))))));
        var_31 = ((/* implicit */long long int) arr_5 [i_9] [i_9 + 1] [i_9 + 1] [i_9]);
    }
    var_32 = ((/* implicit */unsigned char) var_15);
}
