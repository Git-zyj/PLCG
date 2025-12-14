/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174331
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_17 |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_3 [(_Bool)0]))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_0] [4ULL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1705488739U)) ? (2147483647) : (((/* implicit */int) (unsigned short)8627)))), (((((/* implicit */int) arr_0 [i_0 - 2])) - (((/* implicit */int) arr_0 [i_0 - 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1029274485)) ? (1150035169266425082ULL) : (((/* implicit */unsigned long long int) 1972677068U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_0] [i_1] [i_3]), (((/* implicit */short) (_Bool)0))))))))) ? (((((/* implicit */int) (_Bool)1)) * (-2147483647))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])));
                            arr_14 [i_0] [i_2] [i_2 - 1] [12] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3 - 1]);
                        }
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_7 [i_2 - 1] [i_0 - 2] [i_0]), (arr_7 [i_2 - 1] [i_0 + 1] [1U])))), (((((/* implicit */unsigned long long int) arr_10 [i_5] [i_0] [i_5] [i_3] [i_3 - 2] [i_0])) * (min((((/* implicit */unsigned long long int) arr_13 [i_0 - 2] [i_1] [i_2] [i_2] [i_5] [i_0 - 2])), (arr_9 [i_2])))))));
                            var_20 = ((unsigned int) max((((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])), (max((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5] [i_5])), (var_13)))));
                            arr_18 [i_5] [12U] [i_2] [i_1] [i_2] [i_1] [i_0] = max((((((/* implicit */_Bool) arr_10 [i_0] [11ULL] [i_2 - 1] [i_3] [i_3 + 1] [i_3])) ? (var_14) : (((/* implicit */unsigned int) arr_10 [8] [i_0] [i_2 - 1] [i_5] [8] [i_2 - 1])))), (((/* implicit */unsigned int) ((arr_13 [i_0 + 1] [(signed char)2] [2U] [i_3 - 1] [i_5] [(signed char)2]) - (arr_13 [i_0 - 1] [11ULL] [i_0 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 1])))));
                            arr_19 [(_Bool)1] [i_1] [i_2] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */signed char) (-(arr_12 [i_0 - 1])));
                        }
                    }
                } 
            } 
            arr_20 [12ULL] [i_0] = ((/* implicit */unsigned long long int) arr_17 [8ULL] [8ULL] [i_0 + 1]);
            var_21 = ((/* implicit */unsigned char) arr_9 [i_0]);
        }
        for (signed char i_6 = 4; i_6 < 10; i_6 += 3) 
        {
            var_22 = ((/* implicit */int) 1972677068U);
            /* LoopSeq 2 */
            for (int i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                arr_26 [i_6] = ((/* implicit */unsigned int) -2147483647);
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7] [i_6] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((((/* implicit */_Bool) 2322290227U)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_7])))) && (((/* implicit */_Bool) arr_9 [i_6])))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_6 + 1] [i_9])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)83)) - (2147483646))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_9] [i_6] [i_0])) || (var_7)))) : (((/* implicit */int) arr_17 [i_0 - 2] [i_8 - 1] [(unsigned short)8])))))));
                    var_26 = (short)21959;
                    arr_31 [i_6] [i_8] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_0] [i_6] [i_9]))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_0 - 2] [i_0] [i_0] [i_8] [i_9])) ? (arr_13 [i_0] [i_6 + 1] [12] [i_8 - 4] [i_0] [i_9]) : (arr_13 [10ULL] [i_6] [i_8] [i_6] [i_9] [i_9])));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    var_28 &= 35492669U;
                    var_29 = ((/* implicit */unsigned char) 1526873304U);
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 4; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_30 &= ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                            var_31 = arr_3 [i_11];
                        }
                    } 
                } 
            }
            var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_0 - 1])) ? (arr_4 [i_6] [i_6] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) arr_29 [i_6 - 1])) ? (arr_29 [i_6 - 4]) : (arr_29 [i_6 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))));
            var_33 *= ((/* implicit */unsigned char) arr_17 [i_0 - 1] [i_0 - 1] [i_6]);
        }
        for (unsigned char i_13 = 3; i_13 < 11; i_13 += 3) 
        {
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_34 [(unsigned short)4] [i_13] [i_13] [i_13] [i_13]))));
            arr_44 [8U] = ((/* implicit */short) -2147483647);
            var_35 = ((/* implicit */unsigned long long int) var_15);
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                var_36 = ((/* implicit */short) arr_24 [i_13 + 1] [i_0 + 1] [i_0 - 2]);
                arr_47 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_13] [i_13 + 2])) ? (-2147483646) : (((/* implicit */int) arr_21 [i_0 - 2] [i_0 - 1] [i_13 + 1])))) <= (((/* implicit */int) ((2147483646) != (((/* implicit */int) (signed char)127)))))));
            }
        }
        for (short i_15 = 2; i_15 < 12; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    {
                        arr_55 [i_0] [i_0] [(_Bool)1] [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_29 [i_15 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            arr_60 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = arr_39 [i_0] [i_15 - 1] [(_Bool)1] [i_16] [9ULL] [i_17] [i_18];
                            arr_61 [i_0 - 2] [i_15] [i_0 - 2] [i_0 - 2] [10] [i_17] [i_18] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (arr_46 [8U] [(unsigned short)8])));
                            arr_62 [i_0 - 1] [i_15] [i_15] [i_0 - 1] [i_18] [5ULL] [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((12345888302587925375ULL), (arr_48 [i_0 + 1] [i_0] [i_0])))) ? ((-(2147483647))) : (((/* implicit */int) arr_17 [i_17] [i_15 - 2] [i_0]))));
                        }
                        arr_63 [i_0] [(unsigned short)10] [i_0] [i_0] &= arr_9 [i_15];
                        var_37 = 1972677069U;
                    }
                } 
            } 
            arr_64 [i_15] [i_15] [i_0] |= arr_40 [i_15] [(_Bool)1] [i_0] [i_0 - 1] [i_0 - 1] [i_15];
            arr_65 [(short)9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2]))), (min((((/* implicit */int) var_12)), (arr_1 [i_0 + 1])))));
            arr_66 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_27 [i_0])), (arr_15 [i_15 - 1] [i_15 - 1] [i_15 + 1])))) ? (((((/* implicit */_Bool) arr_27 [i_0])) ? (arr_15 [i_15 - 2] [i_15 - 2] [i_15 - 2]) : (arr_15 [i_15 - 1] [i_15 - 1] [i_15 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_15 - 1] [i_15 + 1])))));
        }
    }
    for (unsigned char i_19 = 2; i_19 < 20; i_19 += 4) 
    {
        var_38 = var_3;
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_67 [7ULL] [i_19]))) ? (arr_67 [i_19 + 4] [(short)0]) : (((/* implicit */unsigned long long int) arr_68 [22]))));
        var_40 = ((/* implicit */unsigned long long int) ((short) arr_68 [i_19 + 1]));
        var_41 = ((/* implicit */signed char) arr_67 [(unsigned char)13] [i_19]);
    }
    for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 1) 
    {
        var_42 = ((/* implicit */int) arr_67 [(unsigned char)7] [i_20]);
        arr_72 [i_20] = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_67 [i_20] [i_20]) >> (((arr_67 [i_20] [i_20]) - (6161747357797747887ULL)))))) ? (15115267025409040349ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_20] [i_20])) && (((/* implicit */_Bool) arr_70 [i_20] [i_20])))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [(_Bool)1] [i_20])))));
    }
    var_43 = ((/* implicit */short) min((((/* implicit */int) var_12)), ((-(((/* implicit */int) max((((/* implicit */short) var_1)), (var_3))))))));
    /* LoopNest 3 */
    for (short i_21 = 0; i_21 < 16; i_21 += 3) 
    {
        for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) 
        {
            for (unsigned int i_23 = 4; i_23 < 15; i_23 += 2) 
            {
                {
                    var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) 10303519337020321648ULL))));
                    arr_83 [i_21] [(unsigned char)10] [(unsigned char)10] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    arr_84 [i_21] [i_22] [i_21] = ((/* implicit */int) arr_76 [i_22]);
                    var_45 = ((/* implicit */unsigned int) arr_81 [i_22] [10ULL]);
                }
            } 
        } 
    } 
    var_46 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (((max((759519313U), (((/* implicit */unsigned int) var_9)))) | (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (157382513))))))));
    var_47 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_7))));
}
