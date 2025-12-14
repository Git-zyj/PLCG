/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132699
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
    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) (short)-7761))))) && (((/* implicit */_Bool) 3480283581U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [(_Bool)1] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_0]);
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2] [(unsigned short)18] [i_2 + 2]))) : (arr_9 [i_2 + 1])));
                    }
                    for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_4 + 1] [i_4 - 1] [i_4 + 1] = ((/* implicit */unsigned short) var_1);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((((/* implicit */_Bool) var_6)) ? (403263323) : (arr_10 [i_0] [i_1] [i_2 + 3] [i_4 - 1]));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 + 4])) || (((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1]))));
                            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_4 - 1] [i_0] [i_2 + 4] [(unsigned char)13] [i_0]))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1517598647) + (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) -1)) : (((((/* implicit */_Bool) (unsigned char)31)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66)))))));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2 + 4] [(short)8] [i_2 + 2] [i_2] [i_2 + 3] [i_4 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 3] [i_4 - 1]))))) : ((+(arr_21 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_4 - 1] [i_2 + 1]))))))));
                            var_18 = ((/* implicit */int) arr_15 [i_0] [(short)0] [(_Bool)1] [i_2 + 2] [i_2 - 1]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [(signed char)2] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1] [i_1] [i_0])) ? (((((((/* implicit */_Bool) arr_13 [i_0] [(signed char)8] [(signed char)8] [i_4] [i_7] [i_0])) ? (467344754U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_4] [i_1] [(unsigned short)6] = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_16 [12LL] [i_1] [19LL]))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (unsigned short)3084)), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_4)))))) ^ ((~(((((/* implicit */_Bool) 2074986285)) ? (((/* implicit */int) (unsigned short)20169)) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_2]))))))));
                        var_22 = ((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_8] [i_8] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            var_23 |= ((/* implicit */short) 403263310);
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_9]), (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_9] [i_9] [i_2]))))) ? ((+(arr_18 [i_0] [(unsigned char)6] [i_2] [(unsigned char)16] [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) max((((/* implicit */short) arr_22 [i_0] [(unsigned char)2] [i_2] [i_9] [i_10] [i_0])), (min(((short)-8462), (arr_8 [i_0] [i_1] [i_2] [i_9])))))) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_2] [i_9] [i_10 + 1])));
                        }
                        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                            arr_37 [i_1] [i_1] [(unsigned short)13] [i_1] [1ULL] [(short)1] = ((/* implicit */short) min(((~(((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_22 [i_0] [i_1] [i_2 + 1] [i_9] [i_11] [i_2 + 1])))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((2880045687U) <= (var_10)))) : (((/* implicit */int) (unsigned short)45495))))));
                        }
                        var_26 ^= (((!(((/* implicit */_Bool) (unsigned short)52245)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65535)), ((+(((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_1])) ? ((~(arr_7 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [(unsigned short)1] [i_2] [i_9]))))));
                        arr_38 [i_1] = ((/* implicit */signed char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((arr_19 [i_0] [i_1] [i_0] [i_9] [i_9]) * (((/* implicit */int) var_2))))));
                    }
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5))))) != (((/* implicit */int) ((3409004249U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63511)))))))))) + ((-(5306754047790274534ULL))))))));
                        var_28 = ((/* implicit */signed char) min((((((unsigned int) arr_23 [15LL] [i_2] [i_1] [15LL])) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1])) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_2] [i_12] [i_1] [i_0])) : (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) (-(arr_5 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (1438374099U)))))));
                        arr_41 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) 1682148083)) / (((((/* implicit */_Bool) arr_21 [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_21 [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2] [i_2 + 4] [i_2 + 4])))));
                    }
                    for (int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        var_29 &= ((/* implicit */short) max((-1), ((~(((/* implicit */int) var_6))))));
                        /* LoopSeq 1 */
                        for (int i_14 = 4; i_14 < 19; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) var_3);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_30 [i_0]))));
                        }
                    }
                }
                var_32 = ((/* implicit */signed char) var_6);
                arr_48 [i_1] [(short)2] [i_0] |= ((/* implicit */unsigned int) ((int) max((min((((/* implicit */unsigned int) var_4)), (var_10))), (((/* implicit */unsigned int) var_0)))));
                arr_49 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2478634359U)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? ((~(403263325))) : (((/* implicit */int) (unsigned short)25045)))))));
            }
        } 
    } 
    var_33 = ((/* implicit */int) var_6);
}
