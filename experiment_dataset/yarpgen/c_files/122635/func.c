/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122635
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
    var_12 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) min((var_8), (var_10)))), (((long long int) var_0)))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))))));
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned int) 14259638448237117901ULL);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (signed char)-72))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) : (arr_12 [i_2] [i_1 + 3]))), (((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) var_1)) : (arr_4 [i_1] [i_3]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))))))));
                                arr_14 [(unsigned short)6] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) max((arr_1 [(unsigned short)12] [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [4] [4] [i_0] [i_0] [(short)13])))))), (((var_1) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (arr_11 [i_0] [i_0] [i_1] [i_0] [i_4]))))))));
                                var_16 = ((/* implicit */unsigned short) max(((+(((arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) : (var_4))))), (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */unsigned int) ((int) var_11))) : (arr_7 [i_2 - 2] [(_Bool)1] [i_2] [i_2 + 2])))));
                                var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) * (var_0))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        arr_18 [i_1] [(short)22] [i_2] = ((/* implicit */short) arr_16 [i_0] [i_0] [9] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((int) max((min((((/* implicit */long long int) arr_17 [i_0] [14LL] [i_1 + 1] [i_0] [i_0] [i_0])), (arr_11 [i_0] [i_2] [i_0] [i_1] [i_0]))), (arr_6 [i_0] [i_1] [18LL])))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_1 - 1] [i_6]))) ? (arr_6 [(_Bool)1] [5ULL] [i_2 + 1]) : (((arr_6 [i_5 + 1] [15ULL] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)72))))))), (min((((long long int) var_7)), (((/* implicit */long long int) ((((/* implicit */_Bool) 274877906943LL)) ? (arr_19 [i_0] [i_1 + 2] [i_1] [i_5] [i_5] [i_6]) : (((/* implicit */int) var_7)))))))));
                            var_20 &= arr_20 [i_0] [i_0] [i_2 + 1] [i_5] [i_6] [i_6] [i_0];
                            arr_21 [i_1] [i_1] [i_1] [i_2 + 2] [i_5 - 1] [8LL] = ((/* implicit */signed char) ((long long int) min((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2])), ((-(((/* implicit */int) arr_0 [i_0] [i_5])))))));
                            arr_22 [i_1] [(_Bool)1] [i_1] [i_1] [i_2] = var_1;
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [0LL] = ((/* implicit */unsigned short) ((long long int) arr_9 [i_0] [i_1] [i_1] [(short)10] [i_1 - 1]));
                            arr_28 [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_17 [i_1] [i_1 + 3] [i_2 - 1] [i_7] [i_2 - 1] [i_2 - 1]);
                            var_21 = ((/* implicit */signed char) ((int) var_2));
                        }
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [(short)2] [i_2] [i_7]))) % (arr_7 [i_7] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) arr_25 [(unsigned char)10] [i_1] [i_1 + 1] [i_1] [i_2 - 1] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_17 [i_1] [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 + 1] [12U]))))) < (((((unsigned long long int) 3760748266868966123ULL)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))));
                    }
                    var_22 = ((/* implicit */signed char) max((((unsigned long long int) ((short) 2419864611U))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [0] [i_1]))) : (arr_12 [i_0] [i_1]))) - (((/* implicit */long long int) var_3)))))));
                    arr_30 [i_1] = ((/* implicit */long long int) var_10);
                    /* LoopSeq 3 */
                    for (short i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_9)))))) == (12408839218826767308ULL)));
                        var_24 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [9])) * (((/* implicit */int) arr_15 [i_0] [3ULL])))));
                        arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_0] [i_1 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) ^ (((arr_1 [22ULL] [i_0]) % (arr_1 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_10] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21137))))) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0])))));
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            arr_38 [i_0] [i_0] [i_1] [i_10] [i_11] = ((/* implicit */unsigned char) ((arr_5 [i_1] [i_2 - 1] [i_10 + 2]) / (arr_19 [i_11] [(short)4] [i_1] [i_1] [i_1] [i_0])));
                            arr_39 [i_2] [i_2] [i_1] = ((/* implicit */int) ((unsigned long long int) arr_2 [i_2 + 2]));
                        }
                        arr_40 [i_1] [i_1] [i_2 + 1] [i_2] [(unsigned char)7] = ((((long long int) arr_3 [17])) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_10 - 1]))));
                    }
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((min((((/* implicit */unsigned short) var_9)), (arr_20 [i_0] [i_0] [(unsigned char)13] [i_1] [(short)18] [i_12] [i_1]))), (((/* implicit */unsigned short) var_7)))))));
                        arr_43 [i_1] [8LL] [(short)12] = ((/* implicit */long long int) arr_23 [i_1] [i_1 + 3]);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((short) min((arr_13 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_1 + 3] [i_1 + 1]), (arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_1 + 3] [i_1 + 2])))))));
                        arr_44 [i_1] [i_1] = ((/* implicit */long long int) var_10);
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */short) arr_23 [i_0] [(signed char)10]);
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((arr_53 [(short)11] [i_15 + 2] [i_14 - 1] [i_14] [i_14 - 1]) < (arr_53 [i_15] [i_15 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1]))) ? (((arr_53 [i_15 + 3] [i_15 - 1] [i_15 + 2] [i_14 - 1] [i_14 - 1]) | (arr_53 [7ULL] [i_15 - 2] [i_14] [i_14] [i_14 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 0LL))))));
                                var_30 = arr_10 [(short)10];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 4) 
                    {
                        for (short i_18 = 2; i_18 < 20; i_18 += 3) 
                        {
                            {
                                arr_63 [14] [i_13] [i_14 + 1] [i_17] [i_17] [i_18 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_42 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13] [i_14 - 1]))))), (((/* implicit */unsigned long long int) arr_3 [i_13]))))) ? (((/* implicit */int) min((((signed char) (unsigned short)0)), (arr_31 [i_17] [i_17] [i_17 - 1] [i_17])))) : (max((((/* implicit */int) arr_20 [i_17] [8LL] [i_17 + 2] [i_17 - 1] [i_14 - 1] [4U] [i_17])), (arr_19 [i_18 - 2] [i_13] [i_17] [(short)3] [i_18] [i_0])))));
                                var_31 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((long long int) arr_9 [i_0] [i_17] [20] [i_17] [(unsigned short)15])) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_13])) || (((/* implicit */_Bool) arr_4 [i_17] [i_17]))))))))), (arr_12 [i_13] [i_14])));
                                var_32 = ((/* implicit */unsigned long long int) arr_49 [i_0] [i_14 - 1] [i_0]);
                            }
                        } 
                    } 
                    arr_64 [i_0] = ((((/* implicit */_Bool) arr_12 [(unsigned char)18] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (max((((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [14ULL] [(short)2] [(short)2] [2LL] [(unsigned short)9] [i_14] [i_14]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) var_7);
    var_34 = ((/* implicit */long long int) var_2);
}
