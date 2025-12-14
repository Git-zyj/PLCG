/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165801
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
    var_11 = ((/* implicit */int) var_7);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_2))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] |= ((/* implicit */unsigned long long int) max((arr_4 [i_0 + 2]), (max((((/* implicit */unsigned char) var_4)), (max((var_3), ((unsigned char)255)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3 - 1] [16ULL] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1] [i_3 + 2] [i_3]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1] [i_1] [i_3])))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3] [i_3 + 1] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1]))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) <= (max((((/* implicit */unsigned long long int) (unsigned short)29183)), (562915593682944ULL)))))))));
                        arr_12 [i_2] [i_1] [i_2] [i_3] = (~(arr_6 [i_0 + 2] [i_1] [i_2] [i_3]));
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((4503599627354112ULL), (((/* implicit */unsigned long long int) -9223372036854775803LL)))), (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0] [i_1] [i_1] [i_3]))))))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_14 = (~(((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 3] [8])) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [4U])) : (((/* implicit */int) arr_7 [i_0] [i_0 + 3] [(unsigned short)18])))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_15 |= ((/* implicit */short) 4095LL);
                arr_18 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */int) arr_2 [i_5] [i_0 - 2] [i_0 - 2]);
            }
        }
        arr_19 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0 - 2]))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 20; i_7 += 3) 
            {
                for (unsigned char i_8 = 3; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned int) (((+(arr_25 [i_8] [i_8] [i_8 - 1] [i_8 - 2] [i_8 + 2]))) * (((/* implicit */int) ((_Bool) 0ULL)))));
                        var_17 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) ((short) var_10))))) - (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1))))))));
                        arr_29 [i_0 - 1] [i_6] [i_6] [i_7] [i_7] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_0))))) - ((-(arr_17 [i_0 - 1])))));
                    }
                } 
            } 
        } 
        arr_30 [i_0] |= ((/* implicit */unsigned short) (-(((unsigned int) (-(arr_6 [i_0] [i_0] [i_0] [i_0]))))));
        arr_31 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1] [i_0]))) : (arr_6 [i_0] [i_0] [i_0 + 3] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_28 [7ULL] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2])))) : ((((-2147483647 - 1)) | (((/* implicit */int) var_9))))));
    }
    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9 + 1]))) : (-1504678055121209172LL)))));
        var_18 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [(_Bool)1]))) | ((~(arr_1 [i_9])))))), (4503599627354112ULL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            var_19 -= ((/* implicit */int) (+(((long long int) arr_8 [i_9 - 1] [i_10] [18U]))));
            arr_37 [i_9] [i_10] = ((/* implicit */int) (short)56);
        }
        for (unsigned char i_11 = 2; i_11 < 16; i_11 += 2) 
        {
            arr_41 [i_9] [11] = ((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_9 + 1] [i_11 + 1])), (((((/* implicit */_Bool) 16383U)) ? (((/* implicit */int) arr_28 [i_9] [i_9] [i_9] [i_9 + 2] [i_11 + 1] [i_11])) : (((/* implicit */int) arr_3 [i_9 + 1] [i_11 - 1]))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */short) arr_16 [i_11] [i_9] [i_9])), (arr_15 [i_9] [i_9]))), (((/* implicit */short) arr_20 [i_11]))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))) ^ (var_8))) : (126976ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_11 + 2] [i_11 + 2])) || (((/* implicit */_Bool) arr_13 [i_9 + 2]))))))));
            arr_42 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) 0ULL);
        }
    }
    for (unsigned char i_12 = 1; i_12 < 15; i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            for (int i_14 = 1; i_14 < 16; i_14 += 2) 
            {
                {
                    arr_51 [i_12] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 25769803776LL)) ? (((/* implicit */int) arr_20 [i_14 + 2])) : (((/* implicit */int) arr_20 [i_14 + 2])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        for (int i_16 = 3; i_16 < 16; i_16 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((var_4), (((signed char) (unsigned short)65509)))))));
                                arr_58 [i_12] [i_13] [i_14] [i_14] [i_14] [i_12] [i_16] = ((/* implicit */signed char) var_5);
                                var_23 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_15 [i_13] [i_15])) ? (((long long int) (-2147483647 - 1))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))));
                                var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)63)) * (((/* implicit */int) arr_7 [i_13] [i_13] [i_12]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_16] [i_16 - 1] [i_16 + 1] [i_16 - 3])) / (((/* implicit */int) arr_57 [i_16] [i_16 - 2] [i_16 + 2] [i_16 - 3]))))) : (min((((/* implicit */unsigned long long int) (-(var_10)))), ((+(arr_46 [i_14 + 1])))))));
                            }
                        } 
                    } 
                    var_25 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_12 - 1] [0] [i_14 + 2] [i_14])) - (((/* implicit */int) (unsigned char)255))))), (((unsigned long long int) arr_53 [i_14] [i_14 + 2] [i_14 + 1]))));
                    /* LoopSeq 4 */
                    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_26 = ((/* implicit */int) (~(1504678055121209172LL)));
                        arr_62 [i_12] [i_12] [3] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_43 [i_12]), (18442240474082197503ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 1073741823U)) ? (18442240474082197503ULL) : (((/* implicit */unsigned long long int) -1504678055121209182LL)))) : ((-(arr_45 [i_12]))))) : (((/* implicit */unsigned long long int) arr_25 [i_12] [i_13] [i_14] [(_Bool)1] [i_17]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_18 = 2; i_18 < 17; i_18 += 2) 
                    {
                        var_27 |= ((/* implicit */_Bool) ((18442240474082197503ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))));
                        arr_67 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_7))))));
                    }
                    for (unsigned int i_19 = 1; i_19 < 17; i_19 += 1) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (max((((/* implicit */int) arr_22 [i_12] [17U] [i_14 + 2])), ((+(((/* implicit */int) var_0))))))));
                        var_29 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_70 [i_19 + 1] [i_19 + 1] [2LL] [2LL] [i_12 - 1] [i_12]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_12 + 2] [i_12 + 2]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 4) 
                        {
                            arr_73 [i_12] [i_12] [i_20] [i_12] [i_12] |= ((/* implicit */unsigned int) var_7);
                            arr_74 [i_12 + 2] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)120))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_12] [i_12]))) + (var_8)))))) ? ((+(max((4503599627354112ULL), (((/* implicit */unsigned long long int) arr_22 [i_12 + 2] [i_13] [15U])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_19 - 1])) < (((/* implicit */int) arr_33 [i_19 + 1]))))))));
                        }
                        for (short i_21 = 4; i_21 < 17; i_21 += 3) 
                        {
                            arr_79 [i_12] = ((/* implicit */unsigned long long int) (unsigned char)0);
                            arr_80 [i_12 + 1] [i_12] [i_12 + 2] [i_12] [i_12 - 1] [i_12] = ((/* implicit */unsigned short) arr_66 [(signed char)4] [i_13] [i_13] [i_13] [i_13] [i_13]);
                        }
                        for (unsigned short i_22 = 3; i_22 < 16; i_22 += 1) 
                        {
                            arr_84 [2U] |= ((/* implicit */_Bool) ((unsigned char) arr_83 [4ULL] [(signed char)2] [i_12] [i_22] [i_22] [4ULL] [i_22]));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~(max((var_2), (((/* implicit */long long int) 1073741823U))))))), (((((((/* implicit */_Bool) arr_57 [i_12] [i_12] [i_12] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4503599627354112ULL))) | (((/* implicit */unsigned long long int) max((3221225472U), (((/* implicit */unsigned int) var_0))))))))))));
                            arr_85 [i_12] = ((/* implicit */int) var_8);
                        }
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 2) 
                    {
                        var_31 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((arr_25 [i_23] [i_23] [i_14] [i_12] [i_12]) + (2147483647))) << (((3221225483U) - (3221225483U)))))))) - (((((/* implicit */_Bool) arr_87 [17LL] [i_13] [i_14] [i_23])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_24 [i_12] [i_12] [i_14] [i_23])) : (arr_77 [i_12] [i_12] [i_13] [(unsigned short)15] [i_12] [i_12] [i_12])))) : (((((/* implicit */long long int) arr_1 [i_23])) | (arr_36 [i_23] [i_23])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) arr_57 [i_13] [i_14 + 1] [i_23] [11ULL]);
                            arr_91 [i_12] [i_13] [i_12] [i_23] [i_24] |= ((/* implicit */short) min((((((/* implicit */_Bool) arr_59 [i_23] [i_23])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_59 [i_12] [i_23])))), (((((/* implicit */int) arr_59 [i_23] [i_24])) ^ (((/* implicit */int) arr_90 [i_24] [i_23] [i_12 + 1] [i_12 + 1]))))));
                            arr_92 [i_12] [i_12] [i_13] [i_14] [i_12] [i_13] = (~((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12 + 1] [i_12 + 1] [i_13] [i_14 + 1] [i_23] [i_24]))) - (arr_70 [i_12] [i_13] [i_14] [i_12] [i_24] [i_24]))))));
                        }
                        for (int i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            var_33 |= ((/* implicit */short) ((unsigned long long int) max((max((562915593682944ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max(((short)-1), (((/* implicit */short) arr_83 [i_23] [i_25] [i_14] [6LL] [i_14] [i_14] [i_25]))))))));
                            arr_95 [i_23] [4LL] [i_14] [(short)14] [i_25] |= ((/* implicit */int) arr_13 [i_12 + 2]);
                            var_34 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_7))))) : (arr_60 [i_12 + 3] [i_12] [i_12] [i_12 + 1] [i_12] [i_14 - 1]))));
                        }
                        arr_96 [10] [i_12] [i_13] [(signed char)12] [i_23] [i_23] |= ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [i_12] [i_13] [i_14])))))) - (var_2))));
                    }
                }
            } 
        } 
        arr_97 [i_12] [i_12] = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_49 [i_12 + 1])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_12 - 1] [i_12] [i_12] [i_12 + 2] [i_12] [i_12] [(unsigned short)5]))))))))));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 15; i_26 += 4) 
    {
        arr_101 [i_26] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_47 [i_26] [i_26] [i_26])) : (1ULL)));
        arr_102 [i_26] |= ((/* implicit */long long int) (_Bool)0);
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_14 [5LL] [i_26]))))) - (((((/* implicit */unsigned long long int) 2147483647)) / (18442240474082197503ULL))))))));
        var_36 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_26] [i_26]))));
    }
    /* LoopNest 3 */
    for (unsigned int i_27 = 0; i_27 < 13; i_27 += 4) 
    {
        for (unsigned int i_28 = 1; i_28 < 12; i_28 += 1) 
        {
            for (unsigned char i_29 = 0; i_29 < 13; i_29 += 4) 
            {
                {
                    var_37 = ((/* implicit */short) arr_88 [i_27] [i_28] [i_28] [(_Bool)1] [(_Bool)1] [i_28] [i_27]);
                    var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_28 + 1] [i_28 - 1] [i_28 - 1])) ? (arr_89 [i_28 - 1] [i_28 + 1] [i_28 + 1]) : (arr_89 [i_28 + 1] [i_28 + 1] [i_28 + 1])))) ? (((/* implicit */unsigned int) ((arr_89 [i_28 + 1] [i_28 - 1] [i_28 - 1]) - (arr_89 [i_28 - 1] [i_28 - 1] [i_28 - 1])))) : (4294967288U)));
                    arr_110 [i_28 - 1] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)73)) ? (((arr_60 [i_27] [i_28 - 1] [(unsigned short)0] [i_27] [i_28 + 1] [i_28 - 1]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_29] [i_27] [i_28] [i_28] [i_27])) ? (arr_56 [i_29] [i_29] [i_28] [i_28] [i_27] [i_27]) : (((/* implicit */int) arr_99 [i_27]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_29] [i_28] [i_27])) ? (arr_100 [i_27]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_27] [i_27] [i_27] [i_27] [i_27])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_8 [i_27] [i_27] [i_28])))))) : (arr_6 [i_27] [i_28 + 1] [i_28 + 1] [i_29])))));
                }
            } 
        } 
    } 
}
