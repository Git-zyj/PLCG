/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167362
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
    var_16 += ((/* implicit */short) var_7);
    var_17 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    arr_6 [(unsigned char)12] [i_2] = ((/* implicit */unsigned long long int) var_14);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [5ULL] [5ULL] [i_3] [i_3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_2 [(_Bool)1] [i_2 - 1] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_0))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4] [i_2] [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) var_1))))), (arr_11 [i_2 + 1] [i_2] [i_3] [i_4] [22LL])))));
                                var_18 -= ((/* implicit */unsigned int) var_13);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) var_11))), ((-(var_7)))))) ? (((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0] [i_5]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) arr_14 [i_1] [i_5 - 2] [i_5 + 1]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_3 [i_5 + 1] [i_1] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [(_Bool)1] [i_1] [i_5 + 1] [i_6 + 1]) : (arr_15 [i_0] [i_0] [i_0] [i_0])))));
                        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [3U] [i_1])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_11 [(short)12] [(short)4] [i_1] [i_5] [i_6 + 1]))))) ? (((/* implicit */int) (!(arr_7 [i_5] [6U] [i_5] [i_5 - 1] [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_11 [i_0] [(short)8] [(short)8] [10LL] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [22LL] [10U] [(_Bool)1] [i_6 + 1] [i_1])), (arr_2 [i_0] [(signed char)7] [i_6])))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(var_3))))));
                        arr_23 [i_0] [i_7] [3LL] [i_7] [i_7] = ((/* implicit */int) arr_14 [i_0] [i_1] [i_0]);
                    }
                }
                /* vectorizable */
                for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) arr_9 [i_10]);
                                var_24 = ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((long long int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]));
                }
                for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        var_26 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_11]))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_37 [i_0] [i_11])) ^ (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_27 [i_11] [i_1] [22U] [6U])) : (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_20 [i_0] [i_0] [i_0] [i_11] [(signed char)14])))) ? (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [i_12] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        var_27 = ((/* implicit */short) max((min((arr_18 [i_0] [i_0] [i_0] [i_0] [2]), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_11] [i_12] [i_12])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(unsigned short)3] [i_11] [(unsigned short)3] [(unsigned short)3])) ^ (((/* implicit */int) var_3))))))))));
                        arr_39 [i_0] [i_0] [i_11] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [(unsigned char)8] [i_1] [i_11] [i_12]) ? (max((var_5), (((/* implicit */unsigned int) arr_29 [i_0] [i_1] [i_0] [i_12])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_0] [i_12] [i_11] [i_11])) << (((var_7) - (8890548249787626678ULL))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_11] [i_1]))))) : (((/* implicit */int) max((arr_12 [i_0] [i_1] [i_1] [(signed char)17] [i_12]), (((/* implicit */signed char) var_3)))))))) : (var_14)));
                        arr_40 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */_Bool) max((max((max((arr_20 [i_0] [i_0] [i_0] [i_12] [i_0]), (var_12))), (((/* implicit */unsigned int) ((signed char) arr_35 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_8 [i_0] [i_12] [i_1] [i_11] [i_11])))))));
                    }
                    for (int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) var_1);
                            var_29 += ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_11]);
                        }
                        for (short i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (-(((/* implicit */int) arr_46 [11LL] [(short)19] [i_11] [i_11] [(_Bool)1]))))), (max((var_0), (((/* implicit */long long int) var_1)))))), ((-(arr_36 [i_1] [i_1] [i_11])))));
                            arr_49 [i_0] [i_1] [i_11] [i_13] [i_15] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_0] [i_11]))))) * (((((/* implicit */_Bool) arr_33 [i_15])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_15]))))));
                            arr_50 [i_0] [i_1] [2ULL] [i_13] [i_15] = max((((/* implicit */long long int) var_9)), (arr_2 [i_1] [i_1] [i_15]));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_11] [i_13] [i_13] [i_11])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_16] [i_13])) - (((/* implicit */int) arr_34 [i_0] [(_Bool)1])))))))));
                            arr_53 [i_0] = (+(((((/* implicit */_Bool) arr_22 [i_16] [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_1]))))))));
                            var_32 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_42 [i_0] [i_1] [(signed char)20] [i_11] [i_13] [i_13]), (((/* implicit */long long int) arr_45 [i_16] [i_16] [i_11] [(_Bool)1] [i_16] [i_1])))))))) >= (((/* implicit */int) arr_45 [i_0] [i_1] [i_11] [10LL] [i_16] [i_16]))));
                            var_33 = ((/* implicit */_Bool) var_14);
                            var_34 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) min((arr_42 [(unsigned char)20] [(unsigned char)7] [i_11] [i_0] [(unsigned char)14] [i_0]), (((/* implicit */long long int) arr_44 [(unsigned char)4] [i_16] [i_16]))))), (var_7)))));
                        }
                        arr_54 [i_0] [i_0] [i_0] [(signed char)6] [i_0] |= ((/* implicit */unsigned short) min((var_4), (max((((/* implicit */short) arr_5 [(signed char)10])), (var_4)))));
                        var_35 ^= ((/* implicit */unsigned int) arr_45 [i_1] [16U] [i_0] [i_13] [i_13] [i_0]);
                        arr_55 [i_0] [i_0] [i_11] [i_13] = ((unsigned char) (-(arr_0 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_1] [23LL] [i_17])))))) != (arr_57 [i_11] [i_11] [i_17])));
                        var_37 &= var_4;
                        arr_59 [i_0] [i_0] [i_0] [i_17] [i_0] = ((/* implicit */unsigned int) arr_21 [i_0] [i_17]);
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            var_38 -= ((/* implicit */signed char) var_5);
                            var_39 = ((/* implicit */signed char) (+(arr_36 [i_0] [i_0] [i_11])));
                            var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_7)))));
                            var_41 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_17] [(unsigned short)4] [(unsigned short)4] [i_0]))));
                            arr_62 [(unsigned short)18] [i_1] [i_17] [i_1] [i_17] [i_1] = ((/* implicit */signed char) ((_Bool) ((var_12) == (((/* implicit */unsigned int) arr_43 [i_17] [i_1] [i_1] [i_17])))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (int i_20 = 4; i_20 < 20; i_20 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) max((var_1), (((/* implicit */short) arr_34 [i_1] [i_20 - 2]))))), (min((((/* implicit */unsigned int) arr_22 [i_19] [i_20 - 2])), (arr_20 [i_1] [i_1] [i_1] [i_19] [i_1]))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_45 [i_19] [i_1] [i_20 + 2] [i_20 - 1] [i_20 - 4] [i_20 - 1])) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_19] [i_20])) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_1)))))));
                                arr_70 [i_0] [i_1] [i_0] [i_19] [i_19] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_38 [i_19]), (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_11] [(signed char)18]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((arr_48 [i_1] [i_20 + 3] [i_20 + 3] [i_20] [i_20 + 3] [i_20 + 3] [i_20 + 3]) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_11] [i_11] [i_19] [5ULL])) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_19]))))) ? (((var_3) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_1] [i_19] [i_11] [i_19] [i_20] [i_19] [i_20 - 1])))))));
                                arr_71 [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_11] [i_1] [i_11] [i_20])))))))))))));
                            }
                        } 
                    } 
                    var_44 += (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) <= (var_7)))))) != (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0])), (max((arr_22 [i_0] [i_1]), (((/* implicit */unsigned char) arr_37 [i_0] [i_11]))))))));
                    arr_72 [i_1] [i_11] |= ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [12LL] [i_0] [i_0] [i_0]);
                    var_45 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_68 [i_1] [i_1] [i_1] [i_1] [(short)0] [i_1] [i_1])) : (var_12))));
                }
                var_46 -= ((/* implicit */long long int) arr_5 [i_0]);
                var_47 = ((/* implicit */unsigned char) arr_9 [(short)12]);
                arr_73 [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) arr_20 [(short)4] [i_1] [i_1] [4U] [(short)8])))), (arr_67 [14U] [2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_4))))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                var_48 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [20]))))) ^ (min((min((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0])), (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))));
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))))));
}
