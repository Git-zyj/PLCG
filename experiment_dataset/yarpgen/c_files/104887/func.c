/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104887
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_2))))))) > (max((((/* implicit */unsigned long long int) (short)-12124)), (((unsigned long long int) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0 + 1] [(signed char)2] |= (_Bool)1;
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 6; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_13 = (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3])));
                                var_14 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [(signed char)2]))))))))));
                                arr_14 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((4757513734720511419ULL) > (((/* implicit */unsigned long long int) var_0)))))));
                                var_15 ^= ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) var_6)))))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 |= ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_5 = 4; i_5 < 16; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_22 [(signed char)17] |= ((/* implicit */unsigned short) var_10);
                    arr_23 [i_6] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) min((arr_19 [i_5] [i_5 - 1] [i_7]), (arr_19 [i_5 + 1] [i_5 - 3] [i_7]))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(arr_15 [i_5 - 2] [(unsigned char)1])))))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((unsigned int) var_4))))))));
                }
            } 
        } 
        arr_24 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((arr_15 [i_5] [i_5]), (arr_19 [i_5] [(unsigned short)14] [i_5])))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (unsigned char)160))));
    }
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            {
                arr_31 [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((short)32), (arr_17 [(unsigned short)7]))))));
                var_18 -= ((/* implicit */unsigned short) arr_15 [i_9] [i_8]);
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 7; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12 - 1]))))) > (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32))))));
                                var_20 = (-(((/* implicit */int) (_Bool)0)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_8] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */short) arr_20 [i_8] [i_9] [i_9] [i_13]);
                        arr_43 [i_8] [i_9] [i_10] [i_13] [i_10] = ((/* implicit */long long int) var_0);
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_14] [i_14] [i_14]))));
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) (short)-32747)))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2)))))));
                            var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32)) ^ (((/* implicit */int) (signed char)23)))))));
                            arr_50 [i_10] [i_10] = ((/* implicit */int) var_5);
                        }
                        for (unsigned char i_16 = 4; i_16 < 10; i_16 += 3) 
                        {
                            arr_53 [i_8] [i_14] [i_10] [i_14] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_48 [7LL] [7LL] [i_9] [i_10] [i_10] [i_14] [i_16]))));
                            arr_54 [i_8] [i_9] [i_10] [i_16] = ((long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_10])))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            arr_58 [i_10] [i_8] [i_9] [i_10] [i_14] [(unsigned short)1] [i_17] = ((/* implicit */long long int) var_8);
                            var_24 = ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (67553994410557440ULL))))));
                            arr_59 [i_10] [i_10] [i_10] [i_14] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)32747)))))))));
                            var_25 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_18 [i_9] [i_17]))))));
                        }
                        for (short i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_26 += ((((/* implicit */_Bool) arr_19 [i_8] [i_10] [i_10])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_9]))) & (5380918319123686004LL))), ((+(var_9))))));
                            arr_62 [(unsigned short)2] [(unsigned short)2] [i_10] [(unsigned short)2] [(unsigned short)2] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [i_9])), (((var_4) % (((/* implicit */unsigned long long int) 13LL)))))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            arr_65 [7] [i_10] [i_19] [i_19] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(6099781590403544632LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2731936902U)) ? (arr_21 [i_8] [(signed char)16] [i_10] [(signed char)16]) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            arr_66 [i_10] [i_9] [i_10] [(unsigned char)3] [i_19] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_10)) ? (-9223372036854775791LL) : (arr_44 [i_8] [i_9] [i_10]))))) ^ (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (short)16934)) || (((/* implicit */_Bool) var_3))))), (arr_32 [i_19]))))));
                            arr_67 [i_10] [i_10] = ((/* implicit */long long int) 0U);
                            arr_68 [i_8] [i_8] [i_10] [i_14] [i_14] [i_10] [1] = ((/* implicit */unsigned short) (-((-(max((var_10), (var_9)))))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_72 [i_10] [(unsigned char)8] [i_10] [i_14] [i_20] = (-(((/* implicit */int) arr_35 [i_20] [i_10])));
                            arr_73 [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_20] [i_8])) ? (var_10) : (var_10))))))));
                            var_27 = min((((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_8]))))), ((-(-4611686018427387904LL))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            arr_76 [i_10] [(signed char)6] [i_10] [i_10] = ((/* implicit */unsigned short) (~(max((var_10), (var_9)))));
                            var_28 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) arr_37 [(unsigned short)7] [i_10] [(unsigned short)7] [i_14] [i_21]))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)111)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                            arr_77 [i_21] [i_10] [i_8] [i_10] [i_21] [i_9] [i_21] = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) arr_27 [3LL] [i_9] [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)10674))))))));
                        }
                        var_30 -= ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_47 [i_8] [i_9] [i_9] [i_10] [i_10] [i_14]))))));
                        arr_78 [i_8] [i_8] [(unsigned char)5] [i_8] [i_14] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)144))));
                    }
                }
            }
        } 
    } 
}
