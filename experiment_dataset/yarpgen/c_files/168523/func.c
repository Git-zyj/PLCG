/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168523
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [7ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [12LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (arr_1 [2]) : (arr_1 [i_0])))));
        var_16 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-2106)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 3] [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2 - 2])) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (13149174284868796492ULL))) : (((/* implicit */unsigned long long int) (-(var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(4179404373173576590ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0] [i_1 - 2] [i_0]) : (arr_5 [i_0]))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_19 [i_4] = (+(arr_18 [i_4]));
                    var_17 = ((5885029410280986996LL) + (((/* implicit */long long int) -1984955230)));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_18 [i_3]))));
                    arr_20 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)61)) && (((/* implicit */_Bool) arr_17 [i_3] [i_4])))))) & (arr_17 [i_3] [i_4])));
                }
            } 
        } 
        arr_21 [i_3] = ((/* implicit */int) ((arr_16 [i_3] [i_3] [i_3]) / (arr_16 [i_3] [i_3] [i_3])));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 1) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_6 - 2] [i_6 + 1])) * (((/* implicit */int) arr_11 [i_6 + 2] [i_6 + 2]))));
            var_20 = ((/* implicit */long long int) arr_22 [i_3]);
            /* LoopSeq 3 */
            for (unsigned char i_7 = 4; i_7 < 19; i_7 += 2) 
            {
                arr_28 [i_6] [i_6 + 1] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (arr_16 [i_3] [i_6 - 1] [i_7 - 3])))));
                arr_29 [i_3] [i_6] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6]))) | (arr_16 [i_6 + 1] [i_7 - 1] [i_7])));
            }
            for (short i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_37 [i_3] [i_6 - 1] [i_6] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12388)) ? (((/* implicit */int) (unsigned char)123)) : (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (short)-12397)) : (((/* implicit */int) (unsigned char)126))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_11))));
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6])))))));
                        var_23 = var_11;
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 - 2])) ? (var_1) : (arr_12 [i_6 + 2] [i_6 - 1])));
                        var_25 &= ((/* implicit */unsigned char) var_4);
                        var_26 = ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) arr_25 [i_10] [i_8] [i_6])));
                    }
                    for (long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        arr_43 [i_8] [i_3] &= ((/* implicit */signed char) (((~(((/* implicit */int) arr_10 [i_3])))) / (((arr_18 [i_3]) & (1161185737)))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_10 [i_9]))) > (var_11)));
                        arr_44 [i_11] [i_6] [i_9] [i_3] [i_6] [i_3] = arr_13 [i_3] [i_6] [i_8];
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_47 [i_3] [i_3] [i_8] [i_9] [i_12] [i_6] [i_8] = ((/* implicit */int) 0ULL);
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)12396))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_34 [15LL] [15LL] [i_6 + 2] [i_6 - 1] [i_6] [i_6])) : ((~(((/* implicit */int) (short)12370))))));
                        arr_50 [i_3] [i_3] [i_3] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_12 [i_3] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_6]))))) : (var_8)));
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                        var_31 -= ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)104)))) + (2147483647))) << (((((arr_36 [i_3] [i_3] [i_3]) << (((arr_45 [i_3] [i_6] [i_8] [i_9] [i_8]) - (1997562458))))) - (392777268)))));
                        arr_51 [i_13] [i_9] [i_6] [i_6] [i_3] = ((/* implicit */unsigned long long int) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3]))))))));
                    }
                }
                for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    arr_55 [i_6] [i_3] [i_3] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_14] [i_14])) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_46 [i_14] [i_14]))));
                    var_32 = ((/* implicit */long long int) arr_27 [i_3] [i_14]);
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_42 [i_3] [i_3] [i_3] [5] [i_6] [i_14] [i_14])) ? (arr_38 [i_3] [i_6] [i_6] [i_8] [i_3]) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_3])) : (arr_39 [i_8]))))));
                    var_34 += ((/* implicit */short) arr_45 [i_3] [i_6] [i_8] [i_14] [i_8]);
                }
                arr_56 [i_8] [i_6] [i_3] = ((/* implicit */signed char) arr_11 [i_6 - 2] [i_6 - 1]);
                arr_57 [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_3]))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_16] [i_8] [i_6]))) : (arr_48 [i_6] [i_6] [13ULL] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) var_0))));
                            arr_62 [i_3] [i_3] [i_3] [i_15] [i_6] = (~(((/* implicit */int) arr_59 [i_6 + 2] [i_6 - 1] [i_6] [(unsigned char)12] [i_6 - 2] [i_6])));
                            var_36 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_10 [i_6])) == (((/* implicit */int) arr_22 [i_15])))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (arr_39 [i_6 + 1]) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))))));
            }
            for (short i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((arr_65 [i_3] [i_3]) >> (((arr_12 [i_6 - 2] [i_6 - 2]) - (8156695838987589312ULL))))))));
                var_39 = ((/* implicit */signed char) ((((/* implicit */int) (short)-12397)) & (var_3)));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        {
                            arr_71 [i_3] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */signed char) (-((~(164567655903546942LL)))));
                            arr_72 [i_19] [i_18] [i_6] [i_6] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((var_0) > (((/* implicit */int) var_6))))) >> ((((-(arr_60 [i_3] [i_3] [i_3]))) + (618572339)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_20 = 1; i_20 < 19; i_20 += 2) 
                {
                    for (int i_21 = 1; i_21 < 18; i_21 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_21 + 2]))));
                            arr_78 [i_6] [i_6] [i_17] [i_6] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) arr_53 [i_3] [i_6 - 2] [i_17] [i_20 - 1] [i_6]);
                            var_41 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3])))))));
                        }
                    } 
                } 
                var_42 += ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_6 + 1] [i_6 - 1])) ? (arr_12 [i_6 - 1] [i_6]) : (arr_12 [i_6 + 2] [i_6])));
            }
            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) var_3))));
        }
        for (short i_22 = 0; i_22 < 20; i_22 += 2) 
        {
            arr_82 [i_3] [i_3] [i_22] = ((/* implicit */short) ((((/* implicit */int) (signed char)109)) % (((/* implicit */int) arr_23 [i_3] [i_22]))));
            var_44 = ((/* implicit */signed char) var_0);
        }
        for (unsigned char i_23 = 2; i_23 < 16; i_23 += 2) 
        {
            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_52 [i_3] [i_3] [i_3] [i_3])))))));
            arr_85 [i_3] [i_23] [12LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_23 - 1] [i_23 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)130))));
            /* LoopNest 2 */
            for (long long int i_24 = 3; i_24 < 17; i_24 += 3) 
            {
                for (unsigned char i_25 = 2; i_25 < 17; i_25 += 2) 
                {
                    {
                        arr_93 [i_24 - 2] [i_24 + 3] [i_24 - 1] [i_24 - 2] [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_75 [i_25] [i_24 - 3] [i_23] [i_3])) + (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_53 [i_3] [i_23] [i_23] [i_24] [i_24])))) : ((+((-2147483647 - 1))))));
                        arr_94 [i_24] [i_23] [i_24] [i_25] = ((/* implicit */int) ((arr_27 [i_23 - 2] [i_24 + 2]) != (arr_27 [i_23 + 1] [i_24 + 1])));
                        var_46 = ((/* implicit */int) max((var_46), (((((((/* implicit */_Bool) arr_36 [i_3] [i_3] [i_3])) ? (arr_41 [i_3] [(signed char)6] [i_24 - 3] [i_25] [i_24 - 3] [i_23] [i_23]) : (((/* implicit */int) arr_69 [i_3] [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_25])))) / ((+(((/* implicit */int) (unsigned char)102))))))));
                    }
                } 
            } 
            var_47 = (~(arr_36 [i_23 - 2] [i_23 + 4] [i_23 + 4]));
            /* LoopNest 3 */
            for (unsigned char i_26 = 0; i_26 < 20; i_26 += 3) 
            {
                for (int i_27 = 2; i_27 < 19; i_27 += 4) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 2) 
                    {
                        {
                            arr_104 [i_26] [i_3] [i_23] [i_3] [i_27] [i_28] [i_3] = ((/* implicit */signed char) arr_101 [i_3]);
                            arr_105 [10LL] [i_23] [i_23] [i_26] [i_27] [i_28] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_2)) ^ (arr_100 [i_3] [i_3] [i_26] [i_26] [i_26])))));
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_23 + 3] [i_23] [i_27 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            } 
        }
    }
    var_49 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) var_10)) : ((+(var_13)))))));
    var_50 = ((/* implicit */short) (unsigned char)0);
}
