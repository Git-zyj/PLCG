/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157678
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [12LL] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) < (var_7)))), (((13835058055282163712ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-60))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) var_8);
                                var_14 = ((/* implicit */long long int) ((unsigned long long int) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_15 ^= ((/* implicit */_Bool) var_2);
                        arr_18 [(signed char)8] [i_2] [i_2] [(unsigned char)15] [(unsigned char)14] [i_2 - 3] = ((/* implicit */long long int) ((short) var_11));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_2] [i_1] [i_2] = var_5;
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (14864861839412328770ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 1] [(unsigned short)15] [i_2 + 1] [15ULL] [i_2 + 1] [i_6]))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_2] [(short)17] [19ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [14LL] [i_7])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [9] [i_2] [i_2 - 2] [8ULL])))))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (var_2)))));
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            var_18 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) (signed char)-58)))));
                            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) 2147483647)) ? ((+(var_5))) : ((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_1]))))))));
                            arr_29 [(unsigned char)4] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_10))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_1] [i_0 + 2] [(signed char)0] [i_1])))))));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)24824)) ^ (((/* implicit */int) (unsigned char)203))))) ? (var_5) : (((((/* implicit */int) var_10)) * (((/* implicit */int) (short)9004)))));
                            arr_33 [i_0 - 1] [i_1] [i_2] [i_7] [i_9] = ((/* implicit */int) arr_8 [i_1] [i_2] [17LL] [i_9]);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-74)) / (((/* implicit */int) (signed char)-61)))))));
                            var_23 = ((/* implicit */long long int) var_1);
                        }
                        for (short i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            arr_37 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                            arr_38 [i_2] [(unsigned char)11] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                            var_24 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_28 [i_0] [i_0 + 1] [i_10] [i_0 - 1] [i_2 - 3])));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) arr_32 [i_0 + 2] [i_0 - 1] [i_2 - 1] [1LL] [1LL])) ? (((/* implicit */int) arr_32 [i_0 + 2] [i_0 + 2] [i_2 + 1] [(_Bool)1] [i_0 + 2])) : (((/* implicit */int) var_11)));
                        var_26 = ((/* implicit */unsigned char) arr_1 [13]);
                    }
                    arr_41 [i_2] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_0 - 1] [i_2 - 2] [i_2])))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 3) 
                    {
                        arr_47 [i_0] [(unsigned short)6] = ((/* implicit */long long int) ((arr_44 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]) <= (((/* implicit */int) (!(((/* implicit */_Bool) 65607610457982464LL)))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_12 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_12 + 1] [i_0 + 1])) : (var_5)));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) var_6);
                        /* LoopSeq 4 */
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            arr_54 [i_14] [i_14] [i_12 + 1] [i_1] [i_14] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_43 [i_0] [i_0]))))));
                            arr_55 [i_14] [i_1] [i_15] [i_14] [18] = (-(var_3));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_14] [i_1] [i_15] [i_14] [i_15] [(unsigned short)1])) ? (arr_50 [i_14] [i_1] [i_12] [i_1] [i_15] [i_1]) : (((/* implicit */int) var_4))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            arr_59 [i_14] [i_1] [i_14] [10ULL] [i_14] [i_14] = ((unsigned long long int) var_4);
                            arr_60 [(signed char)12] [i_14] [i_12 - 1] [(short)4] [i_16] = ((/* implicit */signed char) var_7);
                        }
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            arr_65 [i_0 + 1] [i_0] [i_14] [(unsigned short)1] [i_0 - 1] = ((/* implicit */long long int) arr_61 [9ULL] [i_14]);
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
                            var_31 = ((/* implicit */int) ((((0LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))))) || (((/* implicit */_Bool) ((unsigned long long int) -7522738364841081513LL)))));
                            arr_66 [i_14] = ((/* implicit */signed char) arr_49 [i_17 + 1] [0LL] [i_12] [4ULL] [15]);
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) var_7))));
                        }
                        for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            arr_69 [i_0 - 1] [i_1] [4] [i_0 - 1] [(signed char)2] [i_1] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            var_33 += ((/* implicit */short) (~(arr_45 [i_14] [i_12 - 1] [i_14] [i_0 + 1])));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (3499834807359275197ULL)));
                        }
                    }
                    arr_70 [i_0] [(signed char)19] [i_1] [i_12] = ((/* implicit */int) (short)0);
                }
                for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) var_2);
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 4; i_20 < 17; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 1; i_21 < 18; i_21 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))))))));
                                var_37 ^= (!(((/* implicit */_Bool) max((arr_12 [i_20] [18] [18] [0LL] [i_20 - 2] [i_21]), (arr_12 [i_1] [i_19] [i_19] [14ULL] [i_20 - 2] [2LL])))));
                                arr_80 [i_0] [6ULL] [i_19] [i_0] [i_20 - 4] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1401628805)) ? (((/* implicit */unsigned long long int) -1223386340249349989LL)) : (18446744073709551615ULL)))) || (((/* implicit */_Bool) var_8))));
                                var_38 = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)23))));
                    var_40 = ((/* implicit */_Bool) var_5);
                }
            }
        } 
    } 
    var_41 -= ((/* implicit */long long int) ((unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (short)-32764))) / (var_7))), (-7522738364841081513LL))));
}
