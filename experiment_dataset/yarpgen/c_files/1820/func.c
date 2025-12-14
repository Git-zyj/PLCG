/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1820
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
    var_10 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2])) ? (((/* implicit */int) (short)23135)) : (((/* implicit */int) (unsigned char)67))))) ? (((/* implicit */unsigned long long int) ((long long int) var_6))) : (arr_2 [i_0])))));
                    arr_10 [(unsigned char)8] = ((/* implicit */unsigned long long int) max((max((min((arr_3 [i_0]), (((/* implicit */long long int) var_0)))), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)27535))))))), (((/* implicit */long long int) max(((~(arr_0 [i_0]))), (((/* implicit */int) ((short) var_7))))))));
                    arr_11 [i_0] [i_1] [(unsigned short)6] [i_2] = max((((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (short)31825))))) : (((arr_3 [i_0]) - (arr_3 [i_0]))))), (((/* implicit */long long int) -612816263)));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(short)16])) : (((/* implicit */int) arr_13 [i_2] [i_2 - 4] [(unsigned char)13] [3])))))))), (min(((-(var_2))), (arr_2 [i_1 - 1])))));
                        arr_16 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 - 2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (arr_8 [i_0] [i_2 - 2] [i_0]))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_19 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-38))))), (arr_3 [i_1]))), ((+((-9223372036854775807LL - 1LL))))));
                        arr_20 [i_2] [i_2 - 3] [i_2] [i_2] = ((/* implicit */int) (+(max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (short)-19731)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_21 [i_0] [i_1] [(signed char)16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 9223372036586340352LL))) ? (((((/* implicit */_Bool) arr_7 [i_0] [3LL] [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [19]))) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_4]))) + (var_1)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_4]) : (965525339))) : (((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 3] [i_2])))) : (((/* implicit */int) ((signed char) arr_8 [i_1] [i_2 + 1] [i_2 + 1]))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            arr_24 [i_4] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) + (max((((/* implicit */long long int) arr_5 [i_0] [i_1])), (5740439331313296560LL))))));
                            arr_25 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((3145728U), (arr_23 [18ULL] [18ULL] [7ULL] [8LL]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_5 - 2]))) : (var_6)))))) ? (arr_3 [i_5 - 1]) : (9223372036586340350LL)));
                            arr_26 [i_0] = ((/* implicit */_Bool) var_5);
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2 - 2] [i_4] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-38)) : (arr_14 [i_1 - 3] [i_1] [i_2 + 1] [i_2]))));
                            arr_30 [i_2 - 3] [i_4] = max((((/* implicit */long long int) arr_18 [i_0] [i_6])), (((((/* implicit */_Bool) (unsigned short)36424)) ? (9223372036586340352LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19731))))));
                            arr_31 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)19517))))))));
                            arr_32 [i_0] [i_1] [i_2 - 2] [i_4] [3LL] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (arr_14 [i_4] [i_1 - 1] [i_2 - 3] [4ULL]) : (((/* implicit */int) var_0)))) + (2147483647))) << (((((((/* implicit */int) min((((/* implicit */short) ((unsigned char) arr_1 [i_1] [i_2]))), (arr_18 [i_1 - 1] [i_2 - 3])))) + (30770))) - (9)))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1 - 2] [i_2] [i_4] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7705)) ? (-1987807829) : (((/* implicit */int) (short)31821))))) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : (min((((/* implicit */int) min((arr_17 [20] [20] [20]), (((/* implicit */unsigned short) var_0))))), (arr_5 [i_1 - 1] [i_2 - 1])))));
                            arr_36 [i_0] [i_1] [i_2] = arr_23 [7U] [i_1] [i_2] [i_7];
                        }
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_40 [i_0] [i_0] [i_1 + 1] [i_8] [(unsigned short)6] [8] = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                        arr_41 [i_0] [i_2] [i_2] = ((arr_8 [i_0] [i_1] [1LL]) ? (arr_6 [i_0] [i_2 + 1]) : (min(((~(var_4))), (((/* implicit */int) ((((/* implicit */int) (short)-7575)) > (arr_0 [i_1])))))));
                        arr_42 [i_0] [i_1 - 1] [i_2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_8]))) ? (((/* implicit */unsigned long long int) var_4)) : (((arr_2 [4]) + (((/* implicit */unsigned long long int) var_1)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_39 [i_0] [i_1 - 1] [i_2] [i_8]) : (((/* implicit */unsigned long long int) arr_3 [i_2])))))));
                    }
                    arr_43 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_0] [i_2] [6LL] [i_1]);
                }
                /* vectorizable */
                for (long long int i_9 = 4; i_9 < 20; i_9 += 1) 
                {
                    arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_3 [i_1 + 1]));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            {
                                arr_54 [i_1] [i_1 - 3] [i_1 - 3] [i_10] [i_0] [i_10] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_28 [i_0] [i_1] [i_1] [i_10] [i_11]))));
                                arr_55 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11 - 1] [(unsigned char)2] [i_9 + 1])))));
                            }
                        } 
                    } 
                }
                arr_56 [i_1 + 1] [i_1] = ((/* implicit */long long int) max(((+((-(var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(signed char)8] [i_1] [(short)15])) ^ (((/* implicit */int) arr_34 [i_1]))))) ? ((+(-2147483644))) : (var_4))))));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_62 [i_1] [i_1 - 3] [i_12 - 2] [i_13] [i_0] [i_13] = ((/* implicit */short) (+(arr_58 [i_12 - 3] [i_1 - 3])));
                            arr_63 [i_0] [i_1] [i_12] [(unsigned short)9] = ((/* implicit */unsigned short) ((int) (short)-10631));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 = 418119496U;
}
