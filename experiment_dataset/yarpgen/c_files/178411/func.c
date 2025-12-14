/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178411
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned short) (+(-4938837199493228159LL))));
        var_19 = ((/* implicit */signed char) ((arr_3 [i_0]) | (var_14)));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((var_1) ? (((((/* implicit */_Bool) 12ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) var_13)))))));
    }
    for (short i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_11 [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_4])))));
                        arr_13 [(unsigned short)2] [(unsigned short)2] [i_3] [i_4] = (-(max((max((((/* implicit */unsigned int) var_15)), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_9)))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_4]))) + ((+(((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_10)) : (12ULL)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 1; i_7 < 7; i_7 += 1) 
                {
                    {
                        arr_22 [i_1 - 3] [2U] [i_5] [i_6] [i_7 + 3] [2U] = arr_0 [i_7];
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7])) ? (arr_8 [(short)1] [(unsigned short)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1 + 1] [i_1] [0U] [i_7 + 1] [i_7 - 1])))))) || (((/* implicit */_Bool) max((3226662846U), (((/* implicit */unsigned int) (_Bool)1))))))), (((var_17) == (((/* implicit */long long int) arr_6 [i_1 - 2]))))));
                        arr_23 [i_1] [(signed char)5] [i_1] [i_5] [i_6] [i_7 + 3] = ((/* implicit */short) var_17);
                        var_24 &= ((/* implicit */short) max(((signed char)-89), (((/* implicit */signed char) (_Bool)1))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 4; i_8 < 9; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 9; i_9 += 2) 
            {
                {
                    var_25 = arr_6 [i_9];
                    var_26 ^= (+(min((arr_0 [i_8 - 1]), (arr_0 [i_8 + 1]))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)36683)) >> (((((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) arr_1 [7U])))) - (51)))));
                        arr_40 [i_10] [i_12] [i_12] [(unsigned short)8] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_10] [i_10] [i_10] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (arr_36 [(_Bool)1] [i_11 + 2] [(short)16] [i_13])));
                        arr_41 [i_10] [i_12] [i_12] [i_13] = arr_35 [i_12] [i_12];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (signed char i_16 = 1; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) var_6);
                        /* LoopSeq 2 */
                        for (long long int i_17 = 3; i_17 < 18; i_17 += 4) /* same iter space */
                        {
                            arr_55 [i_10] [i_14] [i_15] [i_17] [i_16] [i_17] [i_17] = ((/* implicit */unsigned short) ((((3281161159U) * (0U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_15] [i_17 - 2] [i_17] [i_17])))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [i_10] [i_10])))))));
                        }
                        for (long long int i_18 = 3; i_18 < 18; i_18 += 4) /* same iter space */
                        {
                            arr_58 [i_10] [i_18 - 2] = ((/* implicit */short) ((unsigned short) arr_56 [i_10] [i_10] [i_16] [i_18 - 1] [i_18]));
                            var_31 = ((((((((/* implicit */_Bool) 3101501513U)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) (short)32767)))) + (32807))) - (40))));
                            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-2353))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_19 = 0; i_19 < 19; i_19 += 1) 
        {
            for (long long int i_20 = 1; i_20 < 16; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        arr_67 [i_20] [(short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_66 [i_20 + 3] [i_20] [i_20 + 2])) ? (((arr_38 [i_10] [i_19] [0LL] [i_20] [i_21] [i_10]) ? (((/* implicit */int) arr_38 [i_10] [2U] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) (signed char)18)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_64 [i_10])))))));
                        arr_68 [i_20] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_59 [i_20 + 1] [i_20 + 1]))));
                        arr_69 [(_Bool)1] [i_10] [i_19] [(short)0] [(_Bool)1] [i_20] = ((/* implicit */short) var_7);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_22 = 2; i_22 < 22; i_22 += 3) 
    {
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 24; i_23 += 3) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    arr_79 [i_22] [(short)8] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_22 + 2] [i_22] [i_22 - 1])))))) <= (min((((/* implicit */unsigned int) arr_78 [i_22] [i_22] [i_22 - 2])), (var_9)))));
                    arr_80 [i_22] [i_23] = ((/* implicit */unsigned long long int) max((arr_74 [i_22]), (arr_74 [i_22])));
                    var_33 = ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_76 [i_22] [i_22] [i_22] [i_22])) != (((/* implicit */int) var_16)))) ? (((/* implicit */unsigned long long int) (+(0U)))) : (max((7824230037950037124ULL), (((/* implicit */unsigned long long int) 70368710623232LL))))))));
                    arr_81 [(unsigned short)22] [20U] [i_24] [i_24] &= ((/* implicit */short) (((+(((/* implicit */int) arr_78 [i_22] [i_22] [i_24])))) | ((+(((/* implicit */int) (unsigned short)65535))))));
                    var_34 = ((/* implicit */unsigned short) max((arr_70 [i_22]), (arr_77 [i_22])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 4; i_25 < 21; i_25 += 3) 
        {
            for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_3) % (var_13))), (arr_72 [i_22 + 1] [(unsigned short)2])))) && (((var_13) == ((~(var_10))))))))));
                    arr_87 [(signed char)6] [i_25 + 1] [(signed char)6] &= ((/* implicit */signed char) var_8);
                    var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [(unsigned short)6])) ? (11865039192657153366ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (max((1377115694604865130ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)45412)) - (45397))))) : (((/* implicit */int) var_8))));
                    var_37 = ((/* implicit */signed char) var_2);
                    var_38 = ((/* implicit */unsigned int) min((var_38), (max((((/* implicit */unsigned int) arr_86 [i_22] [(short)22])), (((unsigned int) arr_72 [(unsigned short)2] [(short)6]))))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 4) 
    {
        for (signed char i_28 = 0; i_28 < 11; i_28 += 3) 
        {
            {
                arr_92 [i_27] = ((/* implicit */unsigned short) var_13);
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (+(arr_6 [i_27])))) ? (((((/* implicit */_Bool) arr_51 [i_27] [i_27] [i_27] [i_28] [i_28] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_17))) : (arr_89 [i_27] [7U]))) : (((/* implicit */long long int) (+(((var_5) / (var_9))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 1) 
                {
                    for (signed char i_30 = 2; i_30 < 9; i_30 += 4) 
                    {
                        for (unsigned short i_31 = 1; i_31 < 10; i_31 += 1) 
                        {
                            {
                                arr_101 [i_27] [i_28] [i_28] [i_29] [i_29] [i_31] = ((/* implicit */long long int) arr_28 [(unsigned short)8] [i_28] [i_29] [i_30]);
                                var_41 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((((/* implicit */int) arr_78 [(short)3] [(signed char)21] [i_30])) % (((/* implicit */int) arr_31 [i_31 + 1])))), (((/* implicit */int) var_4))))), (((var_1) ? ((-(arr_82 [i_29]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_27] [(short)11] [i_27] [i_29])) ? (arr_27 [i_27] [i_29] [(unsigned short)4] [i_31]) : (var_11))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_32 = 0; i_32 < 25; i_32 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_33 = 0; i_33 < 25; i_33 += 1) 
        {
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                {
                    arr_111 [i_32] [i_32] = (i_32 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37048))))) >> ((((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_109 [i_32] [i_33] [(signed char)11] [i_34])) : (((/* implicit */int) (short)804)))))) + (7216)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37048))))) >> ((((((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_109 [i_32] [i_33] [(signed char)11] [i_34])) : (((/* implicit */int) (short)804)))))) + (7216))) + (42901))))));
                    /* LoopNest 2 */
                    for (signed char i_35 = 0; i_35 < 25; i_35 += 1) 
                    {
                        for (unsigned short i_36 = 0; i_36 < 25; i_36 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) ((unsigned int) (-9223372036854775807LL - 1LL))))), (((((/* implicit */long long int) ((/* implicit */int) (short)19))) - (-5807557126142390021LL)))));
                                var_43 &= (+((+(((unsigned int) 9415151551466717767ULL)))));
                                var_44 = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_106 [i_32]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_45 &= ((/* implicit */unsigned int) arr_114 [i_32] [i_32] [(short)8] [i_32]);
        var_46 = ((max((0LL), (((/* implicit */long long int) (_Bool)1)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23212)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)32767))))));
    }
}
