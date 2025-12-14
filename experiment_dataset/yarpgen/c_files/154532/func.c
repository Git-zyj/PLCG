/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154532
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) arr_2 [i_0]);
        var_21 = ((/* implicit */_Bool) (+((((~(arr_1 [i_0] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_14 [i_1] [2ULL] [i_1] [(_Bool)1] [i_5] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2 - 3] [i_4 + 1]))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50402)) * (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_4] [i_5] [i_2]))))) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) arr_4 [(unsigned short)10] [i_2 - 4])))))));
                            arr_15 [i_1] [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) ((arr_1 [i_2 - 4] [i_4 + 2]) << (((arr_1 [i_2 - 4] [i_4 + 2]) - (4311655482357301536LL)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(arr_12 [i_1] [i_2] [i_6] [2LL] [i_8]))))));
                            arr_23 [i_1] [i_2] [i_6] [(short)12] [i_8] = (!(((/* implicit */_Bool) arr_10 [i_2] [i_2])));
                        }
                    } 
                } 
            } 
        }
        for (int i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) arr_21 [i_9 + 1] [i_9]);
            arr_26 [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_9] [i_9 - 1] [i_9] [i_1] [i_9])) ? (arr_9 [i_9] [i_9] [i_9 - 1] [i_9 + 1]) : (((/* implicit */long long int) arr_12 [i_9] [0LL] [2ULL] [i_9] [i_9])))) ^ (max((((/* implicit */long long int) var_19)), (var_4)))));
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 12; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        {
                            var_25 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16671544210363953596ULL)) ? (var_3) : (((/* implicit */int) arr_11 [(signed char)2] [i_9 - 1] [i_10] [i_11] [i_12] [i_9]))))) ? (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_11])) : (((((/* implicit */_Bool) arr_8 [5] [i_9] [11LL] [i_9 - 1])) ? (arr_9 [(short)7] [i_9] [i_10] [(signed char)9]) : (((/* implicit */long long int) ((/* implicit */int) (short)-4640))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))));
                            arr_35 [i_1] [i_9] [(unsigned short)8] [i_11] [(_Bool)0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_11] [i_1] [i_9] [i_1] [i_1]))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2940981650U)) ? (arr_17 [(signed char)9] [(unsigned char)9] [i_9] [i_9 + 1]) : (var_12)))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 429136770U))))), (arr_1 [i_1] [i_9])))));
            var_27 = arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 + 1];
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) (+(((unsigned long long int) 9996997337219066246ULL))));
                        arr_44 [0LL] [(short)1] [(short)1] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_14 - 2])) ^ (((/* implicit */int) arr_0 [i_14 - 2]))));
                        arr_45 [i_1] [i_13] [i_14] [i_16] [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)42176))));
                        var_29 -= ((/* implicit */long long int) (signed char)-47);
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_50 [i_15] [i_14] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                        arr_51 [i_1] [i_15] [i_14] [(unsigned short)12] [i_17] = ((/* implicit */short) 2866826651U);
                        var_30 ^= ((/* implicit */_Bool) var_5);
                        arr_52 [i_1] [i_13] [i_14 - 2] [i_15] [i_17] = 3865830526U;
                    }
                    var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_15] [i_1] [i_1])) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2))))));
                    var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_13] [i_14] [i_15])) ? (((/* implicit */long long int) arr_8 [i_1] [i_13] [i_14] [i_15])) : (var_4))) != (((long long int) (unsigned char)63))));
                }
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    var_33 -= ((/* implicit */unsigned int) arr_42 [i_13] [i_14 - 2] [i_14 - 1] [i_14] [i_14] [i_14] [i_13]);
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) max(((-(arr_30 [i_1] [i_13] [i_1] [i_18] [i_1] [i_14 - 1]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_1] [i_1] [(short)3] [i_18] [i_18] [i_14 - 1]))))))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_19 = 1; i_19 < 12; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */int) ((unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1]));
                            var_36 = ((/* implicit */short) ((unsigned char) arr_48 [i_19] [i_19 - 1] [i_19] [(short)3] [i_19 - 1]));
                        }
                    } 
                } 
                arr_65 [i_19] [i_19] = ((/* implicit */int) arr_61 [i_19 - 1] [i_19 + 1] [i_19] [i_19]);
            }
            for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    for (long long int i_24 = 1; i_24 < 9; i_24 += 3) 
                    {
                        {
                            arr_73 [i_1] [i_13] [i_22] [i_23] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-68), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4457362868284689677LL))))))))) / (arr_36 [(_Bool)1])));
                            arr_74 [i_24] [i_22] [i_23] [i_22] [i_22] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-69)) != (((/* implicit */int) arr_11 [i_24 + 3] [i_24 + 2] [9] [i_23] [i_22] [i_22])))))));
                            arr_75 [i_23] [i_22] = ((/* implicit */unsigned char) arr_17 [i_24] [i_24] [i_22] [i_24]);
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */long long int) var_13);
                arr_76 [i_1] [4] [i_22] = ((((/* implicit */int) arr_60 [i_22] [i_1])) ^ (((/* implicit */int) ((signed char) (+(var_17))))));
            }
            arr_77 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_54 [i_1] [6] [i_13] [i_13])) || (((/* implicit */_Bool) arr_54 [11ULL] [(unsigned short)11] [i_13] [i_13])))) ? (max((arr_54 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)0)))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_54 [i_13] [i_1] [i_1] [i_1])))));
        }
        for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_26 = 0; i_26 < 13; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 2; i_27 < 11; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        {
                            arr_90 [i_25] [i_26] [(_Bool)1] [i_25] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_26] [(unsigned char)10] [(unsigned char)10] [8] [i_28]))));
                            var_38 = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_79 [i_1] [i_1] [i_26])) ? (((/* implicit */int) (unsigned short)13085)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_0 [2ULL])))), (((/* implicit */int) (_Bool)1))));
                            var_39 = ((/* implicit */long long int) (short)7597);
                        }
                    } 
                } 
                arr_91 [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_26] [3LL] [i_25] [i_1])) ? (((((/* implicit */unsigned long long int) arr_30 [i_1] [i_25] [i_25] [i_25] [i_26] [i_26])) ^ (15378075582706082862ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_26] [i_25] [i_26])) != (((/* implicit */int) var_1))))) ^ ((-(((/* implicit */int) var_14)))))))));
                /* LoopNest 2 */
                for (long long int i_29 = 1; i_29 < 10; i_29 += 4) 
                {
                    for (signed char i_30 = 3; i_30 < 11; i_30 += 3) 
                    {
                        {
                            arr_97 [i_1] [i_26] [12LL] [i_29] [i_30] = ((/* implicit */signed char) ((((/* implicit */int) arr_87 [i_1] [i_25] [i_30 - 1])) ^ (((/* implicit */int) ((unsigned short) arr_87 [i_1] [i_25] [i_30 - 1])))));
                            arr_98 [i_1] [i_26] [i_1] [i_1] [9U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) / (arr_30 [i_30 - 2] [i_30 - 1] [7LL] [i_29 + 3] [i_26] [i_26]))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)77))));
            }
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-11276)))))))))))));
            var_42 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_59 [i_1] [i_25] [i_25] [(short)10]), (arr_59 [i_1] [i_25] [i_25] [i_25])))) << (((((/* implicit */int) max((arr_48 [11ULL] [i_25] [i_25] [i_25] [i_25]), (arr_48 [i_1] [i_1] [i_25] [i_25] [10LL])))) - (61430)))));
        }
        for (unsigned long long int i_31 = 0; i_31 < 13; i_31 += 4) /* same iter space */
        {
            var_43 = arr_80 [i_1] [7U];
            arr_101 [(signed char)1] [(signed char)1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) ^ (-9216265438153541903LL)))))))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        for (short i_33 = 0; i_33 < 21; i_33 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (unsigned short i_35 = 4; i_35 < 20; i_35 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_36 = 0; i_36 < 21; i_36 += 3) 
                            {
                                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5950375956356833262LL)) || (((/* implicit */_Bool) arr_109 [i_32] [i_33]))));
                                var_45 = ((/* implicit */unsigned short) (-(-508434228)));
                            }
                            var_46 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))));
                            arr_116 [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_110 [i_35 - 4] [20LL] [i_35 - 2] [i_35 - 4] [i_35 - 3]))) || (((2704253439U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))));
                        }
                    } 
                } 
                arr_117 [i_32] [i_32] = ((/* implicit */long long int) var_9);
                var_47 = ((/* implicit */unsigned short) 508434228);
                /* LoopNest 2 */
                for (long long int i_37 = 0; i_37 < 21; i_37 += 3) 
                {
                    for (int i_38 = 0; i_38 < 21; i_38 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned short) ((signed char) arr_121 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32]));
                            arr_122 [i_32] [i_32] [i_32] = ((/* implicit */int) arr_111 [i_32] [i_33] [i_38]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) var_3);
}
