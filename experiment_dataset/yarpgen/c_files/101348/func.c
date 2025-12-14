/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101348
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (+(0U))))));
                                var_12 += ((/* implicit */unsigned int) min((min((arr_4 [i_0] [i_0] [(unsigned char)24]), (((/* implicit */unsigned short) ((_Bool) 0ULL))))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_3 - 2] [(unsigned short)17] [i_0]))) < (min((arr_2 [(unsigned short)24] [(unsigned short)24]), (((/* implicit */long long int) arr_0 [i_2])))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */int) min((18446744073709551602ULL), (18446744073709551606ULL)));
                var_14 = ((/* implicit */long long int) max((var_14), ((+(((((/* implicit */_Bool) -8037120597612438993LL)) ? (2305702271725338624LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [4LL] [22U] [i_0] [i_0] [4LL])))))))));
                arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_5 [i_0] [(unsigned char)3])))) << (((((unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [12] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [6LL] [i_1] [6LL] [6LL] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)12] [i_0] [i_0]))))) - (190U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 8; i_8 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(var_9))))));
                        arr_23 [i_5] [i_8] [i_6] [i_8 - 1] = ((/* implicit */int) ((((arr_1 [i_8]) > (arr_1 [i_8]))) ? (((/* implicit */unsigned long long int) 8388608U)) : (11ULL)));
                        /* LoopSeq 4 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1862743)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (4U))), (((/* implicit */unsigned int) arr_7 [i_6] [i_6] [i_8]))))) > (var_0)));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) arr_13 [i_9])) : (8388611U))) - (((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_8])) ? (arr_1 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) & ((~(arr_8 [i_5] [i_5 - 1])))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_7] [i_8] [i_7])))))));
                            arr_27 [i_6] [i_8 - 1] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 - 1])) ? (-3356551969508815858LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1])))))) ? (((/* implicit */int) min((arr_15 [i_5 - 1] [i_5 - 1]), (arr_15 [i_5 - 1] [i_5 - 1])))) : ((+(((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1]))))));
                            var_19 -= ((/* implicit */short) (+(max((2U), (((/* implicit */unsigned int) (_Bool)1))))));
                        }
                        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            arr_30 [i_10] [(unsigned char)6] [i_10] [i_7] [i_8] [i_5 - 1] = ((/* implicit */_Bool) var_2);
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (137438953472LL)))) ? (((/* implicit */unsigned long long int) ((arr_17 [i_5] [i_7] [i_8]) * (arr_1 [i_10])))) : (max((arr_22 [i_10]), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))))) ? (((((/* implicit */_Bool) (unsigned short)27252)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_29 [i_5] [i_6] [i_5] [i_6] [i_10]))))) : (min((5ULL), (var_3))))) : (((((/* implicit */_Bool) ((arr_17 [i_7] [i_7] [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0))))))))));
                        }
                        for (int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) arr_26 [i_5 - 1] [i_6] [i_7] [i_6]);
                            arr_33 [i_8] [i_6] [i_5] [i_6] [i_8] = var_10;
                            var_22 = ((/* implicit */int) arr_17 [i_8] [i_8] [i_8 + 2]);
                        }
                        for (int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (unsigned short)10727);
                            var_24 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)251)) : (-593401862))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)10740)) > (((/* implicit */int) (_Bool)1)))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212)))))), (min((5ULL), (((/* implicit */unsigned long long int) arr_16 [i_7] [i_6] [i_7]))))))) || (((/* implicit */_Bool) var_5))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned char) min((2147483647), (((/* implicit */int) (unsigned short)53745))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (long long int i_13 = 3; i_13 < 11; i_13 += 4) 
                    {
                        var_27 = ((((/* implicit */long long int) 2147483647)) > (562812514467840LL));
                        arr_38 [i_5] [i_13] [i_13] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [20LL] [i_6] [20LL] [i_13 - 3] [i_13 + 1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_14 [i_6] [i_13 - 2]))))), (max((arr_10 [i_6] [i_13] [i_7] [i_13 - 1] [i_13] [i_6]), (((/* implicit */long long int) var_2)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            var_28 = (i_13 % 2 == zero) ? (((/* implicit */short) (((-(arr_22 [i_13]))) << (((((/* implicit */int) ((unsigned short) arr_7 [i_13] [i_7] [i_13]))) - (116)))))) : (((/* implicit */short) (((-(arr_22 [i_13]))) << (((((((/* implicit */int) ((unsigned short) arr_7 [i_13] [i_7] [i_13]))) - (116))) + (160))))));
                            var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_29 [i_6] [i_7] [i_7] [i_13 + 1] [i_7])), (0ULL)));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 2; i_15 < 11; i_15 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (~(arr_10 [i_5] [i_13] [i_5] [i_5 - 1] [i_5 - 1] [i_5])));
                            arr_44 [i_5] [i_6] [i_13] [i_13] [i_13] [i_15] = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_5 - 1] [i_6] [i_7] [i_7] [i_15 - 2])) != (((/* implicit */int) arr_37 [i_5 - 1] [i_13] [i_7] [i_13])))) ? (((/* implicit */int) ((unsigned short) 2147483647))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)88)))))));
                            arr_45 [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) arr_17 [i_5] [i_5] [i_15 - 1])));
                            arr_46 [i_5] [i_13] [i_7] [i_13] [i_5] [i_15] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) << (((-2147483642) + (2147483645)))));
                        }
                        for (unsigned short i_16 = 2; i_16 < 11; i_16 += 1) /* same iter space */
                        {
                            arr_49 [i_5 - 1] [i_13] [i_5 - 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned short) ((int) (-(arr_10 [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_16 - 2] [i_16 - 2]))));
                            var_31 = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_16 - 2] [i_13 - 3]))))) & (arr_36 [i_13]));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((((unsigned long long int) 0U)) ^ (((/* implicit */unsigned long long int) arr_5 [i_13 - 2] [i_16 - 1])))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_5] [i_6] [(short)9] [i_13 + 1] [(unsigned short)7] [i_6])) & (((/* implicit */int) arr_42 [i_5] [i_6] [i_7] [i_13 - 2] [i_13 - 2] [i_16]))))))))));
                        }
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5])))))) <= (min((-6693322633592207046LL), (arr_5 [i_5 - 1] [i_6])))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        arr_52 [8U] [i_6] [(short)8] [8U] = ((/* implicit */long long int) ((signed char) min((max((((/* implicit */unsigned long long int) var_10)), (var_0))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)182))))))));
                        arr_53 [i_17] [i_7] [i_6] [i_6] [i_5 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1048575U))))), (arr_22 [i_17])));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (~(max((((((/* implicit */int) arr_9 [i_5 - 1] [i_5] [i_7] [i_5 - 1] [1U])) / (((/* implicit */int) arr_51 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_17])) || (((/* implicit */_Bool) arr_7 [(unsigned short)0] [(unsigned short)0] [i_17]))))))))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        arr_56 [i_5 - 1] [i_5 - 1] [i_7] [i_6] = var_10;
                        var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_47 [i_5 - 1] [i_6] [i_7])), (arr_4 [i_5 - 1] [i_5 - 1] [18U]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((2147483641) << (((/* implicit */int) (short)0)))))));
                            arr_60 [i_6] [i_18] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_5] [i_6] [i_5] [i_6] [(unsigned short)17]))))) || (arr_37 [i_5] [i_6] [i_7] [i_5 - 1]))) ? (max(((+(arr_16 [i_5 - 1] [i_5 - 1] [i_19]))), (((/* implicit */long long int) arr_26 [i_6] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) : ((~(arr_8 [i_5 - 1] [i_5 - 1])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_20 = 1; i_20 < 10; i_20 += 1) 
                        {
                            arr_63 [i_18] [i_18] [i_7] [i_18] [(_Bool)1] [i_18] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : ((-9223372036854775807LL - 1LL))));
                            arr_64 [i_20] [(unsigned char)10] [i_7] [(_Bool)1] [i_20] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)13)))));
                            arr_65 [i_20] [i_20] [i_7] [i_20] [i_5] = ((/* implicit */unsigned short) arr_21 [i_18] [i_18] [i_18] [i_18] [i_18] [i_20]);
                            var_37 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) 2383027150U)) & (var_1))));
                            var_38 = ((/* implicit */unsigned char) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [(signed char)1] [i_18] [i_20]))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            arr_68 [i_5] [i_5] [i_5] [i_7] [i_18] [i_18] [i_5] = ((/* implicit */int) arr_59 [i_6]);
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) max((((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_9 [i_21] [i_5] [i_7] [i_6] [i_5]))))))), (((/* implicit */int) ((((/* implicit */long long int) (~(2147483642)))) <= (arr_35 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5])))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_40 &= ((/* implicit */_Bool) var_6);
}
