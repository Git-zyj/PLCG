/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178929
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [5ULL] [i_1])) <= (((/* implicit */int) arr_7 [i_1] [(unsigned short)1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)14737)) > (((/* implicit */int) (short)-6446))));
                                arr_14 [i_0] [i_1] [(unsigned char)10] [(signed char)8] = ((/* implicit */unsigned long long int) arr_13 [i_4]);
                                arr_15 [i_3 + 2] [i_1] [i_2] [i_2] [i_3 + 2] = ((((/* implicit */_Bool) -2854120271650520657LL)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (arr_11 [i_0 + 3] [i_1] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5 + 4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) + (arr_19 [i_0 - 1] [i_1] [(unsigned char)0] [i_5 - 1])))));
                                arr_23 [i_0] [(short)11] [i_2] [i_5] [i_6] = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    arr_26 [i_0] [i_7 + 1] = ((/* implicit */short) (unsigned short)5866);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (6161900892807049972LL)));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-11)) ? (9764302971889040886ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40835)))))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_28 [(unsigned char)8] [i_1] [4ULL] [i_9]))));
                        }
                        var_22 |= arr_2 [i_0] [i_0];
                        arr_33 [i_0 + 3] [i_8] [i_7 - 1] [i_7] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)7))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        arr_36 [i_10] [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_24 [i_0] [i_7] [i_0]));
                        arr_37 [i_0 - 3] [11LL] [11LL] [(short)6] [i_0 + 4] [11LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (arr_5 [i_0 + 4] [i_7 + 2]) : (arr_5 [i_0 + 4] [i_7 + 1])));
                        arr_38 [i_10] [8ULL] [i_0 + 2] = ((/* implicit */unsigned int) ((((arr_11 [i_0] [(_Bool)1] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [(short)7]))))) >> (((((/* implicit */int) (short)30241)) - (30181)))));
                    }
                }
                /* vectorizable */
                for (short i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((arr_24 [(short)0] [i_11 + 2] [i_0 + 4]) ^ (arr_24 [i_0] [i_11 + 1] [i_0 + 3]))))));
                    arr_41 [i_0] [5ULL] [i_11] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39520))) + (14615309058476766930ULL)));
                    var_24 -= ((/* implicit */unsigned long long int) ((short) arr_13 [i_0 + 2]));
                    arr_42 [i_0] [i_0] = ((/* implicit */short) arr_20 [i_0] [i_1] [i_11 + 2] [i_1] [i_11]);
                }
                for (short i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [i_1])) ? (arr_25 [i_1]) : (arr_25 [i_12 + 2]))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 10; i_13 += 3) 
                    {
                        arr_47 [4LL] [i_12 - 1] [(short)11] = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_0 - 1] [i_12 + 1] [i_12 + 1]);
                        /* LoopSeq 4 */
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_1] [i_12] [i_1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12 + 1] [i_12 - 1] [i_14] [i_14])) ? (arr_34 [(unsigned char)4] [(unsigned char)4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_12 + 2] [i_14] [i_13])))));
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-26))));
                            arr_52 [(signed char)5] [9] [9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_12 + 2] [i_13 - 2]))));
                        }
                        for (short i_15 = 2; i_15 < 11; i_15 += 1) 
                        {
                            arr_56 [i_15] [i_1] [(_Bool)0] [i_1] [i_13 - 2] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_13 - 2])) ? (arr_29 [i_15 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 2] [i_13 + 2])))));
                            var_27 *= ((/* implicit */signed char) ((unsigned char) arr_34 [i_0] [i_1] [i_1]));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-127)) > (((/* implicit */int) (unsigned short)8528))));
                        }
                        for (signed char i_16 = 2; i_16 < 11; i_16 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned short) (unsigned char)177);
                            var_30 = ((/* implicit */short) (signed char)-20);
                            arr_60 [i_0 - 3] [10ULL] [i_1] [i_0 - 3] [i_1] [0U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)254))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3425570085689188350LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            arr_61 [i_0] [(signed char)0] [i_12 - 1] [i_13 - 2] [i_13] [i_16] [i_13 - 2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)30655))));
                        }
                        for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_31 |= ((/* implicit */unsigned int) (-(-1815000038)));
                            var_32 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17] [i_1] [(unsigned char)8] [i_1] [i_12]))) : (arr_29 [2])))) % (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [(signed char)5] [i_0] [i_0] [i_0]))) : (240998746674537538LL)))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            arr_66 [i_0] [(short)11] [i_18] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)3)) != (((/* implicit */int) arr_58 [i_0] [i_1] [i_18] [i_13] [i_13])))))));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (arr_62 [i_0] [i_0] [i_1] [i_1] [i_12 + 1] [i_13] [i_18])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_13 - 2] [i_13]))) : (arr_3 [i_0 + 1]))))));
                            var_34 = ((/* implicit */short) (signed char)-21);
                        }
                        for (unsigned char i_19 = 2; i_19 < 9; i_19 += 4) /* same iter space */
                        {
                            var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) (short)30231))));
                            arr_69 [11U] [i_13] [i_12] [i_1] [11U] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0 - 2] [i_13 + 1])) > (((/* implicit */int) arr_7 [i_0 + 3] [i_13 - 2]))));
                        }
                        for (unsigned char i_20 = 2; i_20 < 9; i_20 += 4) /* same iter space */
                        {
                            arr_72 [0U] [i_1] [i_12] = ((/* implicit */long long int) arr_62 [i_0] [i_0] [i_1] [i_13] [i_20] [i_20] [i_20]);
                            arr_73 [(signed char)10] [(signed char)10] [i_12] [i_13] [i_20] = ((/* implicit */unsigned short) (short)-5465);
                        }
                        for (unsigned char i_21 = 2; i_21 < 9; i_21 += 4) /* same iter space */
                        {
                            arr_76 [i_0] [i_1] [i_12] [i_0] [i_21] [i_0] [i_13 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) arr_27 [(unsigned char)0] [i_1] [(unsigned char)6] [i_1] [i_21 - 1])) : (((/* implicit */int) arr_45 [(signed char)9] [i_21 + 3] [(short)11] [i_21]))));
                            var_36 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_12 - 1] [i_21] [i_12] [i_21]))));
                        }
                    }
                    arr_77 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(3268608804U)))) : (min((arr_39 [(_Bool)1] [i_1] [i_12]), (((/* implicit */unsigned long long int) (signed char)-75)))))));
                    arr_78 [i_0 + 3] [i_1] [(short)6] = ((/* implicit */signed char) (short)-30242);
                }
                for (short i_22 = 1; i_22 < 10; i_22 += 4) /* same iter space */
                {
                    arr_82 [i_0] [i_1] [i_22] [i_22] = ((/* implicit */short) (signed char)-127);
                    var_37 ^= ((/* implicit */short) arr_65 [i_22] [i_1] [(unsigned char)0]);
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) (+(min((-9181016439076334337LL), (((/* implicit */long long int) (!((_Bool)1))))))));
    var_39 = ((/* implicit */long long int) var_15);
    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) min((((signed char) (unsigned char)87)), (var_12))))));
    var_41 ^= ((/* implicit */int) max((var_10), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -7224414628772161258LL)) ? (-1LL) : (var_14))))))));
}
