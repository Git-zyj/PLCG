/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183142
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) && (((arr_0 [i_0]) || (((/* implicit */_Bool) var_6)))))))) : (arr_1 [i_1 + 3] [i_0])));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3] [i_2]))) : (9223372036854775807LL)));
                        arr_12 [i_0] = (+(((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2] [i_3])));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (~(arr_14 [i_0] [i_2] [i_1 + 1])))) : (arr_8 [i_1 + 1] [i_1 + 1] [i_4]))))));
                        var_19 = ((/* implicit */long long int) var_0);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((arr_5 [i_2] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)36702)) : (((/* implicit */int) (short)15079))))))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_0])) ? (arr_5 [i_4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_2] [i_0]) : (arr_5 [i_0] [i_0])))));
                        arr_16 [(unsigned char)17] [i_0] [i_4] [(unsigned char)17] [i_2] = ((/* implicit */_Bool) -9223372036854775807LL);
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1 + 3])), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))));
                        var_21 = ((/* implicit */signed char) var_11);
                    }
                    var_22 = ((/* implicit */_Bool) var_2);
                }
                for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                        var_24 *= ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_25 [i_7] [i_6] [i_6] [i_1 + 3])))));
                        var_25 = ((/* implicit */signed char) var_10);
                    }
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (~(min((((/* implicit */unsigned long long int) arr_24 [4ULL] [18ULL] [4ULL])), (arr_21 [(signed char)0] [i_6 + 2] [i_1 + 3] [(signed char)0]))))))));
                }
                /* LoopSeq 3 */
                for (short i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    arr_30 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_28 [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)20411)))))))) ? (min((arr_14 [i_1 - 1] [i_0] [i_8 + 1]), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (arr_28 [i_8] [i_8])));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 += ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */long long int) arr_17 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1])) : (var_2));
                    var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 3])) ? (arr_27 [i_0] [i_0] [i_1 + 3]) : (((/* implicit */int) arr_0 [i_1 + 3]))))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), ((+(var_7)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_31 -= ((/* implicit */unsigned int) (+(arr_8 [i_1 + 3] [i_1 + 1] [i_1 + 3])));
                                var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_9] [i_9])) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967290U)) ? (6U) : (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_9] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-1LL)))));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_32 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_32 [i_1 - 1] [i_1 - 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 20; i_12 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_35 *= ((/* implicit */unsigned int) arr_25 [i_12] [i_1 + 3] [i_1 + 3] [i_12 - 2]);
                        var_36 = ((/* implicit */short) (-(var_2)));
                    }
                }
                for (short i_13 = 3; i_13 < 20; i_13 += 2) 
                {
                    arr_43 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
                    var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)15741))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_15] [i_14] [i_0] [i_0])) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) var_11))))), (arr_8 [i_0] [i_0] [i_0])));
                                var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_32 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_18 [i_15] [i_0] [i_0] [i_0])) : (arr_21 [i_0] [i_13 - 3] [i_1 - 1] [i_0]))) >> (((arr_2 [i_14] [i_1 - 1]) + (8346175081618903012LL)))));
                                var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0] [i_1]))));
                                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) arr_19 [i_15] [i_15] [i_13] [i_15] [(unsigned short)12]))))))));
                                var_42 *= ((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (12317850745385063524ULL)));
            }
        } 
    } 
    var_44 = var_9;
    var_45 = (~(var_15));
    var_46 *= ((/* implicit */short) var_12);
}
