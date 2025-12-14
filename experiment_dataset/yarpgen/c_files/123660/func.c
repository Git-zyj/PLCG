/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123660
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
    var_10 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) var_5));
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]))))), (((((/* implicit */int) (unsigned char)112)) ^ (((/* implicit */int) var_0))))))) ? (var_1) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_1])) : ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_11 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-31370))));
                var_11 = ((/* implicit */short) ((unsigned char) arr_9 [i_0] [i_2]));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */unsigned short) var_9);
                arr_17 [i_0] [i_3] [i_0] [i_3] &= ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_3]));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
            {
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */short) var_7);
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    arr_24 [i_0] [i_0 + 3] [i_0 + 3] [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                    arr_25 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0])))))));
                }
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_12 *= ((short) (+(var_1)));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_1))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_15 [i_0 + 2] [i_1] [i_4] [i_6]))));
                    arr_30 [i_0 - 2] [i_0] [i_4 - 2] = ((((/* implicit */int) arr_19 [i_0] [i_0 + 2] [i_4 - 2])) << (((((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2])) + (20666))));
                }
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    arr_33 [i_0] [i_1] [i_0] [i_4 - 2] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) arr_10 [i_0] [i_0]));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((_Bool) arr_18 [i_7] [i_7 - 1] [i_0 + 3])))));
                    var_16 = ((/* implicit */short) (+(arr_31 [i_0 - 3] [6U])));
                    arr_34 [i_0] [i_1] [(short)9] [i_7] = ((/* implicit */short) arr_19 [i_4] [i_4] [i_4 - 1]);
                }
                arr_35 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_4 + 1])) ? (((var_1) << (((arr_23 [i_0] [i_1] [i_0] [i_4]) - (3754345795858275237ULL))))) : (11386876492901128946ULL)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_4 + 1])) ? (((var_1) << (((((arr_23 [i_0] [i_1] [i_0] [i_4]) - (3754345795858275237ULL))) - (4455207656988603156ULL))))) : (11386876492901128946ULL))));
            }
            for (short i_8 = 4; i_8 < 20; i_8 += 4) 
            {
                arr_40 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (+(((((/* implicit */int) arr_39 [i_0] [i_8])) * (((/* implicit */int) arr_9 [i_0] [i_8 - 1])))))));
                var_17 = ((unsigned short) var_8);
                arr_41 [i_0] [i_0] [i_8] = min((((/* implicit */unsigned short) ((short) arr_20 [i_0] [i_1] [i_8]))), (arr_15 [i_0 - 1] [i_1] [i_0] [i_1]));
            }
            var_18 = ((/* implicit */unsigned int) var_3);
            arr_42 [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) ^ (3067138556425296513ULL))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0] [(unsigned short)21] [i_1]))))));
            arr_43 [i_0] [i_1] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0])) >> (((((unsigned int) arr_36 [i_0] [i_0] [i_0])) - (1878261308U)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0])) >> (((((((unsigned int) arr_36 [i_0] [i_0] [i_0])) - (1878261308U))) - (3439373734U))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_36 [(unsigned short)6] [i_9] [i_9 + 2]))));
            arr_46 [(unsigned short)2] [i_0] [8ULL] |= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (short)-1409)) : (((/* implicit */int) (unsigned char)108))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
            for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) var_0);
                var_23 = ((/* implicit */unsigned short) var_2);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [(unsigned char)14] [(unsigned char)14]))))) % ((+(((/* implicit */int) arr_37 [2U] [i_9] [2U] [2U])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_12] [i_9 - 2]))))))));
                            var_26 = ((/* implicit */unsigned short) ((short) arr_51 [i_9 - 2] [i_0 + 1] [i_11 + 2]));
                            var_27 *= ((unsigned char) (!(var_0)));
                        }
                    } 
                } 
            }
            for (unsigned short i_14 = 3; i_14 < 19; i_14 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_6))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), ((+(arr_44 [i_0] [i_15] [i_9 + 2])))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 3; i_16 < 21; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_15] [i_9] [i_14 - 2])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_14] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_14 + 3]))))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))));
                        arr_62 [i_0 - 1] [i_0 - 1] [i_14 + 1] [i_15] [i_0] [i_14 + 1] [i_16 - 1] = ((/* implicit */unsigned int) var_4);
                    }
                    for (short i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)13090)) ? (((/* implicit */unsigned long long int) 9223372036854775802LL)) : (16532441241680272454ULL))))));
                        arr_67 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_0 + 1] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_38 [i_0 - 2] [i_0 - 2] [i_0])));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
                    {
                        arr_70 [i_0 - 1] [i_0] [i_15] [i_18] = ((/* implicit */long long int) arr_32 [i_0 + 2] [i_9] [i_9 - 2] [i_14 - 2]);
                        var_32 = ((int) arr_22 [i_0] [i_9 + 2] [i_14 + 1] [i_9 - 1]);
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
                    {
                        arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_14 + 1]))))));
                        arr_75 [i_0] [i_9] [i_14] [i_0] [i_19] = ((/* implicit */unsigned long long int) ((arr_23 [i_14 - 3] [i_0] [i_0] [i_0 + 2]) < (arr_23 [i_14 + 2] [i_0] [i_0] [i_0 - 2])));
                    }
                }
            }
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1566605923854867703ULL)) ? (var_1) : (arr_53 [i_0])))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_55 [i_0] [i_20 + 1] [i_20] [i_20] [i_20])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_54 [i_0] [i_0] [i_0]))))));
            arr_79 [i_0] [i_20 + 1] = ((/* implicit */unsigned long long int) var_6);
            arr_80 [i_0] [i_0] [i_20 - 1] = ((/* implicit */unsigned short) ((short) var_3));
            var_34 = ((/* implicit */unsigned int) var_9);
        }
    }
    for (unsigned char i_21 = 3; i_21 < 8; i_21 += 1) 
    {
        arr_83 [i_21] = var_1;
        var_35 = ((/* implicit */unsigned char) -9223372036854775803LL);
    }
    /* vectorizable */
    for (unsigned long long int i_22 = 1; i_22 < 14; i_22 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 15; i_23 += 3) 
        {
            arr_89 [14U] [i_22] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_28 [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22 - 1])) : (arr_56 [i_22] [i_23]))));
            arr_90 [i_22] = (+(arr_65 [(short)20] [i_22] [i_22 + 1]));
        }
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 15; i_24 += 4) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 3) 
            {
                {
                    var_36 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) var_4)) ? (arr_69 [i_22] [(short)12] [i_24] [(short)12] [i_25] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                    arr_96 [i_24] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_22] [i_22 - 1] [i_22 + 1] [i_22])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [(unsigned char)9] [i_22 - 1] [i_22 + 1] [i_22]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 3; i_26 < 14; i_26 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_27 = 0; i_27 < 15; i_27 += 3) 
                        {
                            arr_102 [i_22] [(unsigned char)11] [9U] [i_24] [i_22] = ((/* implicit */short) var_8);
                            arr_103 [i_22] = ((/* implicit */long long int) arr_61 [i_22] [i_24] [i_24] [i_26] [i_27]);
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                            var_38 = ((/* implicit */short) ((unsigned long long int) arr_60 [i_22] [i_22 - 1] [i_22 - 1] [i_24] [i_26 - 2]));
                            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            arr_107 [i_22] [i_22] [i_25] [i_26 - 2] [i_28] = ((/* implicit */unsigned short) ((arr_87 [i_26 + 1]) % (var_5)));
                        }
                        var_40 &= ((/* implicit */unsigned long long int) arr_5 [i_22 + 1] [i_24] [i_24]);
                        arr_108 [i_24] [i_24] [i_24] [(unsigned short)0] [i_24] [i_22] = ((/* implicit */unsigned long long int) var_3);
                        var_41 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 3897725966U)) ? (16375029281952874432ULL) : (((/* implicit */unsigned long long int) 1774448605078303244LL))))));
                    }
                    for (unsigned char i_29 = 3; i_29 < 14; i_29 += 1) /* same iter space */
                    {
                        var_42 |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_56 [i_25] [i_29 - 1])) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))));
                        arr_111 [i_22] [i_24] [i_22] [i_22 - 1] = ((/* implicit */unsigned short) var_7);
                    }
                    arr_112 [i_22] [i_24] [i_24] [i_25] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_95 [i_22 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_95 [i_22 + 1])) + (1638))) - (4)))));
                }
            } 
        } 
        var_43 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)134)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))));
    }
    var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) var_1))));
    var_45 = ((/* implicit */short) (+(var_7)));
}
