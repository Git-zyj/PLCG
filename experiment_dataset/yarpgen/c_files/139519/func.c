/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139519
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((9223371968135299072ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0])) ? (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (288230376151711744LL))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-288230376151711737LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])) : (var_1)))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)26608)) >= (((/* implicit */int) (unsigned char)128)))))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (4294967284U))))))))));
                    var_14 = ((((/* implicit */long long int) (((~(((/* implicit */int) arr_6 [i_0] [i_1])))) & (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))) + ((~(arr_9 [i_1 + 1] [i_1 + 1] [i_2]))));
                }
            } 
        } 
        arr_10 [(unsigned short)4] = (+(((arr_9 [i_0] [i_0] [i_0]) - (arr_9 [15] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    arr_19 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_6 [i_0] [i_3]), (arr_6 [i_0] [i_3]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                    {
                        arr_22 [i_0] [i_4] [i_4] = (((_Bool)1) ? (((/* implicit */unsigned int) ((arr_2 [i_0]) / (arr_2 [i_4])))) : (max((((/* implicit */unsigned int) (short)-30364)), (1023U))));
                        arr_23 [i_4] [i_3] [i_4] [i_5] = ((long long int) var_0);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        arr_26 [i_4] = ((/* implicit */unsigned int) var_0);
                        var_15 = ((/* implicit */signed char) var_3);
                        var_16 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_1)) / (arr_9 [i_0] [i_3] [i_3]))) | (((4503599626846208LL) / (((/* implicit */long long int) arr_21 [i_6] [i_3] [i_3]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -288230376151711745LL)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_0 [5] [5]))))) : (min((((((/* implicit */_Bool) 8298211571111962455LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (288230376151711742LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)13))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        arr_29 [i_4] [i_3] = ((/* implicit */int) (((~(8683840122555235323LL))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_17 = ((/* implicit */long long int) ((max(((-(8298211571111962455LL))), (var_11))) != (((((/* implicit */_Bool) 288230376151711749LL)) ? (arr_13 [21U] [i_3] [21U]) : (135107988821114880LL)))));
                        arr_30 [(unsigned char)13] [i_3] [(unsigned char)13] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 288230376151711744LL)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)130))))), ((+(0LL)))));
                    }
                    var_18 = ((/* implicit */long long int) min((1971258180U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_3] [i_4])) != (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        var_19 |= ((/* implicit */unsigned int) arr_14 [i_0]);
    }
    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                arr_47 [i_8] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((long long int) 288230376151711744LL)))))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_40 [i_8] [5] [i_10])) ? (max((((/* implicit */unsigned long long int) arr_16 [i_10] [i_10] [i_10])), (9223371968135299080ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [i_9] [i_10] [i_8] [i_11] [i_11]))) : (-1LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10)))))))))));
                                var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_8] [i_8])) ? (arr_15 [i_12] [i_11] [i_10] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_8] [i_8])) > (((/* implicit */int) var_6)))))))), (((/* implicit */unsigned long long int) ((((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9]))))) && (((/* implicit */_Bool) arr_20 [i_8] [i_9] [i_10] [i_8] [i_12])))))));
                                arr_48 [i_8] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (((((/* implicit */_Bool) 8683840122555235319LL)) ? (-8298211571111962455LL) : ((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                    arr_49 [i_9] [i_10] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_7 [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9]))) : (9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [i_8]))))), (((((/* implicit */_Bool) 4294967295U)) ? (arr_27 [i_8] [i_8] [i_9] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10] [i_9] [i_8] [i_8] [i_8])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (arr_39 [i_8] [i_13]))))) > (((((/* implicit */_Bool) var_8)) ? (arr_58 [i_13] [i_13]) : (var_11))))))));
                                var_23 = ((/* implicit */signed char) (+(((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) var_4)) ? (8683840122555235296LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (8683840122555235280LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) arr_20 [i_17] [(signed char)0] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                        var_25 = -8683840122555235314LL;
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)85)) << (((arr_13 [i_13] [i_14] [i_17]) - (527984795049606733LL)))))) ? (((/* implicit */long long int) ((var_1) | (((/* implicit */int) (short)-32160))))) : (((max((((/* implicit */long long int) (unsigned short)34331)), (4640929099002884844LL))) << (((((-1LL) + (9LL))) - (8LL)))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        var_27 = ((/* implicit */int) 1ULL);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_1 [i_8]))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) arr_60 [i_8] [(signed char)1] [i_8] [i_8] [i_8] [i_8]);
    }
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
    {
        arr_68 [i_19] [i_19] = ((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)65516)))), (((/* implicit */int) arr_6 [i_19] [i_19]))));
        var_30 = ((/* implicit */int) min((4430094702732842395LL), (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)12))))) ^ ((~(-288230376151711745LL)))))));
        var_31 = ((((((/* implicit */_Bool) (short)-7744)) ? (((/* implicit */int) arr_5 [i_19] [i_19])) : (((/* implicit */int) arr_5 [i_19] [i_19])))) * ((-(((/* implicit */int) arr_5 [i_19] [i_19])))));
    }
    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        arr_73 [i_20] = ((((((/* implicit */int) max((((/* implicit */short) (signed char)-35)), ((short)-5076)))) + (((/* implicit */int) arr_4 [i_20])))) & (((((/* implicit */int) ((-288230376151711730LL) != (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) | (((/* implicit */int) ((arr_8 [i_20] [i_20] [i_20]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18)))))))));
        arr_74 [i_20] = ((/* implicit */short) min((2147483641), (((int) arr_35 [i_20] [i_20] [i_20]))));
    }
    var_32 = ((/* implicit */unsigned long long int) (-(max((var_11), (((/* implicit */long long int) max((var_10), (var_9))))))));
    var_33 = ((((/* implicit */_Bool) -3319601870598524984LL)) ? (5022972482042680367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
}
