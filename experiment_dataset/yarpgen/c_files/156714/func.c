/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156714
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] &= ((/* implicit */int) arr_3 [(unsigned short)11] [(unsigned short)11]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 18010000462970880LL))))), (18010000462970880LL)));
                    var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 1])) || (((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1]))))), (arr_6 [i_0 - 4])))), (max((min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1])), (18010000462970880LL))), (((/* implicit */long long int) var_4))))));
                }
                for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((long long int) (-(arr_1 [i_0 - 2] [i_3 + 1]))));
                                var_13 = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_14 &= ((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_3 + 1] [i_3 - 1]);
                    var_15 &= ((/* implicit */short) var_7);
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned long long int) (-(((arr_1 [i_0 - 2] [i_0 - 1]) / (arr_1 [i_0 - 2] [i_0 - 1])))));
                        arr_18 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) arr_17 [i_3] [i_0] [i_3 + 1] [i_3] [i_3] [10ULL])), (arr_7 [i_0] [i_3 - 1] [i_3 + 1])))));
                        var_17 -= ((/* implicit */unsigned short) (((-(18010000462970880LL))) - (min((((/* implicit */long long int) 2147479552)), ((-9223372036854775807LL - 1LL))))));
                    }
                    for (int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            var_18 |= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_24 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1])))), (((/* implicit */int) ((short) 18010000462970880LL)))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_8] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [(unsigned char)0] [i_0 - 1] [i_3 - 1] [i_8 - 2])) && (((/* implicit */_Bool) arr_12 [i_8 - 2] [i_3 + 1] [i_3 + 1] [i_8]))))), ((~(arr_12 [i_8 - 1] [i_3 + 1] [i_3 + 1] [i_1])))));
                            var_19 = (-9223372036854775807LL - 1LL);
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 3; i_9 < 22; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((-18010000462970864LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))));
                            arr_29 [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_7] [i_0 - 3]);
                            var_21 = ((/* implicit */long long int) var_2);
                            arr_30 [(short)14] [i_0] [(signed char)22] [i_7] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 18010000462970863LL))));
                        }
                        for (long long int i_10 = 4; i_10 < 22; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) var_4);
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_6 [i_0]), ((unsigned char)221)))), (0ULL)));
                            var_23 |= ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_8)))), ((+(((/* implicit */int) var_2))))))), (min((-18010000462970864LL), (-18010000462970864LL)))));
                            var_24 -= ((/* implicit */unsigned long long int) var_7);
                            var_25 = ((/* implicit */_Bool) min((min((arr_9 [i_0 - 4]), (arr_10 [i_3 - 1]))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)-2431))))));
                        }
                        arr_36 [i_0] [i_0] = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_26 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_0)))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) (+(arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_0])));
                        var_28 = ((/* implicit */unsigned int) arr_0 [i_0 - 4]);
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_11] [i_3 - 1] [i_3] [i_11] [i_1]))));
                    }
                    arr_39 [i_0] [i_1] [i_0] = ((/* implicit */short) var_9);
                }
                arr_40 [i_0] [i_0] = ((/* implicit */short) (signed char)-39);
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_12] [i_12] [i_12 - 1] [(unsigned short)15])))))));
        arr_44 [i_12] [i_12 - 1] |= ((/* implicit */_Bool) arr_33 [(short)10] [(short)10]);
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_14] [i_12])))))));
                    var_33 += ((/* implicit */unsigned char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_14 + 1] [i_12] [i_14 - 1] [i_14 - 2] [i_12 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            {
                                arr_56 [i_12] [i_13] [i_13] [i_15] [i_16] [i_15] [i_12] = ((/* implicit */_Bool) arr_27 [i_15]);
                                var_34 = ((unsigned char) arr_1 [i_12] [i_12 - 1]);
                                var_35 -= ((/* implicit */unsigned short) (~(18329559537481599704ULL)));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)225))));
                    var_37 = ((/* implicit */signed char) -6810687138026693032LL);
                }
            } 
        } 
        var_38 |= ((/* implicit */short) ((arr_19 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) | (arr_19 [i_12 - 1] [i_12] [i_12 + 1] [i_12 - 1] [i_12])));
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)112))));
    }
    for (unsigned short i_17 = 1; i_17 < 12; i_17 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_40 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (signed char)28)), (12ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            arr_62 [i_17] [14ULL] |= ((/* implicit */int) min((arr_61 [i_17 - 1]), (arr_54 [i_18] [9U] [i_17 - 1] [i_17 + 3] [i_17])));
            var_41 = arr_28 [(signed char)20];
        }
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_19 [i_17 + 1] [i_17] [i_17 + 1] [i_17 - 1] [i_17])), (min((((/* implicit */long long int) arr_45 [i_17 - 1] [i_17 + 2] [i_17])), (min((((/* implicit */long long int) var_0)), (-18010000462970847LL)))))));
    }
    var_42 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (max((1893322826265312696ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) min((((unsigned int) (short)-2431)), (((/* implicit */unsigned int) (short)8674))))));
    var_43 = ((/* implicit */unsigned int) var_7);
}
