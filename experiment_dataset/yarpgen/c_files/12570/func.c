/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12570
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
    var_13 += var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) 4LL);
                        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)26480)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551614ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */short) arr_4 [i_2] [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) arr_11 [i_0]);
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2] [i_5 - 1])) ? (arr_15 [i_2] [(unsigned short)4] [i_0] [i_5] [i_5] [i_5] [i_1]) : (arr_15 [i_0 + 1] [i_2 + 2] [i_0] [i_3 - 3] [i_2 + 2] [i_3] [i_0])));
                            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_17 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_10);
                            var_20 = ((/* implicit */unsigned long long int) ((((144115188075855616LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26461))))) << (((long long int) var_2))));
                            arr_18 [(short)4] [(unsigned char)16] [(unsigned char)8] [i_2 + 2] [i_3] [i_3] [(unsigned char)8] |= ((/* implicit */unsigned int) arr_10 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3]);
                        }
                        var_21 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2] [i_3 - 2]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned int) (unsigned char)30);
            arr_23 [i_0] [i_0] [(signed char)0] &= ((/* implicit */_Bool) arr_19 [i_0] [i_0] [16LL]);
        }
        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_30 [i_8] [i_0] [(unsigned char)3] = ((/* implicit */signed char) var_7);
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_19 [i_0] [i_7] [i_10]))));
                            var_24 -= ((/* implicit */_Bool) ((-4LL) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_27 [i_0 - 2] [(unsigned char)15]))) < (((/* implicit */int) ((((/* implicit */int) arr_31 [i_0] [i_10] [i_7] [i_0] [i_10] [i_10])) < (((/* implicit */int) var_3)))))));
                            var_26 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) max((var_27), (((((-4LL) - (-4LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    arr_40 [3] [i_0] [i_0] [i_0 - 2] = ((/* implicit */int) var_12);
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((12348607652301863856ULL) & (((/* implicit */unsigned long long int) -3LL)))))));
                    arr_41 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_4 [i_7 + 1] [i_0]));
                }
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_43 [i_0] [i_12] [i_8] [i_0] [i_12] [i_0]))) >= (((/* implicit */unsigned long long int) arr_19 [i_7] [(_Bool)1] [i_0]))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_0 - 3])) ? (((/* implicit */int) arr_9 [i_0] [i_12] [i_0 - 1])) : (arr_19 [i_7 + 3] [i_7 + 3] [i_0])));
                    arr_44 [i_0] [i_7] [i_0] [i_12] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_7] [i_0]))));
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39055)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_42 [i_0] [i_0] [i_0 - 1] [6U])))))));
                    var_32 = ((((/* implicit */long long int) 4294967295U)) >= (((arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] [10]) % (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                }
            }
            for (unsigned char i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                var_33 = ((/* implicit */int) 4294967295U);
                var_34 = (!(((arr_14 [i_0] [i_0] [(unsigned char)5] [i_0 - 2] [i_0] [i_0] [i_0]) < (((/* implicit */int) var_2)))));
                arr_48 [i_0] [i_0] [7] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_13 - 1] [i_0] [i_13])) != (((/* implicit */int) (unsigned char)2))));
            }
            var_35 = ((/* implicit */unsigned long long int) -1LL);
        }
        for (unsigned int i_14 = 2; i_14 < 15; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    {
                        var_36 |= ((/* implicit */int) (+(0ULL)));
                        arr_56 [i_16] [i_0] [(unsigned char)1] [i_14] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_11)) : (arr_25 [i_16])));
                    }
                } 
            } 
            arr_57 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */int) (unsigned short)26480)))))));
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_11))));
        }
        var_38 = ((/* implicit */int) max((var_38), (var_1)));
        /* LoopSeq 4 */
        for (int i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            arr_61 [i_0] = ((/* implicit */signed char) ((_Bool) (unsigned short)39055));
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (-(arr_25 [i_0 - 3]))))));
        }
        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_72 [i_21] [i_0] [i_19] [(_Bool)0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0]))));
                            var_40 = ((((/* implicit */_Bool) arr_55 [i_0] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 - 3])) ? (arr_55 [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39055))));
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                arr_73 [i_19] [i_19] &= ((((/* implicit */_Bool) arr_46 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 11LL)))))) : (arr_0 [i_19]));
            }
            for (unsigned char i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
            {
                var_42 = ((/* implicit */short) arr_4 [i_0 + 2] [i_0]);
                arr_77 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
                arr_78 [17U] [i_0] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_0] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6277))) : (arr_67 [i_0] [i_0 - 2])));
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 18; i_23 += 3) 
            {
                for (unsigned int i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    {
                        arr_83 [i_0] [i_18] [i_23] [i_0] = ((/* implicit */short) ((arr_67 [i_0 + 1] [i_0 - 2]) & (arr_67 [i_0 + 1] [i_0 - 2])));
                        var_43 ^= ((/* implicit */unsigned short) arr_66 [i_18] [i_18] [i_18] [i_0]);
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (-(((/* implicit */int) var_5)))))));
                        arr_84 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (arr_53 [i_0 + 1] [i_0 - 2] [i_0 - 1]) : (var_4)));
                    }
                } 
            } 
            var_45 = ((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((int) arr_1 [i_0]))) : (((long long int) var_2)));
            /* LoopNest 3 */
            for (unsigned int i_25 = 0; i_25 < 18; i_25 += 4) 
            {
                for (unsigned char i_26 = 1; i_26 < 17; i_26 += 4) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */long long int) var_8);
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_38 [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0] [i_0 + 2]) : (arr_38 [(short)17] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 1])));
                        }
                    } 
                } 
            } 
            arr_94 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_0])) % (arr_50 [i_0 - 3])));
        }
        for (long long int i_28 = 0; i_28 < 18; i_28 += 4) 
        {
            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_89 [i_0] [13ULL] [i_0] [7ULL] [(short)7])) | (((/* implicit */int) ((2886082376U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            /* LoopSeq 1 */
            for (long long int i_29 = 0; i_29 < 18; i_29 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_30 = 2; i_30 < 16; i_30 += 4) 
                {
                    var_49 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_28] [i_29] [i_29] [i_30 - 1]))));
                    arr_104 [(_Bool)1] [(_Bool)1] [i_0] [i_30] = ((/* implicit */unsigned char) ((arr_68 [7U] [i_0] [i_0] [(unsigned char)6] [7U] [i_30 + 2] [(_Bool)1]) ? (((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0] [i_30] [i_30 - 1] [i_30])) : (((/* implicit */int) arr_68 [i_28] [i_0] [(unsigned char)7] [i_30 + 1] [(unsigned char)0] [i_30 + 2] [i_30]))));
                    var_50 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_0] [i_28] [i_30 + 1] [i_30] [i_28] [i_0 - 3])) / (((/* implicit */int) arr_33 [i_30] [i_28] [i_30 - 1] [i_30] [10LL] [i_0 + 1]))));
                    var_51 ^= ((/* implicit */unsigned short) ((arr_76 [i_0] [i_28] [i_30] [i_30]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_8)));
                }
                for (int i_31 = 1; i_31 < 16; i_31 += 1) 
                {
                    var_52 -= ((/* implicit */long long int) 3896171118U);
                    var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) var_9))));
                    arr_109 [i_0] = ((/* implicit */short) ((int) var_2));
                }
                var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
            }
            arr_110 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
            arr_111 [i_0] [i_0] = ((/* implicit */short) ((var_8) / (arr_98 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2])));
            var_55 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_88 [i_28] [i_28] [i_28] [i_28] [i_28] [i_0 - 1]));
        }
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_56 = ((/* implicit */unsigned long long int) var_8);
            var_57 = (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-16058))))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])));
        }
    }
    var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) var_1))));
}
