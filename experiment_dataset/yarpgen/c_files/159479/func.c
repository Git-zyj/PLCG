/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159479
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) -5685791857212961544LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        arr_2 [10] = ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) <= (arr_0 [i_0]))) && (((/* implicit */_Bool) 9223372036854775807LL))));
        var_16 = ((/* implicit */long long int) 2780850872U);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) (unsigned char)94);
                    var_18 += ((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) & (-9223372036854775801LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (((((/* implicit */_Bool) -1287700658)) ? (9223372036854775807LL) : (((/* implicit */long long int) 876001364U)))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_9 [14LL] = ((/* implicit */signed char) var_2);
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-18849)), (((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [10ULL]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 3285528164U)) : (var_9)))))));
        var_20 = ((/* implicit */unsigned short) min((5058391062985306066ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -651279182)) ^ (arr_0 [i_3]))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3270760607U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(signed char)10] [i_3]))))) : (((/* implicit */int) ((725227190) >= (((/* implicit */int) (_Bool)0)))))))) ? (2780850872U) : (max((min((arr_11 [i_4 - 1]), (((/* implicit */unsigned int) (unsigned char)14)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12655115092551247981ULL)) ? (((/* implicit */int) (unsigned short)22532)) : (2147483647))))))));
            var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_8 [i_3] [i_4 - 1]))))))))) / (((((/* implicit */_Bool) -2147483647)) ? (64708596U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1])))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 4) 
            {
                for (int i_6 = 3; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_5] [i_3] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_6 - 1] [i_5] [i_4 - 1])) - (((/* implicit */int) arr_6 [i_3]))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_16 [i_3] [i_3] [i_5])), ((unsigned short)62332)))), (min((-4452710971209594557LL), (((/* implicit */long long int) 1879048192U))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (signed char)-13))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) arr_14 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_3]);
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)23))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(unsigned char)6]))) < (var_2))))) : (((((/* implicit */_Bool) arr_20 [(short)12] [i_8] [(unsigned short)4])) ? (arr_24 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_12 = 3; i_12 < 22; i_12 += 2) 
                {
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3])) != (((((/* implicit */_Bool) 4230258681U)) ? (((/* implicit */int) arr_20 [(short)18] [i_7] [i_11])) : (((/* implicit */int) arr_7 [i_3] [i_3]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 3; i_13 < 22; i_13 += 2) 
                    {
                        arr_40 [i_7] [i_11] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)23994)) & (((/* implicit */int) arr_25 [i_7] [16LL] [i_7]))))));
                        arr_41 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1514116423U)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_6 [i_11]))))) : (((var_12) % (973994188U)))));
                        var_27 = ((/* implicit */long long int) arr_6 [i_11]);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)22536)) : (((/* implicit */int) var_3)))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_7] [i_7] [i_11] [i_11])) >> (((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (unsigned short)29297)) : (((/* implicit */int) (short)3170)))) - (29294)))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8602)) ? (603955013U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */long long int) -1287700667)) & (var_6)))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((arr_17 [i_12 - 1] [i_12 - 1] [i_11] [i_11]) < (var_12))))));
                    }
                    arr_44 [i_3] [6LL] [6LL] [i_12 - 3] = ((/* implicit */unsigned short) var_13);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 603955001U)) ? (((/* implicit */int) (short)-11596)) : (((/* implicit */int) arr_35 [i_3] [i_3] [17U]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) : (((long long int) 0ULL))));
                }
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59959))) : (var_12)))) ? (((/* implicit */unsigned int) -1204040006)) : (((((/* implicit */_Bool) 2780850888U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39033)))))));
                    var_34 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_4 [i_11] [i_15]))))) ^ (4294967286U)));
                }
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) arr_29 [i_3] [i_7] [12] [i_11] [i_3]))))) ? (((/* implicit */long long int) -32715639)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_16]))) : (arr_45 [i_3] [i_7] [i_11] [i_16]))))))));
                    arr_50 [i_3] [i_3] [10U] [i_11] [i_16] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) (unsigned char)7)) : (var_11))) : ((+(((/* implicit */int) (unsigned short)46679))))));
                }
                arr_51 [(unsigned short)6] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((((/* implicit */_Bool) var_13)) ? (arr_34 [i_3] [1] [i_3] [i_3]) : (var_2))) : (((4U) << (((/* implicit */int) arr_29 [i_3] [i_7] [i_7] [i_7] [i_7]))))));
            }
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                arr_55 [(unsigned char)13] [(unsigned char)13] [i_17] [(unsigned char)13] = ((/* implicit */long long int) (short)760);
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    var_36 = ((/* implicit */signed char) (unsigned short)65535);
                    var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) & (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11605))) : (arr_1 [i_17])))));
                    arr_58 [i_18] = ((/* implicit */unsigned long long int) ((arr_46 [i_18] [2U] [i_7] [i_3]) <= (arr_46 [i_3] [i_7] [i_17] [i_18])));
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    var_38 = ((/* implicit */unsigned char) -1241595028);
                    var_39 = ((/* implicit */short) arr_29 [i_3] [i_3] [i_7] [i_7] [i_19]);
                    var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_19 - 1] [(_Bool)1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [(short)12])) ? (((/* implicit */long long int) 878721165)) : (arr_39 [i_7] [i_7] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])));
                    var_41 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_60 [19U] [i_17] [i_7] [7LL])) ? (((/* implicit */int) arr_13 [i_3] [i_7] [i_17] [i_17])) : (((/* implicit */int) arr_13 [i_19] [i_17] [i_3] [i_3])))) < (((/* implicit */int) var_7))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_20 = 2; i_20 < 20; i_20 += 4) 
                {
                    arr_63 [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_17] [i_20]);
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) var_4);
                        arr_67 [i_3] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_20] [i_20 + 2] [i_20 + 3] [i_20] [i_20 + 1] [i_21])) || (((/* implicit */_Bool) arr_57 [i_3] [i_20 + 2] [i_20 + 1] [i_20 + 1] [i_20] [i_20 - 1]))));
                        arr_68 [6U] [i_20] = ((/* implicit */long long int) (+(((/* implicit */int) arr_43 [i_17] [i_20 + 2] [i_20 - 2] [i_20] [i_20] [i_20 - 1]))));
                        var_43 = ((/* implicit */unsigned short) (signed char)51);
                        var_44 = (~(var_4));
                    }
                    var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)36601)) ? (((/* implicit */unsigned long long int) arr_59 [i_3] [i_3] [i_3] [i_7] [(unsigned char)0] [i_3])) : (0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46683)))));
                    var_46 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_11) : (((/* implicit */int) (signed char)45)))))));
                }
                for (unsigned int i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    var_47 = ((/* implicit */int) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3] [i_7] [i_7] [i_7])))));
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_3] [i_3] [i_3] [i_3]))) : (arr_5 [i_17] [i_17])))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_16 [20LL] [i_22] [i_22])))))))))));
                }
                var_49 = ((/* implicit */unsigned short) var_4);
            }
        }
        var_50 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_8 [i_3] [i_3])), (max((4294967266U), (((/* implicit */unsigned int) (signed char)39))))));
    }
    var_51 = ((/* implicit */short) 2046673476964893336LL);
    var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */int) (short)-5493)), (var_11))) : (((/* implicit */int) ((short) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
}
