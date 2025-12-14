/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117804
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
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))) + (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (-6216510212058578471LL)));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) (!((_Bool)1)));
                            arr_18 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_3 + 4] [i_1 + 3])) : (((/* implicit */int) arr_7 [i_3 + 4] [i_1 + 3]))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2 - 1] [i_1 + 2])))))));
                            arr_19 [i_3] [i_3 + 2] [i_2] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_2] [i_3 + 1] [i_4 - 1])) ? (((/* implicit */int) (unsigned short)51741)) : (((/* implicit */int) var_9))));
                        }
                        arr_20 [i_3] [14ULL] [i_3] = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_3] [i_2] [i_2] [1U] [i_3]))))));
                        arr_21 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_14 [i_0] [(unsigned short)5] [i_0] [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2] [i_3]))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [0U] [i_1 - 1] [i_2] [(signed char)15])) : (((/* implicit */int) arr_5 [i_1 - 1]))));
                        arr_25 [i_0] [i_1] [9] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2174386734U)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
                        arr_26 [i_0] [i_1 - 1] [i_2] [i_2] &= ((/* implicit */short) var_11);
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned int) ((unsigned short) var_0));
                        arr_30 [i_6] [i_2 - 1] = ((/* implicit */_Bool) (~(-1503687046)));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [i_2] [i_2 - 2] [i_1])) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_2] [i_2] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [i_1] [i_2 + 2] [i_1])))))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_5 [i_0]))));
        arr_31 [i_0] |= ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])));
    }
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 2174386734U))));
                        arr_43 [i_10] [i_8] [i_8] [i_7] = arr_42 [i_9] [i_10] [i_9] [i_10];
                    }
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min(((~(14416613188553998929ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))));
                    arr_44 [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (((min((((/* implicit */long long int) 17U)), (arr_34 [i_8]))) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)17601))))))));
        /* LoopSeq 2 */
        for (signed char i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_50 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8649)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11]))) : (1862902492743756515ULL)));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 3; i_13 < 20; i_13 += 1) 
                {
                    var_21 += ((arr_47 [i_12] [i_11 + 1] [i_11 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                    arr_54 [4ULL] [4ULL] [4ULL] [4ULL] [i_12] [i_13] &= ((/* implicit */unsigned char) ((arr_47 [i_12] [i_12] [(signed char)20]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(unsigned char)16] [i_11] [i_11])))));
                }
                var_22 += (~(((/* implicit */int) arr_35 [i_11 + 1] [i_11 + 1] [i_12])));
                var_23 = ((/* implicit */unsigned char) ((int) arr_35 [i_11 - 1] [i_11 - 1] [i_11]));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_58 [i_7] [i_11 + 1] [i_12] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_12] [i_11 - 1] [i_12])) ? (arr_45 [i_12] [i_11 + 2] [i_14]) : (arr_45 [i_12] [i_11 + 1] [i_11])));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_49 [i_12] [i_11 + 1])) == (((/* implicit */int) arr_49 [i_12] [i_11 + 1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_63 [i_15] [i_14] [i_11] [i_11] [i_11] [(unsigned char)16] = ((/* implicit */signed char) var_11);
                        var_25 += ((arr_49 [i_12] [i_11 + 3]) || (((/* implicit */_Bool) arr_52 [i_11 + 2] [i_11 + 2] [i_11] [i_11 - 1])));
                        arr_64 [i_11] [i_11] [i_12] [i_11] [i_7] = ((/* implicit */unsigned char) ((unsigned int) (signed char)20));
                        var_26 ^= ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_35 [i_11 + 1] [i_11 - 1] [i_12])));
                    }
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        arr_67 [8U] [i_11] [i_12] [i_14] [i_11] [i_14] [(unsigned short)5] = ((/* implicit */unsigned char) ((_Bool) arr_42 [i_11] [i_7] [i_11 - 1] [(_Bool)1]));
                        arr_68 [i_7] [i_12] [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_62 [i_11 + 2] [i_12] [i_11 + 1] [i_12] [i_11 + 3]))));
                        arr_69 [i_7] [i_11 + 3] [i_12] [i_16] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_66 [i_7] [i_11 + 1] [i_12] [i_14] [i_16] [i_16] [i_11 + 2]))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned char i_17 = 1; i_17 < 20; i_17 += 3) 
            {
                arr_72 [i_7] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17 + 1] [i_11] [i_17] [i_7] [12])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_66 [i_17 + 1] [i_11 - 1] [7LL] [i_17] [i_11] [i_11 + 2] [(signed char)13]))));
                var_27 += ((/* implicit */unsigned long long int) 175985050U);
            }
            for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    arr_79 [i_11] [(signed char)5] [i_18] [i_19] = ((/* implicit */unsigned int) var_5);
                    arr_80 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-23)), ((unsigned char)250)));
                    var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_78 [17] [i_11] [i_11 + 2] [i_11] [i_11 + 1]))))) ? (((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) arr_66 [i_7] [i_7] [i_11] [i_19] [i_7] [i_7] [i_7]))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_46 [i_11 + 2] [i_19])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_70 [i_7] [i_19] [i_18] [i_19]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        arr_83 [i_7] [i_11] [i_18] [i_20] [i_19] [i_19] [i_19] |= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_35 [i_18] [i_11 + 1] [i_18])) : (((/* implicit */int) var_0))));
                        arr_84 [i_7] [i_11] [i_7] [i_19] [i_19] = ((/* implicit */int) (-(arr_73 [i_19] [i_11])));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_89 [i_7] [i_11] [i_18] [i_19] [i_11] = ((/* implicit */unsigned short) ((var_10) ? (max((((/* implicit */long long int) ((signed char) var_1))), (max((((/* implicit */long long int) var_1)), (var_3))))) : (((/* implicit */long long int) (-(((((/* implicit */int) var_9)) / (((/* implicit */int) var_10)))))))));
                        var_29 -= max(((-(arr_47 [i_19] [i_19] [i_21]))), (((/* implicit */unsigned int) var_4)));
                        var_30 = ((/* implicit */signed char) max((var_30), (((signed char) ((unsigned int) arr_41 [i_7] [i_11 + 2] [i_11 + 2])))));
                        arr_90 [i_18] [i_11] [i_18] [i_11] [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (signed char)23))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((+(2174386727U))))), (((/* implicit */unsigned int) (signed char)-64))));
                    }
                }
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_1))));
                    arr_94 [i_18] [i_18] [15ULL] [i_22] [i_11] = var_9;
                    arr_95 [i_11] [i_11] = ((/* implicit */long long int) (signed char)-1);
                    arr_96 [i_22] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_11] [i_11] [i_11 + 3] [i_22] [i_11 + 3] [i_22])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
                }
                for (unsigned char i_23 = 3; i_23 < 19; i_23 += 2) 
                {
                    arr_99 [i_18] [i_18] [i_18] [i_11] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) 3649527929U)) + (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))))));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_9))));
                }
                var_33 += ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (~(821860737U)))), ((~(arr_34 [i_18]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_49 [i_18] [i_11 + 2])))))));
            }
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-20216)) : (((/* implicit */int) var_1)))))));
        }
        /* vectorizable */
        for (short i_24 = 1; i_24 < 19; i_24 += 3) 
        {
            var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (unsigned char i_25 = 0; i_25 < 21; i_25 += 2) 
            {
                var_36 -= ((/* implicit */unsigned short) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
                /* LoopSeq 1 */
                for (short i_26 = 2; i_26 < 20; i_26 += 4) 
                {
                    arr_108 [i_7] [i_24] [i_25] [i_26] = ((/* implicit */_Bool) (~(arr_51 [i_26] [i_24 - 1] [i_25] [i_26] [i_26] [i_26 - 1])));
                    arr_109 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned int) arr_52 [i_7] [i_24] [i_7] [i_24]));
                }
                arr_110 [i_7] [i_24] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) arr_87 [i_24 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_7] [i_25] [i_25] [(_Bool)1] [i_24 - 1]))) : (arr_73 [i_24 + 1] [i_25])));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)30))))) : (arr_59 [i_25] [i_25] [i_25] [i_25] [i_24 + 1] [i_24] [i_24 + 2])));
            }
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((short) arr_61 [i_24] [i_24] [i_24 + 1] [i_24] [i_24 + 1] [(_Bool)1])))));
        }
        arr_111 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -52177273)) ? (821860737U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
    }
    for (unsigned char i_27 = 0; i_27 < 21; i_27 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)70))))))) - ((~(((var_10) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_27]))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_28 = 1; i_28 < 20; i_28 += 2) 
        {
            for (unsigned short i_29 = 0; i_29 < 21; i_29 += 4) 
            {
                {
                    arr_122 [i_29] [i_28] [i_27] [i_27] = ((/* implicit */signed char) var_10);
                    var_40 = ((/* implicit */unsigned char) arr_48 [i_27]);
                    var_41 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1517959494300366211LL))));
                }
            } 
        } 
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (_Bool)1))));
        /* LoopSeq 1 */
        for (long long int i_30 = 0; i_30 < 21; i_30 += 1) 
        {
            var_43 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (signed char)-23)) ? (arr_56 [(signed char)1] [(signed char)1]) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((int) (_Bool)1))))));
            arr_126 [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((((unsigned long long int) arr_61 [i_27] [i_27] [i_27] [(_Bool)1] [i_27] [i_27])), (138538465099776ULL))) : (((/* implicit */unsigned long long int) (~(var_3))))));
        }
    }
}
