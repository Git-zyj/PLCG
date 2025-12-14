/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138543
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
    var_17 = min((((((/* implicit */_Bool) 2538806756911432826LL)) ? (var_8) : (((var_3) ? (var_14) : (var_8))))), (((var_3) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 16777215U))) ? (var_16) : ((~(((1466779947U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0] [0])))))))));
                var_19 = ((((/* implicit */_Bool) var_13)) ? (var_2) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) ((arr_5 [i_2] [i_2]) != (((/* implicit */unsigned long long int) var_8)))))) : (((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [(unsigned short)3])) : (var_8))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_10)) : (arr_11 [10] [10] [10] [10])))) ? (max((((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2])), (var_8))) : (((/* implicit */int) (unsigned char)79))))) ? ((-(((((/* implicit */_Bool) -1564905191)) ? (((/* implicit */int) (_Bool)0)) : (-687600292))))) : (((((/* implicit */_Bool) (+(arr_11 [(unsigned char)3] [i_2] [(unsigned char)3] [i_4 - 3])))) ? (((/* implicit */int) arr_9 [(unsigned char)10] [i_4 + 1])) : (((((/* implicit */int) arr_8 [i_3])) - (((/* implicit */int) arr_9 [i_2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_4))) + (((/* implicit */int) ((unsigned char) arr_13 [i_4] [i_4] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4])))));
                                arr_20 [i_2] [12LL] [i_2] [14ULL] [i_5] = (~(((/* implicit */int) ((_Bool) -116698602))));
                                arr_21 [i_5] [i_3] [(short)1] [i_5] [(_Bool)1] [i_5] [i_3] = ((/* implicit */unsigned char) arr_6 [i_2]);
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [11] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_3])) ? (((/* implicit */int) arr_17 [i_4] [i_4 - 1] [i_4] [i_4 - 3] [i_3])) : (((/* implicit */int) arr_17 [(signed char)8] [i_4 + 2] [i_3] [i_4 + 3] [i_3]))))) == (((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4] [i_4 + 1] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_5] [i_4 - 1] [(unsigned char)17] [(signed char)6]))) : ((~(2828187348U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_25 [i_7] [i_7] = ((/* implicit */unsigned short) arr_13 [i_7] [i_2] [(unsigned char)6] [i_2] [(unsigned char)6] [i_2]);
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) var_7);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)157)) ^ (((((/* implicit */_Bool) -116698602)) ? (var_14) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_7] [i_2]))))));
            arr_27 [i_7] = arr_11 [8ULL] [8ULL] [i_7] [15U];
        }
        arr_28 [i_2] = ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [12])) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (short i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((~(var_6))) : (((/* implicit */int) var_13))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (_Bool)0)))))));
                            arr_38 [i_2] [i_8] [(short)11] [i_2] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9 - 1] [i_9] [i_9 - 1] [(unsigned char)11] [i_10]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_13 = 3; i_13 < 16; i_13 += 3) 
                {
                    var_25 = ((((/* implicit */_Bool) arr_32 [i_13] [i_13 - 3] [i_13] [i_13 + 2])) ? (((((/* implicit */_Bool) var_14)) ? (239958723U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1639))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [i_2] [i_2] [i_2] [i_2] [i_8])))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_12])) ^ (((/* implicit */int) arr_18 [i_2] [i_2] [i_8] [i_8] [i_8] [i_8] [i_2])))))));
                        arr_46 [i_2] [i_8] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [16LL] [i_8] [i_12] [14] [3])) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_2] [i_8] [14] [i_2] [i_8] [i_14])))));
                    }
                    for (short i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_13 + 1])) ? (((/* implicit */int) arr_31 [i_13 - 3])) : (((/* implicit */int) arr_31 [i_13 + 1]))));
                        arr_50 [i_15] [6U] [i_8] [i_8] [i_2] [i_2] = ((/* implicit */short) var_12);
                        arr_51 [i_8] [15ULL] [6U] [i_8] = ((/* implicit */unsigned int) arr_15 [(unsigned short)4] [i_8] [i_8] [(unsigned short)4] [i_15]);
                        arr_52 [i_2] [i_8] [i_8] [i_8] [i_12] [i_13 + 2] [i_15] = arr_23 [i_13 - 1] [i_15] [i_13 - 1];
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 3; i_16 < 14; i_16 += 4) 
                {
                    for (signed char i_17 = 3; i_17 < 14; i_17 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) arr_22 [i_8]);
                            var_29 = ((/* implicit */signed char) -116698602);
                            arr_57 [i_2] [i_8] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_12 [(unsigned short)1] [i_8] [i_8] [(_Bool)1] [i_8]);
                        }
                    } 
                } 
                arr_58 [i_8] = ((/* implicit */signed char) ((((_Bool) 1466779964U)) ? (((/* implicit */int) ((var_15) < (((/* implicit */unsigned long long int) arr_11 [i_2] [i_8] [i_2] [i_12]))))) : (((/* implicit */int) arr_18 [i_2] [(signed char)13] [i_8] [i_8] [i_8] [i_12] [i_12]))));
            }
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_23 [i_2] [i_2] [(short)11])) : (((/* implicit */int) (short)1639))));
        }
        /* vectorizable */
        for (unsigned char i_18 = 4; i_18 < 15; i_18 += 3) 
        {
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    for (unsigned short i_21 = 3; i_21 < 16; i_21 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_32 ^= ((/* implicit */_Bool) arr_65 [i_20] [i_2]);
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */signed char) -1LL);
            var_34 = ((/* implicit */signed char) var_3);
        }
    }
    for (signed char i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            var_35 = ((/* implicit */unsigned char) arr_23 [i_22] [i_23] [i_23]);
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_70 [i_22] [i_23] [(_Bool)1]) ? (((((/* implicit */unsigned long long int) var_2)) * (arr_43 [i_22] [(unsigned char)8] [i_22]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [14LL] [i_23] [(signed char)14] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_22] [i_22] [i_23] [i_23]))) : (arr_48 [i_22] [i_23] [i_23] [i_23] [i_23]))))))) ? (((/* implicit */int) ((arr_30 [i_22] [i_22]) != (arr_30 [i_22] [i_23])))) : (((/* implicit */int) arr_14 [i_22] [i_22] [(unsigned short)7] [i_23] [i_22]))));
        }
        arr_73 [i_22] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) (signed char)32)), (var_2))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            for (unsigned int i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) var_7);
                        var_38 = ((/* implicit */short) arr_30 [(signed char)11] [i_25]);
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_44 [i_22] [i_22] [6] [i_25] [(short)12] [(short)14] [i_26])) : (((/* implicit */int) var_10))));
                        var_40 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_22] [i_24] [i_25] [i_22] [i_26])) ? (((/* implicit */int) arr_14 [i_22] [i_22] [i_22] [i_24] [i_24])) : (((/* implicit */int) arr_14 [i_22] [(unsigned char)14] [(unsigned char)14] [i_22] [i_26])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_22] [4LL] [(short)8] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_22] [(_Bool)1] [i_22]))) : (var_15)))) ? (((/* implicit */int) max(((unsigned char)255), ((unsigned char)196)))) : (((/* implicit */int) (short)-1024))))));
                        arr_80 [i_22] [i_22] [i_25] [i_26] [i_22] [i_22] = ((/* implicit */long long int) ((((int) ((unsigned long long int) (short)-1628))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_24])))))));
                    }
                    for (unsigned int i_27 = 0; i_27 < 18; i_27 += 4) /* same iter space */
                    {
                        var_41 = arr_40 [i_22] [i_22] [2] [i_22];
                        var_42 = ((/* implicit */unsigned long long int) arr_8 [14U]);
                    }
                    var_43 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_66 [i_22] [i_22] [i_22] [i_22] [i_24])), (0ULL)));
                    arr_83 [i_22] [i_22] [i_22] [11U] = ((/* implicit */short) var_4);
                }
            } 
        } 
        arr_84 [i_22] = ((/* implicit */int) (unsigned char)98);
    }
    for (signed char i_28 = 0; i_28 < 18; i_28 += 4) /* same iter space */
    {
        arr_88 [i_28] = ((/* implicit */unsigned long long int) (unsigned char)97);
        var_44 = ((/* implicit */unsigned char) var_3);
    }
}
