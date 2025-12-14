/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109866
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_2] = ((((/* implicit */_Bool) 4962880403501589786LL)) ? (4962880403501589786LL) : (((/* implicit */long long int) 1110465931U)));
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4962880403501589786LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 12845196803553257885ULL))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)13))));
                            arr_17 [i_0] [i_5] [i_5] [i_3] [i_2] [i_5 - 1] [i_5] = ((/* implicit */int) arr_4 [14ULL]);
                            var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) (unsigned char)243)))) <= (((/* implicit */int) var_7))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_2] [i_3] [i_2 - 1] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_11 [i_6] [i_2] [20] [i_2] [i_2 - 1] [i_2] [i_0]) : (-4962880403501589775LL)))) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))));
                            arr_22 [i_6 - 2] [i_2] [i_1 - 1] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_2] [i_6 + 3] [(signed char)2] [i_6 - 1] [i_6] [i_6]) / (arr_11 [i_1 - 1] [i_2] [i_6 + 3] [i_2] [i_6 - 2] [i_6] [i_1 - 1])));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_0] [i_1 - 1] [i_2] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(signed char)17] [i_1] [(signed char)17] [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (var_4) : (var_4)));
                            var_13 &= ((/* implicit */short) var_7);
                            arr_26 [i_0] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */long long int) ((var_4) != (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_7 + 3] [i_2 - 1]))));
                            arr_27 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((unsigned int) (unsigned char)254)))));
                        }
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((arr_10 [i_2 - 1] [i_3] [i_3] [i_3] [i_3]) + (((((/* implicit */_Bool) (unsigned char)246)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_2] [19ULL] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_2 - 1] [i_3] [i_0] [i_0])))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_8 [14ULL] [i_1 - 1] [i_1 - 1] [i_1 - 1] [(signed char)6] [(unsigned char)8])) | (238009661U)))) ? (((((/* implicit */_Bool) arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (var_1) : (553274481489930702LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1] [13LL] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_6))))))))));
                        var_16 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2] [20] [(signed char)4])) ? (arr_12 [i_1 - 1] [i_1 - 1] [i_2] [(_Bool)1]) : (18446744073709551615ULL))) < (max((arr_12 [i_1 - 1] [i_1 - 1] [i_1] [20U]), (arr_12 [i_1 - 1] [i_2] [i_1 - 1] [10ULL])))));
                        arr_30 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])), (((((/* implicit */_Bool) max((((/* implicit */signed char) var_7)), (arr_5 [i_0])))) ? ((+(7954096777677169523ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
                        arr_31 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) arr_10 [7ULL] [(signed char)8] [i_2] [i_1] [i_0]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_37 [i_10] [i_2] [i_2] [i_0] = var_10;
                            arr_38 [i_2] [i_1] [i_1 - 1] = ((/* implicit */signed char) max((((unsigned long long int) max((arr_2 [i_9]), (((/* implicit */int) arr_15 [i_0] [i_9] [(unsigned short)19] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_1))));
                            var_17 |= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned char)245)))));
                        }
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 21; i_11 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34549))))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                            arr_42 [i_0] [i_0] [i_2] [i_2] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [i_0] [i_2] [5ULL] [i_9] [i_11] [i_0]))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_0] [i_2] [i_2 - 1] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) min((arr_35 [i_1 - 1] [i_1]), (max((arr_35 [i_1 - 1] [i_1]), (arr_35 [i_1 - 1] [i_1])))));
                            arr_48 [i_2] [i_2] = ((/* implicit */int) arr_39 [i_1 - 1] [i_1 - 1] [7LL] [i_2] [i_0]);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 1]))) : (arr_40 [i_1 - 1] [i_2 - 1] [i_1 - 1])))) ? (7660744192752944471ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4253686923055373489LL)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 1])))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            arr_51 [i_0] [i_2] = ((/* implicit */_Bool) var_3);
                            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                        }
                        arr_52 [i_0] [4ULL] [i_2 - 1] |= ((/* implicit */_Bool) var_3);
                        arr_53 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((min((var_8), (var_8))) ? (arr_50 [(unsigned char)9] [i_1 - 1] [i_1 - 1] [i_9] [i_9]) : (arr_11 [i_9] [i_2] [i_0] [i_2 - 1] [9ULL] [i_2] [i_0]))), (((/* implicit */long long int) arr_19 [i_0] [i_2] [i_2] [i_9] [(signed char)15] [i_2]))));
                    }
                    var_22 = ((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_8 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2]))));
                    var_23 = var_2;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_9)) + (146))) - (31)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)246))))) : ((+(-3448956005280633901LL))))) : (min((min((-1LL), (((/* implicit */long long int) var_9)))), (min((((/* implicit */long long int) var_9)), (var_1))))))))));
    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)223))))) : (7660744192752944457ULL))), (((/* implicit */unsigned long long int) var_7))));
}
