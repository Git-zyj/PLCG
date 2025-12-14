/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158084
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) 0U);
                                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_3 [i_3] [i_4]) >= (((var_6) << (((3604121618U) - (3604121609U)))))))) << (((((/* implicit */int) arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3])) - (18383)))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((max((((arr_5 [11ULL] [i_4]) ? (3604121618U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_3]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))) + (var_5))))));
                                arr_16 [i_0] [(unsigned char)3] [5ULL] [i_2] [(unsigned char)2] [(signed char)5] = ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] = ((/* implicit */unsigned long long int) min((arr_3 [i_0] [13]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 + 2] [i_2 - 4]))) / (((unsigned int) var_3))))));
                                arr_22 [i_6] [i_5] [i_2] [i_1] [i_0] = arr_10 [i_0] [i_1] [i_2] [i_5];
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (4294967295U)))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0])), ((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_1 [i_2] [i_0]))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 4; i_7 < 19; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_24 [11ULL] [i_2] [i_1] [i_0])) ? (arr_23 [i_7] [i_1] [i_2] [i_7 - 2]) : (((/* implicit */unsigned long long int) arr_24 [i_0] [(_Bool)1] [i_2] [i_7]))))));
                        var_19 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (var_5) : (var_5)))), (var_7))), (((/* implicit */unsigned long long int) -905319487))));
                        arr_26 [i_7] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [11ULL] [17LL] [i_1] [19]));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_13 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2 - 3] [i_8 + 1] [i_8 - 1]));
                        arr_30 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [(short)8] [i_1] [i_2 - 2] [i_8]))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [(signed char)10] [i_0] [i_1] [i_2] [0U] [i_9] [(unsigned char)0] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                            var_20 = ((/* implicit */_Bool) (-(2U)));
                            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                        }
                    }
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_22 |= ((/* implicit */int) ((unsigned char) arr_3 [(unsigned char)2] [12LL]));
                            arr_41 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_11)))));
                            arr_42 [i_0] [i_1] [i_2] [i_10] [i_11] = (!((_Bool)0));
                        }
                        arr_43 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) << (((var_8) - (18380814556249946744ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) var_12)))) + (2147483647))) << (((((((/* implicit */int) arr_6 [(unsigned char)6] [i_12])) + (((/* implicit */int) (_Bool)0)))) - (78)))))) != (max((((/* implicit */unsigned int) ((unsigned char) 690845678U))), (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_10] [i_12])))))))));
                            arr_46 [i_0] [i_1] [i_2] [9ULL] [i_12] = ((/* implicit */unsigned int) max((min((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_2)))))), ((~((-(((/* implicit */int) var_11))))))));
                            arr_47 [i_0] [(unsigned short)17] [15U] [i_10] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_40 [11ULL] [i_1] [i_1] [i_10] [i_12] [i_0] [5U])), (min((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))), (4143948542052604910ULL)))));
                            arr_48 [i_0] [i_1] [i_2] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */unsigned char) var_8);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 690845672U)) && (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (690845677U) : (var_6)))))))) != (max((arr_25 [i_10 + 1] [i_13]), (((/* implicit */unsigned long long int) arr_14 [i_10 - 1] [i_13] [i_0 + 1] [i_2 - 1] [i_13]))))));
                            arr_51 [i_0] [i_13] [15U] [i_10] [i_13] = var_6;
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_14 = 4; i_14 < 17; i_14 += 4) 
    {
        arr_55 [4LL] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_14 + 2] [i_14] [i_14] [i_14 - 2]))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) * (var_8)))));
        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_14] [i_14] [i_14] [i_14]))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
        {
            for (short i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 3; i_17 < 15; i_17 += 1) 
                    {
                        arr_62 [i_14] [i_15] [i_16] [i_17] = ((/* implicit */unsigned char) (-(((unsigned long long int) var_9))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_12))));
                        var_29 = ((/* implicit */long long int) var_2);
                        arr_63 [i_15] [i_15] [i_16] = ((/* implicit */unsigned char) 3604121618U);
                        var_30 = ((((/* implicit */int) var_10)) / (arr_8 [(unsigned char)1] [i_14] [i_16] [i_17]));
                    }
                    for (int i_18 = 1; i_18 < 15; i_18 += 1) 
                    {
                        arr_66 [i_15] [i_15] = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_14]))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [17LL] [i_16])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 2; i_20 < 16; i_20 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((long long int) arr_27 [i_14 + 2] [i_20 - 2]));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (4294967294U))))));
                            var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_32 [i_19] [i_15] [i_16] [i_19] [i_20] [i_14]) < (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                            var_35 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_14 - 1] [i_14 - 3] [i_20 + 3] [i_20 + 2]))));
                        }
                        for (short i_21 = 0; i_21 < 19; i_21 += 4) 
                        {
                            arr_75 [i_15] [i_19] = var_0;
                            var_36 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [10ULL] [i_15] [i_16] [i_19] [i_21]))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4294967287U)) : (14302795531656946705ULL)))));
                            var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_14 - 2]))));
                            var_38 = ((/* implicit */long long int) (-(arr_32 [i_21] [i_21] [i_16] [i_14 + 1] [i_14 - 3] [i_14 - 4])));
                            arr_76 [i_14] [i_15] [i_15] [i_19] [i_21] = ((/* implicit */int) (_Bool)1);
                        }
                        var_39 = ((/* implicit */unsigned long long int) 4294967295U);
                        arr_77 [i_14] [i_15] [i_15] [(unsigned char)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                        arr_78 [i_15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_53 [12ULL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_19] [i_16] [0] [i_15] [i_15] [11U]))))));
                    }
                    var_40 &= ((/* implicit */unsigned int) var_0);
                    arr_79 [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_14 - 1] [i_14 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
    }
}
