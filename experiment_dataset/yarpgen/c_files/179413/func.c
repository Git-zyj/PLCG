/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179413
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_1] [7LL]);
                    arr_8 [i_2] [i_2 - 1] [i_0] [i_0] = (!(((/* implicit */_Bool) ((unsigned int) 5850415935998081767ULL))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 274877906942LL)), (18446744073709551602ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 3]))) - (arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */signed char) 12596328137711469848ULL);
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
        {
            arr_19 [i_4] [13ULL] [i_3 + 1] = ((/* implicit */long long int) arr_3 [i_4] [i_3]);
            /* LoopSeq 1 */
            for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                arr_24 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((max((arr_16 [i_3 + 1]), (((/* implicit */long long int) ((unsigned int) 9223372036854775807LL))))) / (arr_17 [i_3] [i_5])));
                arr_25 [i_3] [i_3] [2LL] [3LL] = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) 
                {
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        {
                            arr_33 [i_4] = ((/* implicit */signed char) var_6);
                            arr_34 [i_3 + 2] [i_4] [i_5] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_3] [i_4] [i_7] [i_6] [(unsigned short)4])) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_17 [i_4] [i_6])))));
                            arr_35 [i_7 + 1] [i_7] [(signed char)12] [i_7] [(signed char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) max(((signed char)(-127 - 1)), ((signed char)127))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) (_Bool)1)) <= (((((/* implicit */unsigned long long int) 0U)) * (34902897112121344ULL))))))) : ((((!((_Bool)1))) ? (((/* implicit */long long int) 1586545292)) : (17591649173504LL)))));
                            arr_36 [i_3] [i_4] [i_4] [12LL] [i_4] [i_7] [i_7 + 1] &= ((/* implicit */long long int) (+(var_9)));
                            arr_37 [i_7] = ((unsigned long long int) 2416268248907425887LL);
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
        {
            arr_41 [i_3 - 1] [9LL] = ((/* implicit */int) arr_16 [i_3]);
            arr_42 [1ULL] [i_8] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (0U) : (0U)))), (arr_27 [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3 - 3]))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        arr_48 [10] [i_10] = ((((/* implicit */_Bool) (+(arr_15 [i_3] [i_3 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (((unsigned long long int) arr_23 [i_3 + 2] [i_3 - 3] [i_9 - 1])));
                        arr_49 [i_10] [i_9] [i_3 - 2] [i_10] = max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 5078578303854559021LL)) != (1941855843974976669ULL)))), (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_10])) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4611686018427387904LL))) : (((/* implicit */long long int) 2147483647)))));
                    }
                } 
            } 
        }
    }
    var_15 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((long long int) var_1))) && (((/* implicit */_Bool) ((int) var_4)))))));
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 12; i_11 += 3) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        for (long long int i_15 = 1; i_15 < 11; i_15 += 2) 
                        {
                            {
                                arr_62 [i_13] [i_14] [i_13] [i_12] [i_11 + 2] = ((/* implicit */long long int) var_12);
                                arr_63 [i_11] [i_15] [i_11] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 2; i_18 < 12; i_18 += 3) 
                        {
                            {
                                arr_72 [i_11] [i_12] [i_18] [i_18] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((5850415935998081772ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2181843386368LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (1551339549U)))))))));
                                arr_73 [i_18] = ((/* implicit */signed char) max((((/* implicit */int) (short)21544)), ((-(((/* implicit */int) max(((short)-21548), (((/* implicit */short) arr_43 [i_11 + 1] [(unsigned short)3] [i_16] [i_17])))))))));
                                arr_74 [0ULL] [i_12] [i_16] = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 3; i_19 < 13; i_19 += 4) 
                    {
                        arr_77 [i_11 + 1] [i_16] [i_16] [i_11 + 1] |= ((/* implicit */unsigned short) ((unsigned long long int) (-(var_2))));
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            arr_80 [i_11] [i_12] [i_12] [i_11 - 2] [i_11 - 2] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2ULL] [i_20] [7U] [i_19])) ? (((/* implicit */unsigned long long int) max((min((17591649173504LL), (-1LL))), (((/* implicit */long long int) ((2181843386368LL) < (arr_23 [1LL] [1LL] [1LL]))))))) : (((((/* implicit */_Bool) ((unsigned short) arr_76 [i_11] [i_20] [i_16] [i_19] [i_20] [i_19 + 1]))) ? (max((var_3), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (5017686645015699211LL))))))));
                            arr_81 [10LL] [i_19] [i_19] [i_19 - 3] [i_20] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [(signed char)5] [(signed char)9] [(signed char)0] [i_11])) ? (((/* implicit */unsigned long long int) arr_3 [13] [(short)0])) : (max((var_1), (((/* implicit */unsigned long long int) arr_26 [i_19 - 2] [i_20] [i_19 - 2] [i_19 - 2]))))));
                            arr_82 [i_19] [i_19] [i_12] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)-21546)), (2147483647)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_31 [i_11] [i_11] [i_16] [i_11] [(short)7])))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_44 [i_16]))))))));
                        }
                        arr_83 [i_16] [i_16] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)52451))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (long long int i_22 = 2; i_22 < 13; i_22 += 2) 
                        {
                            {
                                arr_88 [i_11 - 2] [1LL] [1LL] [i_11 - 1] [1LL] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)62)) / (-1835021478))))));
                                arr_89 [(unsigned short)12] [i_12] [2ULL] [i_12] [i_12] [i_12] = ((/* implicit */short) var_10);
                                arr_90 [12ULL] [i_21] [i_16 + 1] [i_12] [11LL] = ((/* implicit */long long int) arr_51 [i_21]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        arr_93 [i_11] [(signed char)13] [(signed char)12] [(_Bool)1] [(signed char)13] = ((unsigned int) arr_57 [i_16 + 1] [i_16 + 1] [i_16 + 1]);
                        arr_94 [i_11] [i_11] [i_16 - 1] [i_23] = ((/* implicit */unsigned short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-21546)) ? (295576754) : (((/* implicit */int) (_Bool)1)))))));
                        arr_95 [i_11] [4LL] [i_11] [12LL] [12LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21546)) ? (max((((var_11) & (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)21545))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (arr_53 [i_11] [i_12] [i_16]) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_11] [i_11])) >> (((((/* implicit */int) (unsigned short)65535)) - (65535)))))))))));
                        arr_96 [i_23] [13] [i_12] [i_11] = (+(((((/* implicit */_Bool) arr_60 [i_11 - 2])) ? (arr_78 [i_11 - 2] [1U] [i_16] [i_12] [i_16] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_11 - 1]))))));
                    }
                    arr_97 [i_11 + 1] [i_11 + 1] [i_16 - 1] = ((/* implicit */long long int) var_11);
                }
            }
        } 
    } 
}
