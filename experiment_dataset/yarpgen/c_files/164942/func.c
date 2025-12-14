/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164942
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
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)113)) == (((/* implicit */int) (unsigned char)122))))))));
    var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) var_5)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_0 [i_0])));
            var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) -460880294)) : (18446744073709551609ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                var_18 = ((/* implicit */int) ((11ULL) > (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) var_4);
                var_19 = ((/* implicit */_Bool) min((var_19), (((((var_9) & (((/* implicit */int) (unsigned char)0)))) != (((/* implicit */int) arr_6 [i_0] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_20 ^= ((int) arr_0 [i_1]);
                var_21 = ((/* implicit */unsigned char) var_0);
            }
            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_22 = ((/* implicit */short) ((_Bool) ((int) (!(((/* implicit */_Bool) var_10))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) -1001727845))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) arr_0 [6U]);
        /* LoopSeq 2 */
        for (int i_6 = 3; i_6 < 19; i_6 += 1) /* same iter space */
        {
            var_25 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)1)) << (((((/* implicit */int) (signed char)-109)) + (110)))));
            arr_19 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                arr_22 [i_6] [13] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */_Bool) 965674485);
                var_27 &= ((/* implicit */unsigned short) ((var_11) < (((/* implicit */unsigned long long int) arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 4; i_8 < 17; i_8 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((short) (~(-1)))))));
                    arr_26 [(_Bool)0] [i_6] [i_7] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-1))));
                    var_29 += ((/* implicit */signed char) ((((/* implicit */int) arr_3 [(unsigned short)16])) <= (134217720)));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_30 = arr_16 [i_6] [i_6];
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_31 ^= ((/* implicit */unsigned char) (-(arr_21 [i_5 - 1] [(signed char)14] [i_5])));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_11 [i_6 + 2] [i_5 + 1]))));
                    }
                    arr_32 [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (-(arr_5 [19] [i_7] [i_6])));
                    var_33 = ((/* implicit */unsigned short) ((int) var_4));
                }
                arr_33 [i_6] [i_6] [i_6 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_3)))))));
            }
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                arr_38 [i_6] [19] = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_6 - 3] [i_6 - 1] [i_6] [i_6 + 2])) < (((/* implicit */int) arr_34 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(_Bool)1] [i_6 - 1] [i_11])))));
                        }
                    } 
                } 
                var_36 -= ((/* implicit */long long int) ((int) var_8));
            }
            arr_45 [i_6] = ((/* implicit */signed char) ((((arr_44 [i_5] [i_6] [i_6] [i_6] [i_6]) == (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) & (var_1))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_41 [i_6 + 2] [2])))))));
        }
        for (int i_14 = 3; i_14 < 19; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                arr_52 [i_5] [i_5] [i_15] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_15] [(unsigned char)18]))) : (arr_10 [i_15] [12] [12])))) || (((/* implicit */_Bool) arr_44 [i_5] [i_14] [(signed char)12] [i_15] [(signed char)12]))));
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((arr_12 [i_15] [i_15]) > (arr_12 [i_15] [i_15]))))));
                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((signed char) var_11)))));
                arr_53 [i_5] [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-32763))));
            }
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
            {
                arr_57 [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_14 - 2] [i_5 + 3] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_14 - 2] [i_5 + 3] [i_5])));
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 20; i_17 += 3) 
                {
                    for (signed char i_18 = 4; i_18 < 19; i_18 += 4) 
                    {
                        {
                            arr_63 [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_39 [i_16] [i_14]);
                            var_39 = ((/* implicit */short) (~(var_1)));
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_16] [i_17] [i_16]))) | (268435454U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [(signed char)15])))));
                        }
                    } 
                } 
            }
            for (short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            arr_71 [i_5 + 1] [16ULL] [i_14] [16ULL] [i_20] [i_20] = ((/* implicit */unsigned char) (-(arr_68 [4] [i_5 + 1] [i_19] [i_20] [i_14 + 2])));
                            var_41 += ((/* implicit */unsigned short) (-(arr_54 [i_19] [(short)16] [i_5 + 3])));
                            var_42 = (((-(arr_55 [i_5 - 1] [16] [i_19]))) == (((/* implicit */int) ((unsigned short) (_Bool)1))));
                            var_43 = ((/* implicit */unsigned long long int) (unsigned short)49152);
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned long long int) arr_20 [i_19] [i_14 + 1]);
            }
            var_45 = ((/* implicit */long long int) ((short) ((unsigned long long int) var_3)));
        }
        var_46 = ((/* implicit */short) ((unsigned int) var_5));
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_74 [i_22] [i_5] &= ((/* implicit */unsigned short) 511);
            var_47 = ((/* implicit */int) 268435455U);
        }
        for (unsigned char i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_24 = 1; i_24 < 19; i_24 += 4) 
            {
                var_48 = ((/* implicit */short) var_5);
                /* LoopSeq 2 */
                for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 4) 
                {
                    var_49 = ((/* implicit */short) var_9);
                    var_50 ^= ((/* implicit */unsigned char) var_0);
                }
                for (unsigned char i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    var_51 = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                    var_52 = ((/* implicit */unsigned short) ((_Bool) var_10));
                    var_53 = (+(((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (_Bool)1)))));
                    var_54 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)0));
                }
                var_55 = ((/* implicit */unsigned short) 6ULL);
                var_56 = ((int) arr_61 [i_5] [(signed char)11] [i_24] [i_5] [(unsigned short)4]);
                var_57 &= ((/* implicit */unsigned long long int) var_9);
            }
            var_58 *= ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
            var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (4026531842U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_88 [i_5 + 2]))))) == (((4026531841U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))))))))));
        }
    }
    for (unsigned char i_27 = 1; i_27 < 18; i_27 += 1) /* same iter space */
    {
        arr_92 [i_27] = ((/* implicit */unsigned short) max((((unsigned char) 18446744073709551615ULL)), (((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) var_10)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_28 = 2; i_28 < 20; i_28 += 3) /* same iter space */
        {
            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4026531841U)) | (16135547581574258749ULL))))));
            var_61 = ((/* implicit */unsigned char) 2147483647);
        }
        for (unsigned char i_29 = 2; i_29 < 20; i_29 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) ((min((arr_10 [i_27 + 3] [i_27 - 1] [i_29 - 1]), (((/* implicit */long long int) arr_29 [i_29 - 1] [(_Bool)1] [(_Bool)1] [i_27 + 2])))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_29 - 2] [(unsigned short)6] [(unsigned short)6] [i_27 + 3]))))))))));
                var_63 = arr_67 [i_27];
                var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) (((-(var_7))) > (((/* implicit */int) arr_31 [i_27 + 3] [i_29] [i_30] [(short)16] [i_30] [i_30])))))));
                var_65 = ((/* implicit */unsigned short) max((var_65), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
            }
            for (signed char i_31 = 3; i_31 < 18; i_31 += 4) 
            {
                var_66 |= (~((~(((/* implicit */int) arr_97 [i_27 + 2])))));
                var_67 = ((/* implicit */int) (((+(15ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1) != (max((2147483647), (((/* implicit */int) var_0))))))))));
            }
            var_68 = ((/* implicit */int) (((-(max((2147483647), (-1))))) == (((((/* implicit */int) ((((/* implicit */int) (signed char)-59)) != (((/* implicit */int) (unsigned char)0))))) >> ((((~(268435454U))) - (4026531812U)))))));
            var_69 = ((/* implicit */unsigned int) (_Bool)1);
        }
    }
}
