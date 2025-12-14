/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135542
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        var_13 = (~(arr_4 [i_3 + 1] [i_3 - 1] [i_2 + 1]));
                        arr_8 [i_0] [i_1] [i_2 - 2] [i_3 - 2] [i_1] = ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL))) : (((/* implicit */unsigned long long int) (-2147483647 - 1))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_4 + 1] [i_2 - 1] [5ULL] = ((/* implicit */unsigned long long int) (~((-(2147483646)))));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 10663710518770652524ULL))) ? (arr_5 [i_0] [i_2 + 1] [i_4 - 1] [i_1]) : (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_15 = var_0;
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2 + 1] [i_5 + 1])))) ? (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))))) : (((((/* implicit */_Bool) arr_13 [2] [2] [i_6 - 1])) ? (((/* implicit */unsigned long long int) var_1)) : (8471873072515770476ULL))))))));
                        }
                        for (int i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(arr_15 [i_0] [i_2 + 1])))) : (((unsigned long long int) var_12)));
                            var_18 = (-(((/* implicit */int) ((unsigned short) -2147483647))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0] [i_5 + 1]))));
                        }
                        for (int i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            arr_22 [i_1] [i_1] [i_8 + 1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_2 - 2])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1])))))));
                        }
                        for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            arr_26 [(_Bool)1] [(_Bool)1] [(unsigned char)2] [i_0] [i_0] = arr_15 [i_0] [i_2 + 1];
                            arr_27 [2ULL] [i_0] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_12 [i_9] [i_1] [i_1] [i_0])))));
                        }
                        var_21 = ((/* implicit */unsigned short) (+(var_10)));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_3 [i_2] [i_2 - 2])) : (((/* implicit */int) (unsigned short)0))));
                    }
                    var_23 *= ((/* implicit */unsigned char) ((int) arr_18 [17ULL] [9ULL] [9ULL] [i_1] [i_1] [i_2 - 1]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        arr_30 [i_10] [i_2 - 2] [i_1] [5] = ((unsigned long long int) (+((-2147483647 - 1))));
                        arr_31 [i_0] [i_1] [9] [i_10] = ((/* implicit */int) ((unsigned long long int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                }
            } 
        } 
        arr_32 [i_0] [i_0] = 9466176072034457073ULL;
    }
    /* LoopSeq 4 */
    for (int i_11 = 3; i_11 < 19; i_11 += 4) 
    {
        var_25 = 2147483646;
        arr_36 [i_11 - 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_11]))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min(((+(((((/* implicit */_Bool) (unsigned char)9)) ? (arr_33 [i_11 - 1]) : (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)227))))))))));
        var_27 ^= ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) max((arr_33 [15ULL]), (((/* implicit */unsigned long long int) arr_35 [i_11])))))), (arr_34 [i_11 + 1])));
    }
    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min(((~(arr_33 [i_12]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_12] [i_12] [12ULL] [i_12] [i_12] [(_Bool)1])) + ((-(((/* implicit */int) var_4))))))))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_21 [i_12] [i_12] [i_12] [(unsigned short)16] [i_12] [i_12] [i_12]))));
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_33 [i_12]))));
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_34 [i_12]))))) ? (((unsigned long long int) 2147483647)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12]))))))));
        var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_12 [i_12] [i_12] [i_12] [i_12]))))), (arr_29 [i_12] [9ULL] [i_12] [i_12] [i_12])));
    }
    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
    {
        var_33 |= var_0;
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_19 [i_13] [(unsigned short)15] [i_13] [(unsigned short)15] [i_13] [i_13])), ((+(((/* implicit */int) (unsigned short)23799))))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_15 = 3; i_15 < 15; i_15 += 2) /* same iter space */
        {
            var_35 += ((/* implicit */int) ((short) var_4));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), ((+(((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523)))))))));
        }
        for (short i_16 = 3; i_16 < 15; i_16 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) ((int) arr_5 [i_14] [i_16 - 2] [i_16 + 1] [i_14]));
            var_38 = ((/* implicit */_Bool) ((unsigned long long int) 479339939677537195ULL));
            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_14] [i_14])) ? (arr_24 [i_16] [i_16 - 3] [i_16 - 1] [i_16 - 2] [i_16 - 3] [i_16 - 2]) : (((unsigned long long int) var_0))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((unsigned short) arr_34 [i_14])))));
            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (~(1048575))))));
            arr_53 [i_14] = var_3;
        }
        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
        {
            arr_57 [i_14] [i_18] = ((/* implicit */unsigned short) (~((~(var_5)))));
            /* LoopSeq 1 */
            for (int i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_19] [i_19] [i_19] [i_14] [i_14] [i_14])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((arr_1 [i_19]) && (((/* implicit */_Bool) (short)-1)))))));
                    var_44 = ((/* implicit */short) ((unsigned short) arr_15 [i_19] [i_20]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 2; i_21 < 15; i_21 += 2) 
                    {
                        arr_64 [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))));
                        var_45 += ((unsigned long long int) (_Bool)1);
                    }
                }
                for (int i_22 = 1; i_22 < 15; i_22 += 4) 
                {
                    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) arr_43 [i_14] [i_18]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        var_47 = ((/* implicit */int) max((var_47), ((~(arr_45 [i_18] [i_22 - 1] [i_22 - 1])))));
                        arr_71 [(short)12] [i_14] [i_14] [i_22 + 1] [(unsigned char)8] [i_23] = 18184659610804127947ULL;
                        arr_72 [12ULL] [12ULL] [i_14] [i_22 + 1] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) arr_66 [i_18] [i_22 - 1] [i_22 + 1] [i_23] [i_18] [i_18])) : (-958243382)));
                    }
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) | (((((/* implicit */_Bool) var_12)) ? (arr_29 [i_14] [(short)9] [(short)9] [(short)9] [i_22 - 1]) : (arr_44 [i_14])))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_24 = 0; i_24 < 16; i_24 += 2) /* same iter space */
                {
                    arr_75 [i_19] [(unsigned short)7] [i_14] [i_24] [8] [(unsigned short)7] = (-2147483647 - 1);
                    arr_76 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_14] [i_14] [11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_14] [i_14] [i_14])) >> (((((/* implicit */int) arr_2 [i_14] [i_14] [i_14])) - (40894)))))) : (((((/* implicit */_Bool) arr_60 [i_14] [i_14] [i_14] [i_14])) ? (arr_50 [i_14] [i_18] [i_18]) : (arr_18 [15] [15] [(unsigned short)6] [i_19] [i_19] [(short)17])))));
                    arr_77 [(short)13] [(short)13] [i_18] [i_18] [(short)13] [i_14] = ((/* implicit */unsigned short) -278554233);
                }
                for (unsigned short i_25 = 0; i_25 < 16; i_25 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_26 = 0; i_26 < 16; i_26 += 2) 
                    {
                        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((unsigned long long int) 14ULL))));
                        arr_84 [(short)14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_35 [i_25]))));
                        var_50 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) var_12)) > (var_9))));
                    }
                    for (unsigned long long int i_27 = 1; i_27 < 14; i_27 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) (((_Bool)1) ? ((~(((/* implicit */int) arr_61 [i_19] [i_27 + 2])))) : (((((/* implicit */_Bool) 3464723634176329673ULL)) ? (-2147483635) : (((/* implicit */int) (_Bool)1)))))))));
                        var_52 = ((/* implicit */unsigned long long int) min((var_52), (arr_59 [i_14] [i_25] [i_25])));
                    }
                    var_53 = ((/* implicit */unsigned long long int) arr_39 [i_14] [(short)12]);
                }
                for (unsigned short i_28 = 0; i_28 < 16; i_28 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_91 [i_29] [i_18] [i_18] [i_29] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_14]))));
                        var_54 = ((/* implicit */unsigned long long int) max((var_54), (((unsigned long long int) arr_50 [(_Bool)1] [i_19] [(unsigned char)13]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 0; i_30 < 16; i_30 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned char) var_9);
                        var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) arr_81 [i_19] [9ULL] [i_19] [i_14]))));
                    }
                }
            }
            arr_94 [i_14] [i_14] = ((((/* implicit */_Bool) arr_7 [i_18])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_46 [i_14] [i_18] [i_14])));
            var_57 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_18] [i_18] [i_14]))));
        }
    }
}
