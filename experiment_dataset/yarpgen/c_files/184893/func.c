/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184893
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_12)) : (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    arr_7 [i_0] = ((/* implicit */unsigned short) (+(((int) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_0] [i_1] [i_0]) : (var_4))))));
                    var_16 = ((/* implicit */int) var_12);
                }
                for (int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (_Bool)1))));
                    var_18 = (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_3 + 1] [i_1] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))))))));
                    var_19 = (-(((/* implicit */int) (unsigned short)65535)));
                }
                var_20 &= ((((/* implicit */_Bool) var_11)) ? (-707597307) : (((/* implicit */int) (short)(-32767 - 1))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_4])))) ? (((((/* implicit */_Bool) -28)) ? (var_4) : (arr_1 [i_4]))) : ((((_Bool)1) ? (arr_1 [i_4]) : (((/* implicit */int) (unsigned short)17354))))));
        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_13) & (((/* implicit */int) arr_4 [10U])))), (((((/* implicit */_Bool) arr_9 [i_4] [21U] [21U])) ? (var_11) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [20] [20]))) : (max((var_2), (((/* implicit */unsigned long long int) var_9))))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_23 = (((_Bool)1) ? (((/* implicit */int) (signed char)15)) : (-707597307));
                        arr_21 [i_4] [i_5] [i_4] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned short) var_11)), (((/* implicit */unsigned short) arr_17 [i_4] [2] [i_4] [i_4]))))) ? (((-692428464) ^ (((/* implicit */int) var_10)))) : ((+(((((/* implicit */_Bool) arr_10 [i_4] [i_5])) ? (var_5) : (arr_5 [i_4] [i_4] [i_7])))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_0), ((~(var_13)))))))))));
                        arr_22 [i_4] = ((/* implicit */signed char) ((int) (unsigned short)1));
                    }
                } 
            } 
            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_4] [i_4] [i_5] [i_5])) / ((+((~(var_4)))))));
            arr_23 [i_4] = ((/* implicit */int) var_7);
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
        {
            var_26 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65518))));
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_27 = min(((+(((/* implicit */int) arr_19 [i_9] [8] [i_8] [i_8] [i_4])))), (max((((((/* implicit */_Bool) arr_12 [i_4] [2])) ? (((/* implicit */int) (unsigned short)0)) : (var_13))), ((~(((/* implicit */int) var_12)))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (int i_11 = 3; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (3870393493U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((+(3323315373U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            var_29 = ((/* implicit */int) max((var_29), (893343510)));
                        }
                    } 
                } 
            }
            for (short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                var_30 = ((/* implicit */short) 1692281108);
                arr_35 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_11 [i_4]), (arr_11 [6U])))), (((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)33380))))));
                var_31 = ((/* implicit */int) (unsigned short)61140);
            }
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) (_Bool)1);
                var_33 += ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((var_3) ^ (66846720)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (716722060U))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_46 [i_4] [i_4] [i_4] [2] [i_4] = ((/* implicit */int) ((2484082603U) - (((/* implicit */unsigned int) 448156149))));
                        arr_47 [i_4] [i_4] [i_13] [i_4] [i_4] [(signed char)7] = var_15;
                        var_34 += ((/* implicit */signed char) (~(((arr_43 [i_8] [9ULL] [i_8]) | (var_0)))));
                        var_35 -= ((/* implicit */unsigned long long int) var_8);
                    }
                    var_36 *= ((/* implicit */short) max(((((!(((/* implicit */_Bool) var_3)))) ? (var_11) : ((((_Bool)1) ? (((/* implicit */int) (short)31646)) : (-512))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (2011918262)))))))));
                    arr_48 [i_4] = ((((((/* implicit */_Bool) var_14)) ? (((-310700839) - (-551609715))) : (((((/* implicit */_Bool) -533205590)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) + (-428409540));
                }
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    var_37 &= ((/* implicit */int) var_1);
                    arr_51 [i_4] [i_4] [i_8] [i_8] [(_Bool)1] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(max((var_15), (((/* implicit */int) arr_39 [i_4]))))))) & ((~(((((/* implicit */unsigned long long int) arr_3 [i_16] [i_4] [i_4])) & (var_2)))))));
                    var_38 -= ((/* implicit */short) arr_9 [i_4] [i_8] [i_13]);
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((unsigned int) var_7));
                        arr_54 [i_4] [i_4] [i_4] [i_4] [4] = ((/* implicit */short) var_9);
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2011918265)) ? (((/* implicit */unsigned int) var_14)) : (2147483648U)))) ? (((((/* implicit */_Bool) var_1)) ? (-2011918263) : (arr_27 [i_4] [i_4] [i_4]))) : (((/* implicit */int) ((unsigned short) var_14)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((unsigned short) 2147483649U)), (((/* implicit */unsigned short) (signed char)107)))))));
                    }
                    arr_55 [i_4] [(signed char)2] [i_8] [i_16] &= ((/* implicit */unsigned int) arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]);
                }
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_27 [i_4] [i_4] [i_4]))))) : ((~(((/* implicit */int) (unsigned short)32146))))));
                var_42 = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((signed char) 2147483666U))), ((+(arr_37 [i_4] [i_4] [i_4]))))) | (((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_4] [i_13] [i_13] [i_8] [i_4])) && (arr_41 [0U] [i_8] [i_8] [i_8])))) & (var_13)))));
            }
            var_43 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-448156149)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_25 [i_4])))) : (((/* implicit */int) ((short) arr_9 [i_4] [i_4] [i_4])))));
            var_44 ^= ((/* implicit */unsigned long long int) max(((~(arr_27 [(unsigned short)10] [i_8] [i_4]))), (((int) 513664634))));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
        {
            var_45 = ((/* implicit */_Bool) (-(arr_57 [i_4] [i_4])));
            arr_58 [i_4] = ((((2633624967U) | (((/* implicit */unsigned int) var_14)))) ^ (((/* implicit */unsigned int) (~(var_13)))));
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) arr_31 [11] [i_18] [i_18] [i_18] [(signed char)10]))) : (var_15)));
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 18; i_19 += 1) 
    {
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 18; i_20 += 3) 
        {
            for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                for (unsigned short i_22 = 1; i_22 < 17; i_22 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_23 = 0; i_23 < 18; i_23 += 4) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned short) 13U);
                            arr_73 [i_19] = ((_Bool) arr_66 [i_22] [i_22] [i_19] [i_22 + 1]);
                        }
                        for (short i_24 = 0; i_24 < 18; i_24 += 4) /* same iter space */
                        {
                            var_48 = (~(((/* implicit */int) ((short) var_13))));
                            var_49 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (short i_25 = 0; i_25 < 18; i_25 += 4) /* same iter space */
                        {
                            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_19] [i_19] [i_25])) ? (((/* implicit */int) var_12)) : (var_3)));
                            arr_80 [i_19] [i_20] [i_19] [16] [i_25] = ((int) 4768446527927043338ULL);
                        }
                        for (unsigned short i_26 = 2; i_26 < 17; i_26 += 3) 
                        {
                            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (~(arr_3 [i_26] [i_21] [i_21]))))));
                            var_52 |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        }
                        arr_84 [i_22 - 1] [i_19] [i_22 - 1] [i_22] = var_14;
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_27 = 0; i_27 < 18; i_27 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
            {
                var_53 = ((/* implicit */unsigned long long int) (!(arr_88 [i_19] [i_27] [i_28])));
                var_54 -= ((int) var_9);
                arr_89 [i_19] = (~(arr_0 [i_28 + 1]));
            }
            arr_90 [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned int) (+(var_14)))) : ((~(2147483668U)))));
            var_55 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_19]) : (((/* implicit */int) arr_85 [i_19])))))));
            var_56 = var_3;
        }
        /* LoopNest 3 */
        for (short i_29 = 0; i_29 < 18; i_29 += 3) 
        {
            for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 3) 
            {
                for (signed char i_31 = 2; i_31 < 14; i_31 += 1) 
                {
                    {
                        var_57 = ((((/* implicit */_Bool) arr_65 [i_19] [i_29])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (var_2));
                        var_58 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (var_11)))) | (((((/* implicit */_Bool) arr_78 [i_19] [i_29] [i_29] [(short)1] [i_31])) ? (arr_83 [i_19] [i_19] [i_19] [2U] [6]) : (((/* implicit */unsigned int) arr_76 [i_19] [6]))))));
                    }
                } 
            } 
        } 
    }
    for (int i_32 = 0; i_32 < 20; i_32 += 2) 
    {
        var_59 &= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_32]), (((/* implicit */unsigned long long int) 0))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_32] [i_32])), (arr_0 [i_32]))))));
        /* LoopSeq 1 */
        for (signed char i_33 = 0; i_33 < 20; i_33 += 1) 
        {
            var_60 = ((/* implicit */unsigned short) max((11), (((((/* implicit */_Bool) -448156136)) ? (-92836820) : (((/* implicit */int) (short)6395))))));
            /* LoopNest 3 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                for (int i_35 = 0; i_35 < 20; i_35 += 3) 
                {
                    for (unsigned short i_36 = 1; i_36 < 19; i_36 += 2) 
                    {
                        {
                            var_61 += ((/* implicit */short) arr_107 [i_32] [i_32]);
                            arr_112 [i_36] [i_33] [i_34] [i_35] [i_36] = ((signed char) ((signed char) arr_102 [i_36] [i_36 + 1] [i_36]));
                        }
                    } 
                } 
            } 
        }
        var_62 ^= ((((/* implicit */_Bool) (~(arr_102 [13] [(_Bool)1] [i_32])))) ? (min((((/* implicit */int) ((short) arr_110 [i_32] [i_32] [i_32] [i_32] [9]))), (-133227098))) : (((/* implicit */int) (short)-6395)));
    }
    var_63 = ((/* implicit */short) ((((/* implicit */int) (signed char)-31)) - ((((-(((/* implicit */int) (short)6395)))) + (var_0)))));
}
