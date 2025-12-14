/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103761
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned short)62813)));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (arr_6 [i_2] [16U] [i_1 - 4] [i_1 + 1]) : (((/* implicit */int) (unsigned short)13689))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
        {
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)102))))) : ((~(2711711909U)))));
            /* LoopSeq 1 */
            for (long long int i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                arr_19 [i_3 + 2] [i_4] [i_3] = ((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) arr_17 [i_5 - 3] [i_4 - 3] [i_3 + 3]))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_26 [i_3] [i_3] [i_5 - 1] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3 + 3] [i_3 + 3])) && (((/* implicit */_Bool) var_6))));
                            arr_27 [i_3] [7LL] [7LL] [i_5] [i_3] [8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_12)) ? (var_13) : (4294967284U)))));
                            arr_28 [i_3] [i_3] [i_4 - 2] [i_5] [i_6] [(unsigned char)1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 4]))));
                        }
                    } 
                } 
            }
            arr_29 [i_3] = ((/* implicit */long long int) (short)2998);
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                var_19 = ((/* implicit */short) (+((-(((/* implicit */int) var_0))))));
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 19; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        {
                            arr_40 [i_3] [i_8] [i_3] [i_8] [i_3] = ((/* implicit */int) ((_Bool) 4025312139U));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_3] [5] [i_9] [i_10]))))) ? (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (unsigned char)253)) : (var_8))) : (((/* implicit */int) arr_37 [17]))));
                            arr_41 [(short)2] [(_Bool)1] &= ((/* implicit */int) arr_25 [i_10] [i_10 + 3] [(signed char)0] [i_11] [i_11] [i_10 + 3] [i_10 + 3]);
                            arr_42 [i_10 - 1] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) == (((/* implicit */int) arr_37 [(_Bool)1])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
            }
            for (long long int i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_13 = 3; i_13 < 20; i_13 += 2) /* same iter space */
                {
                    arr_48 [i_8] [i_8] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) arr_17 [9LL] [9LL] [i_12 + 3]))));
                    var_22 = ((/* implicit */int) arr_21 [i_3] [i_13] [18] [i_13]);
                }
                for (signed char i_14 = 3; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    arr_53 [i_3] [i_12 + 4] [i_14] = arr_51 [(short)11] [19LL] [i_3] [i_3 + 3] [i_3];
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_3] [i_8] [i_8] [i_8]))) : (var_10)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)121))))) : ((+(var_12))))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_15 = 4; i_15 < 21; i_15 += 1) 
                {
                    var_24 = ((/* implicit */long long int) arr_25 [(_Bool)1] [(_Bool)1] [i_3] [i_15 - 1] [i_3 + 4] [i_15 - 1] [i_15]);
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [20LL] [i_8] [i_12] [i_12] [12LL])) ? (arr_51 [(unsigned short)15] [i_8 + 1] [i_15 + 1] [i_3] [i_15]) : (arr_51 [i_3] [i_3] [i_3] [i_15 - 1] [i_12 - 1])));
                    arr_56 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_3] [0LL] [i_3 - 1] [i_15 + 1])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) && (((/* implicit */_Bool) var_5)))))));
                }
                var_26 -= ((/* implicit */unsigned long long int) ((signed char) arr_55 [i_3] [i_3] [i_12 + 1] [i_3 - 1]));
            }
            arr_57 [i_3] [i_8] [i_8] = ((/* implicit */short) (signed char)-64);
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [i_17]) : (arr_15 [20U]))) == (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_16] [i_17])))));
            /* LoopSeq 1 */
            for (unsigned int i_18 = 3; i_18 < 12; i_18 += 1) 
            {
                arr_67 [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -571561236)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)45))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_63 [i_16] [i_16] [i_18])))))));
                /* LoopSeq 3 */
                for (unsigned int i_19 = 1; i_19 < 14; i_19 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) arr_33 [i_18] [i_16]);
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_8))));
                }
                for (unsigned int i_20 = 1; i_20 < 14; i_20 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */int) (~(arr_46 [i_18 + 2] [i_20 + 1] [i_18 - 1] [i_18])));
                    var_31 |= ((/* implicit */int) var_9);
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [14U] [i_18] [i_20] [i_20] [i_20] [i_20 - 1] [i_20])) ? (((/* implicit */int) arr_25 [i_18 + 1] [i_20] [i_20] [i_20] [i_20] [i_20 - 1] [i_20])) : (((/* implicit */int) arr_25 [i_17] [i_20] [i_20] [i_20] [i_20] [i_20 - 1] [i_20]))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 1; i_21 < 13; i_21 += 2) 
                    {
                        var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_16] [i_17] [i_18] [i_18 - 2] [i_18 - 2] [i_21])) ? (111036116) : (((/* implicit */int) arr_37 [i_20 + 1]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_21] [i_21] [i_18]))))));
                        arr_75 [i_16] [i_17] [i_20] [3U] [i_18 + 1] [i_20] [i_18 + 1] = ((unsigned int) var_4);
                        var_34 = ((/* implicit */unsigned int) ((unsigned char) var_18));
                        var_35 = ((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)255))));
                    }
                }
                for (unsigned int i_22 = 1; i_22 < 14; i_22 += 4) /* same iter space */
                {
                    var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_70 [i_16] [i_17] [i_18 + 1] [i_22 - 1])) && (((/* implicit */_Bool) arr_47 [15U] [i_18 + 2] [i_18] [i_22 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 1; i_23 < 14; i_23 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)102))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_36 [i_16] [i_16] [i_18] [i_18]))));
                    }
                    arr_80 [i_16] [i_17] [i_18] [i_22] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_17]))));
                }
                arr_81 [i_16] [i_16] [i_18 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6325)) && (((/* implicit */_Bool) 151286881))));
            }
        }
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -151286902)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) : (2331800851U)))) ? (((/* implicit */int) ((arr_46 [i_16] [i_16] [i_16] [17]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(unsigned char)5] [i_16] [i_16] [i_16])))))) : (((/* implicit */int) arr_44 [i_16] [i_16] [i_16]))));
        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_79 [i_16] [i_16] [i_16] [i_16] [(unsigned char)6]))))) : (((/* implicit */int) arr_68 [i_16] [i_16])))))));
    }
    var_41 -= ((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10)))))) ? ((((!(((/* implicit */_Bool) var_12)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))))) : (((/* implicit */unsigned int) max((max((var_8), (((/* implicit */int) var_14)))), (var_17))))));
}
