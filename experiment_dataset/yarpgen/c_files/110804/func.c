/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110804
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) max((((/* implicit */long long int) arr_0 [(unsigned short)2])), (var_2))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min(((~(((long long int) arr_3 [i_0] [i_1])))), (((((/* implicit */_Bool) 809560442662553118LL)) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) arr_0 [i_0])), (-809560442662553138LL)))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = (!(((/* implicit */_Bool) arr_1 [i_1])));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((-(arr_2 [i_0] [i_1]))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) arr_4 [i_0]))) - (12129)))))) ? (min((min((809560442662553118LL), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_3])))), (arr_2 [i_0] [i_2]))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_11 [i_0] [i_0] [i_0] [i_3]), (809560442662553118LL)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                var_17 = ((/* implicit */signed char) max((var_17), (arr_1 [i_4 + 2])));
                arr_14 [i_0] [(signed char)3] = ((/* implicit */int) arr_7 [(signed char)10] [i_1] [i_4 + 3]);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_4 [i_0]) << (((((var_11) + (1870993671))) - (29))))), (((/* implicit */int) arr_10 [i_4 + 3] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (arr_11 [i_1] [(_Bool)1] [i_1] [i_4 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7))))));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_19 = ((/* implicit */long long int) var_12);
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_10))));
                            var_21 &= ((/* implicit */long long int) (~(6323790882009456643ULL)));
                            arr_26 [i_0] [(signed char)10] [i_6] [i_8] [i_8] [i_8] [i_6] &= ((/* implicit */unsigned long long int) var_9);
                            var_22 = ((/* implicit */short) 809560442662553114LL);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (max((var_0), (((/* implicit */unsigned long long int) -10LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7797830563232560455LL)) ? (arr_3 [i_0] [i_6]) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) var_13)))))) : (var_0))))))));
                arr_27 [i_6] = ((/* implicit */long long int) (signed char)(-127 - 1));
            }
        }
        var_24 = ((/* implicit */int) (-(((4294967295U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_25 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0]) : (((/* implicit */int) var_1)))))))));
    }
    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (int i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    {
                        arr_38 [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6323790882009456643ULL)) ? (((int) arr_33 [2] [2])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_31 [i_9] [i_10 - 1] [i_11])))))) - (min((((var_13) ? (1993351417) : (var_11))), (((/* implicit */int) arr_31 [i_12 - 3] [i_10 - 2] [15LL]))))));
                        var_25 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_33 [i_12 + 1] [i_10 - 2]), (arr_33 [i_12 + 1] [i_10 + 1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) arr_40 [i_9] [i_9])) ? (arr_32 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9])))))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) arr_33 [i_9] [i_13])) & (arr_32 [i_9])))))));
                    var_27 = ((/* implicit */signed char) (-(max(((-(((/* implicit */int) var_10)))), (((int) arr_35 [0U] [i_14]))))));
                    arr_44 [i_9] [i_13] [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_42 [i_9] [i_14]), (arr_42 [i_9] [i_13])))) ? (((/* implicit */int) (!(arr_30 [i_13])))) : (((arr_30 [i_13]) ? (var_9) : (((/* implicit */int) arr_30 [i_13]))))));
                    arr_45 [i_9] [(signed char)11] = ((/* implicit */int) arr_43 [i_9] [i_13] [i_13]);
                }
            } 
        } 
        arr_46 [i_9] [i_9] |= ((/* implicit */signed char) arr_28 [i_9]);
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-8)) ? (max((min((6323790882009456643ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) arr_30 [i_9])))) : (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) ((unsigned short) var_3))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 2; i_15 < 14; i_15 += 2) 
    {
        for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            for (int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21071))) != (min((((((/* implicit */_Bool) arr_42 [i_15] [i_18])) ? (arr_51 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))), (((/* implicit */unsigned int) max((arr_53 [i_17] [i_17] [i_17] [i_16]), (((/* implicit */short) var_8)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_19 = 3; i_19 < 16; i_19 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) arr_35 [i_15] [i_15 + 3]);
                            arr_61 [i_19] [i_16] [i_16] [i_18] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))))) ? (13230570) : (((/* implicit */int) ((unsigned char) arr_33 [i_15] [i_15])))));
                        }
                    }
                    for (int i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) -2001938676);
                        var_32 = ((/* implicit */int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        arr_68 [i_21] [i_21] [i_17] [i_17] = (~(((/* implicit */int) ((_Bool) var_4))));
                        arr_69 [i_15] [(short)4] = ((/* implicit */int) var_8);
                        var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_56 [i_15] [i_15] [i_17] [i_21]))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 18; i_22 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) min((((arr_30 [i_15 + 3]) ? (arr_35 [i_17] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_15 - 1]))))), (((/* implicit */unsigned int) ((int) arr_30 [i_15 - 1])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 2) 
                        {
                            var_35 = var_11;
                            arr_74 [i_15 + 3] [9U] [i_17] [(_Bool)1] [i_23] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_64 [i_15] [i_15 + 2]) % (arr_64 [i_22] [i_15 - 2])))) || (((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (max((-764942637), (arr_70 [(_Bool)1]))))))));
                        }
                        arr_75 [i_22] = ((/* implicit */short) ((arr_43 [(unsigned short)10] [i_16] [i_17]) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_58 [i_15] [i_15 - 2] [i_15 - 2] [i_15 + 4] [i_15 + 3] [i_22] [i_22]), (((/* implicit */unsigned short) var_8)))))) : ((((!(((/* implicit */_Bool) arr_47 [i_17])))) ? (arr_32 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_15 - 2] [i_16] [i_17] [i_17] [i_16] [i_16] [i_16])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            arr_82 [i_15] [i_15] [(signed char)1] [i_25] = ((/* implicit */short) (+(((int) arr_29 [i_25]))));
                            var_36 = ((/* implicit */short) min((max((((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (unsigned short)803))))), ((signed char)-23))), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_39 [i_24] [i_24])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (unsigned char)12)) : (arr_33 [i_15 + 2] [i_25])))))))));
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((0LL) / (((/* implicit */long long int) arr_51 [i_15 + 1]))))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_37 [i_16] [i_17] [i_17])), (arr_58 [i_15] [i_16] [i_17] [i_24] [i_17] [(unsigned short)3] [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4066325038349189138ULL)))))) : (min((((/* implicit */unsigned long long int) arr_30 [i_17])), (16383ULL))))))))));
                        }
                        for (long long int i_26 = 0; i_26 < 18; i_26 += 2) 
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((long long int) arr_73 [i_26])) : (arr_73 [i_17])));
                            arr_86 [i_15] [i_16] [i_17] [i_16] [i_17] = ((/* implicit */short) var_12);
                            arr_87 [i_15] [i_16] [i_17] [i_24] = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (var_0)))))));
                        }
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_55 [i_16] [i_16] [i_24]))))) == (((((/* implicit */_Bool) (unsigned short)27125)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_73 [i_15])))))), (((-809560442662553118LL) % (((/* implicit */long long int) ((/* implicit */int) arr_65 [(unsigned short)17] [i_16] [15ULL] [i_17] [i_24]))))))))));
                    }
                    var_40 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_49 [i_15] [i_16] [i_15 + 3])) ? (arr_49 [i_17] [i_16] [i_15 - 1]) : (var_11))));
                    /* LoopNest 2 */
                    for (short i_27 = 0; i_27 < 18; i_27 += 2) 
                    {
                        for (signed char i_28 = 0; i_28 < 18; i_28 += 2) 
                        {
                            {
                                arr_93 [i_15] [(signed char)14] [(signed char)14] [i_17] [i_27] [i_27] [i_28] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_81 [i_15] [i_16] [i_17] [i_17] [i_28])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), (arr_52 [i_15 + 2] [i_27])))), (min((((/* implicit */unsigned long long int) arr_34 [i_15])), (min((var_0), (((/* implicit */unsigned long long int) arr_73 [i_16]))))))));
                                arr_94 [i_28] [(short)6] [(unsigned char)13] [i_15] [(short)6] = ((/* implicit */long long int) arr_55 [i_15] [i_16] [i_16]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
