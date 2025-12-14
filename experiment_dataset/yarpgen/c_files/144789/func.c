/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144789
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
    var_19 = ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))) : (min(((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))), (((/* implicit */int) min((var_5), (var_4)))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_18)), ((short)-19546)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18)) && ((_Bool)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */short) arr_2 [i_0]);
        arr_4 [(signed char)11] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65535))));
        var_21 ^= ((/* implicit */unsigned long long int) (-(((min((var_3), (var_3))) & (arr_2 [i_0])))));
    }
    for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((short)32763), ((short)-32762)))), (((unsigned int) 598299371)))))));
        var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_4)) + (84))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_3 = 4; i_3 < 23; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) ((((var_0) ? (var_15) : (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))) >> (((((/* implicit */int) var_6)) - (43801)))));
            arr_13 [i_3] [i_2] = ((/* implicit */short) min((((((/* implicit */int) arr_8 [i_2] [i_3 + 1])) + (((/* implicit */int) min((((/* implicit */short) var_5)), (arr_7 [(unsigned short)19])))))), (((/* implicit */int) var_10))));
        }
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))), (min((((/* implicit */unsigned short) arr_0 [i_2] [i_2])), (var_16)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                for (signed char i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_23 [i_2] [i_4] = ((/* implicit */unsigned short) (short)32764);
                        arr_24 [i_6 - 1] [i_4] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (short)32764)))), (min(((-2147483647 - 1)), (((/* implicit */int) var_7))))))) ? ((((_Bool)1) ? (314460773) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1789)) : (((/* implicit */int) (short)-32749)))))) : (((int) arr_16 [i_6] [i_6] [i_6 + 1] [i_6 - 1]))));
                        arr_25 [i_2 - 3] [i_4] [i_5 - 1] [i_4] [i_4] [i_2 - 3] = var_16;
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_30 [i_2] [i_7] [i_2] = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)16710))));
            var_26 ^= ((/* implicit */unsigned short) var_18);
            var_27 = ((/* implicit */_Bool) (signed char)-114);
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                arr_35 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((short) (unsigned short)229));
                arr_36 [i_8] [i_7] [i_7] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)36658))));
                var_28 -= ((/* implicit */unsigned int) arr_32 [i_8] [i_7] [i_2] [i_2]);
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                {
                    arr_40 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2]))))) - (((/* implicit */int) var_11))))));
                    var_29 *= ((/* implicit */_Bool) ((short) arr_8 [i_8] [11U]));
                    var_30 = ((/* implicit */unsigned short) var_3);
                    arr_41 [i_7] [i_7] = ((/* implicit */unsigned short) (!(((((_Bool) arr_8 [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))));
                }
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_31 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)127))));
                        arr_46 [i_7] [(_Bool)1] [16U] = ((/* implicit */_Bool) (unsigned short)65535);
                    }
                    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */short) ((unsigned short) min((min((((/* implicit */unsigned short) var_4)), ((unsigned short)12556))), (((/* implicit */unsigned short) var_8)))));
                        var_33 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) min((var_16), ((unsigned short)65535)))))));
                    }
                    var_34 = ((unsigned short) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) (unsigned short)27598)) & (((/* implicit */int) var_11))))));
                    var_35 = ((/* implicit */short) ((arr_9 [i_7] [i_8]) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))))))) : ((-(((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))));
                }
                arr_50 [i_7] [i_7] [i_7] = ((/* implicit */short) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned short i_13 = 2; i_13 < 23; i_13 += 1) 
            {
                arr_54 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_1);
                arr_55 [i_7] = ((/* implicit */unsigned short) var_13);
                var_36 = ((/* implicit */short) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3538)))))));
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (_Bool)0))) | (((/* implicit */int) var_6))));
                arr_56 [i_7] [i_7] [i_7] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36658)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                var_38 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) var_17)) ? (arr_2 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) (_Bool)0))))))));
                var_39 = ((/* implicit */unsigned char) (-(var_3)));
                var_40 = ((/* implicit */int) (short)3538);
            }
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            var_41 = ((/* implicit */short) ((int) ((_Bool) var_11)));
            var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            var_43 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (short)-32762))))) >= (((/* implicit */int) (unsigned char)87))))), ((((-(((/* implicit */int) var_1)))) << (((((/* implicit */int) var_2)) - (26184)))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 314460773)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) arr_12 [i_2 + 1]))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                arr_65 [i_2] = ((/* implicit */int) ((_Bool) ((unsigned short) -1417780508)));
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21156)) ? (((/* implicit */int) (short)7724)) : (((/* implicit */int) (short)-32758))));
                /* LoopNest 2 */
                for (unsigned int i_18 = 1; i_18 < 23; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_46 -= ((/* implicit */_Bool) ((unsigned short) arr_51 [(short)23] [i_17 - 1] [i_17 - 1]));
                            arr_71 [i_2 - 1] [i_2 - 1] [(unsigned char)10] [i_18] [i_18] = ((/* implicit */short) arr_16 [i_19] [i_16] [i_19] [i_18]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_20 = 1; i_20 < 23; i_20 += 4) 
            {
                arr_74 [i_2 + 1] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
                arr_75 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_5)))));
                var_47 = (!(((/* implicit */_Bool) ((int) var_18))));
                var_48 = ((/* implicit */unsigned short) ((5655965610706243491ULL) >> (((/* implicit */int) (short)0))));
            }
            for (unsigned char i_21 = 1; i_21 < 21; i_21 += 2) 
            {
                var_49 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | ((+(arr_2 [i_2])))));
                arr_79 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) == (((((/* implicit */_Bool) (short)-11307)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_1)))))));
                arr_80 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) arr_53 [i_2] [i_2] [i_21 + 3] [i_2]);
                arr_81 [i_2] [i_16] [i_16] [i_16] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_4))))))));
                /* LoopNest 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned short i_23 = 2; i_23 < 23; i_23 += 2) 
                    {
                        {
                            arr_87 [i_23 - 2] [i_16] [i_16] [(short)10] [(_Bool)1] [i_16] [i_2] = ((/* implicit */unsigned short) var_11);
                            arr_88 [i_23 - 2] [i_21] [i_16] [i_2] = ((/* implicit */unsigned short) min((((((((/* implicit */int) (short)-7732)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)28242)) - (28237))))), ((-(((/* implicit */int) ((signed char) -395312335)))))));
                            arr_89 [i_2] [i_16] [3LL] [i_22 - 1] [i_22 - 1] [3LL] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_22 - 1] [i_2 - 3]))) / (var_15))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_17)))))))));
                        }
                    } 
                } 
            }
        }
    }
    /* LoopSeq 2 */
    for (short i_24 = 1; i_24 < 15; i_24 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            var_50 = ((/* implicit */unsigned short) var_18);
            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_92 [i_24] [i_24]), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && ((_Bool)0))))))) || ((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65509)), (6806900921311413717LL))))))));
        }
        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
        {
            var_52 = ((/* implicit */unsigned short) (unsigned char)255);
            arr_99 [i_26] [i_26] [i_24] = ((/* implicit */int) (!(arr_48 [i_26 - 1] [16] [16] [i_24] [i_24])));
            var_53 = ((/* implicit */short) ((_Bool) min((var_18), (((/* implicit */signed char) arr_94 [i_26 - 1] [i_26 - 1] [i_26 - 1])))));
            var_54 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_83 [i_24] [i_24] [i_24] [(short)23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_68 [i_24 + 1] [i_24 - 1] [i_24 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_24] [i_24] [i_24]))) : (min((3272768628023714433ULL), (((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1))))))));
        }
        var_55 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_4))))))))));
    }
    for (unsigned short i_27 = 0; i_27 < 19; i_27 += 3) 
    {
        arr_104 [5ULL] [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3072)) ? (((/* implicit */int) arr_58 [(signed char)20] [i_27])) : (((/* implicit */int) ((unsigned char) (!(var_0)))))));
        var_56 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 1666775656)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)28877)))))) ? (((/* implicit */int) (unsigned short)45070)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
        {
            for (unsigned char i_29 = 0; i_29 < 19; i_29 += 2) 
            {
                {
                    var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), (min((arr_62 [i_27] [i_28] [i_29]), (var_2)))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)32758)))))))));
                    var_58 = ((/* implicit */int) ((((((_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))))) != ((+(((/* implicit */int) arr_28 [i_27] [i_28]))))));
                    arr_111 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */signed char) var_8);
                }
            } 
        } 
    }
}
