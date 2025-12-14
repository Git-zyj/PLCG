/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11917
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
    var_18 = var_11;
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 9007199254740480ULL)) ? (((/* implicit */int) var_10)) : (var_12)))))), (((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32759)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) ? (((arr_0 [10] [i_0]) / (((/* implicit */unsigned long long int) arr_1 [(short)10] [i_1])))) : (((9007199254740480ULL) * (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
            var_21 &= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (signed char)116)), ((+(((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) >= (18437736874454811143ULL))))));
            arr_4 [3LL] &= ((/* implicit */_Bool) -5);
            var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 339304739))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) <= (arr_1 [i_0] [i_1])))))));
            arr_5 [8LL] [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_23 = (((-(arr_1 [i_0] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1211875773)))));
            var_24 = ((/* implicit */unsigned int) arr_2 [i_0]);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
        {
            arr_12 [i_0] [i_3] &= ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3]))) <= (9007199254740480ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(_Bool)1])) || (((/* implicit */_Bool) 6414800023984369422LL))))));
            arr_13 [i_0] [i_3] &= ((/* implicit */unsigned short) ((signed char) 17441624014112352694ULL));
            var_25 &= ((/* implicit */unsigned char) (+(arr_6 [i_3])));
        }
        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    arr_22 [i_6] [i_4] [i_5] [i_6] &= ((/* implicit */signed char) arr_18 [i_5 - 2] [i_5 - 2] [i_5 - 2]);
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_5 + 2] [i_4] [i_0])) ? (arr_8 [i_5 - 1] [i_5] [(unsigned char)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))), (((arr_8 [i_5 + 4] [i_4] [i_5]) << (((arr_8 [i_5 + 1] [i_4] [i_5 + 1]) - (3303676006U))))))))));
                }
                for (unsigned char i_7 = 4; i_7 < 8; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        arr_28 [i_8] [1U] [1U] [1U] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((339304739) << (((arr_24 [i_5 + 1] [i_7 + 2] [i_5] [i_7]) - (687705783)))))) ? (((arr_24 [i_5 - 1] [i_7 + 1] [(unsigned char)4] [i_7]) | (arr_24 [i_5 + 2] [i_7 + 3] [i_5 + 2] [i_5 + 2]))) : (max((arr_24 [i_5 + 2] [i_7 - 4] [i_5] [i_7 + 2]), (arr_24 [i_5 + 2] [i_7 - 3] [i_0] [i_7])))));
                        var_27 = ((/* implicit */long long int) arr_20 [i_0] [i_4] [i_5] [i_4]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_5 + 3] [(short)2])) <= (((((/* implicit */_Bool) -6414800023984369424LL)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_5] [i_7 + 1])) : (3)))));
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_4] [i_0] [i_7] [i_9])))))) + (arr_29 [i_0] [i_4])));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] = ((/* implicit */signed char) ((int) arr_30 [9] [i_5 - 2] [i_5] [i_7] [i_7 + 2]));
                    }
                    var_30 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)191))))));
                    var_31 = ((/* implicit */unsigned long long int) (~((~(max((var_9), (((/* implicit */int) var_8))))))));
                }
                arr_32 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 3691373432U)) ? (arr_9 [i_0] [i_4] [5U]) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]), (var_17)))))))));
            }
            for (unsigned short i_10 = 2; i_10 < 7; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned int i_12 = 3; i_12 < 9; i_12 += 4) 
                    {
                        {
                            arr_39 [5U] [i_12] = ((((/* implicit */_Bool) ((unsigned long long int) 3691373432U))) ? ((((~(arr_3 [i_0] [i_4] [i_10]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)12)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-113)) / (arr_24 [i_12 - 1] [i_12] [i_10 - 1] [i_10 + 1])))) ? (((((/* implicit */_Bool) arr_36 [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (arr_24 [i_12 + 1] [i_12] [i_10 - 2] [i_10 - 2]) : (arr_24 [i_12 + 1] [i_11] [i_10 + 3] [i_10 - 2]))) : (max((((/* implicit */int) arr_36 [i_12] [i_10 + 1] [i_10 - 1])), (arr_24 [i_12 - 3] [i_12] [i_10 + 2] [i_10 - 1])))));
                            var_33 = ((/* implicit */short) arr_26 [8] [i_12 + 1] [i_12] [i_12] [(unsigned char)8]);
                            var_34 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) arr_20 [(_Bool)1] [(_Bool)1] [i_11] [i_11]))))), (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-117)))) << ((((-(((/* implicit */int) var_7)))) + (108)))))));
                            arr_40 [i_12 - 3] [i_4] &= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)157));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 1; i_14 < 8; i_14 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_9 [i_10] [i_10 + 3] [i_10]))))));
                            arr_47 [i_0] [i_4] [i_13] = ((/* implicit */short) ((((7784523636786447210ULL) / (1688849860263936ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            arr_57 [i_0] [i_4] [i_15] [i_16] [i_17] = ((/* implicit */int) ((unsigned char) ((unsigned short) (~(((/* implicit */int) arr_2 [i_0]))))));
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_38 [i_4] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_17])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_16] [(signed char)4] [i_15 + 1] [i_4] [i_4])) ? (((/* implicit */int) arr_19 [(signed char)1] [i_17] [i_15 + 1] [i_4] [i_0])) : (((/* implicit */int) arr_19 [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_4]))))) : ((+(((arr_15 [i_16] [i_17]) << (((arr_27 [i_0] [i_0] [i_0] [i_16] [i_16]) - (10674903653384871291ULL)))))))));
                        }
                        var_36 &= ((arr_51 [i_15 + 1] [i_15 + 1] [i_15 - 1]) * (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) / (3691373432U)))));
                        arr_59 [i_0] [i_0] [i_4] [i_0] [i_0] &= ((/* implicit */int) (-(-7691396258808071451LL)));
                        var_37 -= ((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) (-(-339304738))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_38 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -339304738)) && (((/* implicit */_Bool) arr_15 [i_18] [i_19]))))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_19] [i_19] [i_18])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) -536870912)) ? (((/* implicit */long long int) arr_16 [i_0] [i_4] [i_18])) : (var_4))))) & (((/* implicit */long long int) 2892938568U))));
                        arr_65 [i_19] [i_19] [i_0] [i_19] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((130816ULL) >= (((/* implicit */unsigned long long int) arr_62 [i_4] [i_4] [i_19]))))), (max((0U), (((/* implicit */unsigned int) arr_56 [i_0] [i_0] [i_18] [i_19] [i_19] [i_0]))))));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((arr_6 [i_19]) ^ (((arr_6 [i_18]) << (((arr_6 [i_18]) - (1199589962369558202LL))))))))));
                    }
                } 
            } 
        }
        arr_66 [i_0] |= ((/* implicit */unsigned char) 1185543029U);
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) /* same iter space */
    {
        var_41 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (498714255U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30590)))))) ? (var_2) : (((/* implicit */long long int) ((339304739) % (23893691))))));
        /* LoopNest 2 */
        for (short i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            for (unsigned int i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) 
                        {
                            {
                                var_42 -= ((/* implicit */unsigned long long int) ((unsigned char) arr_44 [i_20] [i_21] [i_22] [i_23] [i_24]));
                                var_43 = ((/* implicit */unsigned int) max((var_43), ((~(arr_1 [i_22] [i_24])))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */int) ((unsigned long long int) arr_43 [i_20] [i_20] [i_21] [i_20] [(signed char)10]));
                    /* LoopNest 2 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 1; i_26 < 9; i_26 += 3) 
                        {
                            {
                                var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_20] [i_20] [i_22] [i_25] [i_26])) ? (((/* implicit */int) arr_30 [i_20] [i_21] [i_22] [i_25] [i_25])) : (((/* implicit */int) (unsigned char)95))))) ? (((var_2) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_20] [i_22] [i_22]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                                var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) ((8388607ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                                arr_84 [i_22] [i_20] [i_20] &= ((/* implicit */unsigned long long int) arr_72 [i_20] [i_20]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 2) /* same iter space */
    {
        arr_89 [i_27] [i_27] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned short)1024)))), (((/* implicit */int) ((((/* implicit */int) (short)32754)) >= (((/* implicit */int) (unsigned char)83)))))));
        arr_90 [i_27] [i_27] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_27] [i_27]))) * (((((/* implicit */unsigned long long int) -23893691)) * (0ULL))))) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(arr_82 [i_27] [i_27] [i_27] [i_27] [i_27])))), (arr_63 [i_27] [i_27]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 2) 
        {
            for (unsigned short i_29 = 1; i_29 < 9; i_29 += 2) 
            {
                {
                    arr_96 [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(arr_54 [i_27]))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46155))) / (4294967287U)))))) ? (16491196350822556708ULL) : (((((/* implicit */_Bool) -4)) ? (((18446744073709551610ULL) % (1955547722886994890ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_27]))))))))));
                    arr_97 [i_27] [i_27] [i_27] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32759))) : (5861246969571359800LL)))) ? (arr_71 [i_27] [i_27]) : (((/* implicit */unsigned long long int) arr_8 [i_29 + 1] [i_29] [i_29])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_28] [i_28] [i_28] [i_28] [i_28]))));
                    var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) max(((((_Bool)1) ? (15075602039482946126ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned long long int) (unsigned short)65408)))))));
                }
            } 
        } 
    }
    var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_0)))) || (((/* implicit */_Bool) var_8))));
}
