/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133939
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_9))))) < (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (var_1)));
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1]))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_18 = ((1243815594) / (((((/* implicit */_Bool) var_3)) ? (-1243815595) : (var_14))));
                        var_19 = ((((/* implicit */_Bool) 4294967295U)) ? (arr_13 [i_1] [(short)9] [i_2] [i_3] [i_3] [i_4]) : (arr_13 [(short)5] [i_2] [14U] [i_2] [i_3] [i_4]));
                        arr_17 [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */int) arr_11 [(short)2] [i_1] [i_1 + 1])) - (((/* implicit */int) arr_11 [i_2] [i_2] [i_1 + 2]))));
                        var_20 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (var_4) : (((/* implicit */int) arr_12 [i_1]))))) ? (((((/* implicit */int) (short)-6215)) ^ (((/* implicit */int) (short)18368)))) : (((/* implicit */int) ((short) arr_16 [2] [i_1] [i_2] [i_3] [i_1] [i_4])))));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1]))) : (var_5));
            var_22 = var_10;
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [i_1])) | (((/* implicit */int) var_7))));
            arr_22 [i_1] = (-(((/* implicit */int) arr_8 [i_1] [i_5] [i_1])));
        }
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_27 [i_1 - 1] [i_1] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-16239)))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (short i_8 = 4; i_8 < 16; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 3; i_9 < 16; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))))))))));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                            var_26 = var_14;
                        }
                        var_27 -= ((/* implicit */short) arr_4 [i_1] [i_6]);
                        arr_36 [i_1] [i_1] [i_6] [i_7] [i_8] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_8 + 1])) >> (((((/* implicit */int) arr_34 [(short)12] [i_6] [(short)12] [i_6] [i_6])) - (1126)))))) : (((/* implicit */short) ((((((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_8 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_34 [(short)12] [i_6] [(short)12] [i_6] [i_6])) - (1126))))));
                    }
                } 
            } 
        }
        for (int i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
        {
            arr_39 [i_1] [i_1] [1U] = ((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_19 [(short)1] [i_1] [i_10]))))));
            var_28 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4136888358U))));
            /* LoopSeq 3 */
            for (short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_42 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_1] [i_10])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_37 [i_1] [i_1]))));
                var_29 *= ((/* implicit */unsigned int) var_4);
                var_30 = ((/* implicit */short) (((+(var_11))) == (2790848606U)));
            }
            for (short i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                arr_46 [(short)16] &= ((/* implicit */unsigned int) var_10);
                /* LoopSeq 3 */
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    var_31 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_43 [i_1] [i_10] [i_1]))))));
                    arr_50 [16U] [16U] &= ((unsigned int) (+(var_11)));
                    arr_51 [i_10] [i_1] [i_1] [i_1] = (~(var_5));
                }
                for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    var_32 = arr_52 [i_1] [14U] [14U] [i_14];
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_15 [(short)12] [(short)12] [i_12]))));
                    var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_1] [i_10] [i_12])))) | (((-1) & (((/* implicit */int) var_7))))));
                    var_35 = var_8;
                }
                for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    var_36 &= ((/* implicit */unsigned int) ((((int) 742537241U)) ^ (((/* implicit */int) ((((/* implicit */int) (short)127)) != (var_4))))));
                    arr_58 [i_1] [i_1] [i_1] [i_15] [i_1] &= ((/* implicit */short) ((arr_45 [i_1 + 1] [i_1 + 2] [9]) ^ (4294967295U)));
                }
                var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [5U] [i_1] [i_10] [5U] [i_12])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                var_38 *= ((/* implicit */unsigned int) -1123123255);
                var_39 -= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((+(var_5))) : (((((/* implicit */_Bool) arr_21 [i_1])) ? (var_13) : (((/* implicit */unsigned int) -394413470))))));
            }
            for (short i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)2443))));
                var_41 *= (short)24566;
                /* LoopSeq 1 */
                for (unsigned int i_17 = 2; i_17 < 15; i_17 += 3) 
                {
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_16] [i_1 + 2] [i_1 - 1] [i_1])))))));
                    var_43 = ((/* implicit */short) ((var_5) << (((/* implicit */int) (short)2))));
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_16] [8U])) ? (((/* implicit */unsigned int) arr_13 [4] [i_10] [i_10] [i_16] [i_17] [0])) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3108))) : (((((/* implicit */_Bool) (short)-19633)) ? (0U) : (4294967295U)))));
                }
            }
            var_45 = ((/* implicit */int) max((var_45), (((((/* implicit */_Bool) (short)-512)) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
        }
        for (int i_18 = 1; i_18 < 15; i_18 += 1) /* same iter space */
        {
            var_46 &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_8) : ((+(((/* implicit */int) (short)-9958))))));
            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_37 [(short)14] [i_18])) : (-1978671027))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_19 = 3; i_19 < 9; i_19 += 4) 
    {
        for (int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    var_48 *= ((/* implicit */short) -1243815595);
                    arr_76 [3U] [i_21] [(short)2] = ((/* implicit */short) (-((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1243815594))))) : ((-(((/* implicit */int) arr_7 [i_21] [i_20]))))))));
                    arr_77 [i_19] [i_21] = (((!(((/* implicit */_Bool) arr_28 [i_21] [i_21] [i_20] [i_21])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_28 [i_21] [i_19] [i_21] [i_21]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_28 [i_21] [i_20] [i_21] [i_21]) > (arr_28 [i_21] [i_21] [i_19 + 1] [13U]))))));
                }
                for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) (~((-(1779725595U))))))));
                    /* LoopNest 2 */
                    for (short i_23 = 4; i_23 < 9; i_23 += 3) 
                    {
                        for (int i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            {
                                var_50 = ((/* implicit */short) var_0);
                                arr_86 [i_19] [i_20] [i_20] [i_22] [(short)4] [i_23] [i_24] &= min((arr_38 [i_19] [i_20] [i_19]), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) || (((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_4))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_25 = 2; i_25 < 9; i_25 += 3) 
                    {
                        var_51 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_69 [i_19] [i_20]))))), (var_5)));
                        arr_89 [i_25] [i_20] = ((/* implicit */int) var_11);
                        var_52 = ((/* implicit */short) var_11);
                    }
                }
                for (unsigned int i_26 = 0; i_26 < 10; i_26 += 4) 
                {
                    var_53 = ((short) ((max((2790848618U), (arr_71 [i_19] [i_20] [i_26]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_19] [i_19])) ? (arr_81 [i_19] [i_26]) : (((/* implicit */int) (short)(-32767 - 1))))))));
                    arr_92 [i_19] = ((/* implicit */short) max((((/* implicit */int) var_3)), ((((~(((/* implicit */int) var_15)))) >> ((((-(var_11))) - (3319560112U)))))));
                    var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_20])))) ? (((/* implicit */int) (((~(var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_19] [i_19] [i_20] [i_26])))))) : ((-((-(((/* implicit */int) arr_19 [i_26] [i_19] [i_19])))))))))));
                }
                var_55 = var_11;
                var_56 = arr_90 [i_19 - 2] [i_20];
            }
        } 
    } 
    var_57 = (~(((((/* implicit */int) var_3)) ^ ((-(((/* implicit */int) var_12)))))));
}
