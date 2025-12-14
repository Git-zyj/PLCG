/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12252
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (!((_Bool)1))));
                    var_14 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2])))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_11 [i_2] [i_4 + 1] [(unsigned char)9] [i_4 + 1] [i_4 - 1]))));
                                var_16 = ((/* implicit */unsigned short) ((1690140511) / (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_2] = ((/* implicit */long long int) arr_10 [i_0] [i_1 + 3] [i_5]);
                                arr_21 [i_6] [i_5] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1 - 1]))));
                                arr_22 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_6 [i_6 + 1] [i_1 + 3] [i_1] [i_1 + 3])) <= (((/* implicit */int) arr_6 [i_6 - 1] [i_1 - 1] [i_1] [i_1 + 3])));
                                var_18 = ((/* implicit */signed char) ((((-8365788667803819842LL) + (9223372036854775807LL))) >> (((-1690140511) + (1690140530)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_19 -= var_3;
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (-1690140505)))) : (arr_9 [i_9] [i_8] [i_7] [i_0])));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)117))))) ? (arr_5 [i_0]) : (arr_14 [i_0] [(_Bool)0] [i_8] [i_9])));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 13; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (((+(-8365788667803819856LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11 - 1] [i_11] [(signed char)12] [i_11] [(_Bool)1] [i_11])))));
                        arr_41 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_11 + 2] [i_11 + 2] [i_11 + 2])) ? ((~(((/* implicit */int) arr_30 [(unsigned char)14] [i_10] [(unsigned char)8] [i_11] [i_12] [i_12])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_11] [i_12])) <= (((/* implicit */int) arr_11 [i_0] [2ULL] [i_10] [i_11] [i_12])))))));
                    }
                } 
            } 
            arr_42 [i_0] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-33))));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10])))))) ? (((((/* implicit */int) arr_44 [i_0] [i_0] [i_0])) & (((/* implicit */int) (unsigned char)47)))) : (((((/* implicit */_Bool) arr_18 [i_0] [(short)4] [(short)4] [i_10] [i_0] [i_10] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (1690140533)))));
                arr_45 [i_0] [i_10] [i_13] = ((/* implicit */unsigned char) var_4);
            }
            var_24 = ((/* implicit */long long int) ((unsigned short) arr_26 [i_0] [i_0] [i_10]));
        }
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((-1690140515), (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (unsigned int i_17 = 3; i_17 < 15; i_17 += 1) 
                    {
                        {
                            arr_60 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((unsigned long long int) arr_57 [i_17])))), (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))))));
                            arr_61 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_54 [i_14]), (((/* implicit */long long int) arr_46 [i_14]))))), (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_59 [i_17 - 3] [i_16] [i_15] [i_15] [i_15] [i_14]))))) : (var_11)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_18 = 2; i_18 < 12; i_18 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((1182281634U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-4175)))))) * (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */_Bool) ((unsigned char) var_6));
                        arr_66 [i_14] [i_15] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((var_1) != (((((/* implicit */unsigned long long int) var_4)) * (arr_58 [i_15] [1LL] [i_19]))))))));
                        var_28 = ((/* implicit */unsigned char) (+(((1690140519) / (((/* implicit */int) arr_53 [i_14]))))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((1ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3851)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        arr_71 [i_20] [i_20] [i_20] [i_18] [(unsigned short)7] [i_14] = ((/* implicit */short) ((_Bool) arr_49 [i_14] [i_18 + 2]));
                        arr_72 [i_20] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)4175)) << (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_52 [i_18 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_18 + 1] [i_18 + 1]))))));
                        arr_76 [(short)4] [i_15] [i_18] [i_21] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_14] [i_14] [i_14]))) < (arr_48 [i_14] [(unsigned short)11]))))))));
                        var_31 = ((/* implicit */long long int) var_0);
                        var_32 -= ((/* implicit */unsigned long long int) var_4);
                        var_33 = ((/* implicit */unsigned short) ((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) -1690140495)) : (8523298664574124387LL))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        arr_80 [i_14] [i_15] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(1030831466U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_57 [i_14])), (var_12))))))) ? ((~((~(arr_48 [i_14] [5]))))) : (((/* implicit */unsigned int) (+(216207788))))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (-(((min((var_9), (((/* implicit */unsigned long long int) var_0)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_73 [2U] [i_15] [i_15] [i_18 + 2] [i_18 + 2]))))))))))));
                        var_35 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26971)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (_Bool)1))))) / (var_11))) % (((/* implicit */unsigned int) min((((((/* implicit */int) arr_49 [i_14] [i_14])) % (((/* implicit */int) arr_53 [i_14])))), (((/* implicit */int) arr_55 [i_18 + 2] [i_18 - 2])))))));
                        arr_81 [i_14] [i_14] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (~(var_0)))))));
                    }
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)173)), (arr_51 [i_18] [i_18 + 3] [i_18 + 3])))))))));
                    var_37 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_18 + 3])) ? (((/* implicit */int) arr_47 [i_18 + 3])) : (((/* implicit */int) arr_47 [i_18 - 1]))))), (((((/* implicit */_Bool) arr_47 [i_18 + 2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    /* LoopNest 2 */
                    for (signed char i_23 = 3; i_23 < 15; i_23 += 3) 
                    {
                        for (short i_24 = 0; i_24 < 16; i_24 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_75 [i_18 + 1] [i_18 - 1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))))) * (((/* implicit */unsigned long long int) var_11))));
                                arr_86 [i_14] [i_15] [i_23] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) (unsigned short)33776)), (9612316756791071392ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_78 [i_14])), (var_4)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_67 [i_18 + 2])))))));
                            }
                        } 
                    } 
                    var_39 = var_11;
                }
            }
        } 
    } 
}
