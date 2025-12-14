/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135767
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [18U] [18U]))) + (0ULL)));
        var_11 += ((/* implicit */_Bool) ((((-3880648075059042648LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (1)))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [5ULL] = ((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2])) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                                var_14 = arr_13 [i_0 + 2] [i_1 - 2] [11] [i_3] [i_4] [i_0 + 1];
                                arr_15 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1 - 4] [(short)10] [i_1] [i_1] [(short)10] [i_1 - 3])) / (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 4] [i_1 - 2] [i_1 - 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1 - 3] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1 - 4] [i_2] [i_5] [1U] [i_1 - 4])) || ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32759)) ^ (var_0)))) : (var_8)));
                                var_15 = ((/* implicit */short) arr_6 [(unsigned short)4] [i_1 - 2] [i_1 - 2] [i_1 - 2]);
                                arr_23 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-40)) | (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (int i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) 2774134006U);
                                arr_30 [i_8] = ((/* implicit */unsigned short) var_2);
                                arr_31 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8] [i_7] [i_2] [i_2] [i_0 + 3] [i_0 + 3])) << (((((/* implicit */int) (unsigned short)61937)) - (61937)))))) ? (arr_20 [i_0] [i_1] [i_1] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(short)7])))));
                                arr_32 [i_0] [i_1 - 3] [i_2] [i_0] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_4))) >> (((((/* implicit */int) arr_10 [i_8 - 2] [i_8 - 2] [i_8] [i_8] [i_8] [i_1])) - (43)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_0] [i_0 + 2] [i_0] [i_0]))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)3615))))) ^ (arr_29 [i_0] [i_0] [i_2] [i_2] [i_2] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? ((((_Bool)0) ? (((/* implicit */int) (short)-11406)) : (1455318045))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)32650)) : (((/* implicit */int) arr_8 [i_0] [i_1]))))));
                        var_20 -= ((/* implicit */long long int) var_0);
                        arr_37 [i_0] [i_0 + 3] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-94)) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        arr_41 [i_2] = ((/* implicit */short) (signed char)51);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_44 [i_0 + 2] [i_1] [i_2] [i_11] [i_12] [i_0 + 3] [i_12] = ((/* implicit */signed char) (+(((var_5) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))));
                            arr_45 [i_0 + 1] [i_0 + 1] [i_2] [i_11] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)36))));
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) + ((~(((/* implicit */int) var_4))))));
                        }
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            arr_48 [i_0] [i_1 - 2] [i_1] [i_2] [i_2] [i_11] [i_2] = ((/* implicit */signed char) (+(18446744073709551615ULL)));
                            var_22 = ((/* implicit */_Bool) arr_26 [i_13] [i_11] [i_0] [i_0]);
                            arr_49 [i_13] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) var_1))));
                            var_23 = ((/* implicit */short) (!(var_6)));
                            var_24 = ((/* implicit */signed char) (unsigned short)61920);
                        }
                    }
                }
            } 
        } 
    }
    var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3)) ? (min(((-(((/* implicit */int) (signed char)-25)))), (((/* implicit */int) var_1)))) : ((+(((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)61921)) : (((/* implicit */int) (signed char)31))))))));
    var_26 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
    {
        var_27 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((arr_50 [(signed char)22]), ((signed char)(-127 - 1))))) ? (((((/* implicit */int) (unsigned short)36990)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) min(((short)-32764), ((short)0))))))));
        arr_53 [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((int) (signed char)-1))) | (6ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_14])))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (signed char i_18 = 4; i_18 < 24; i_18 += 4) 
                        {
                            {
                                arr_63 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (unsigned short)3);
                                arr_64 [i_14] [i_15] [i_14] [i_17] [i_18] = ((/* implicit */unsigned long long int) 2091530379719243249LL);
                            }
                        } 
                    } 
                    var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_57 [i_14] [i_15] [i_16])))))))) / (((max((((/* implicit */unsigned long long int) arr_61 [i_14] [i_14] [i_15] [i_14])), (14587804612064612857ULL))) ^ (min((((/* implicit */unsigned long long int) (short)-19935)), (0ULL))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) 18446744073709551605ULL))));
            var_30 = ((/* implicit */short) var_8);
        }
        arr_68 [19U] [19U] = ((/* implicit */long long int) (-(((((/* implicit */int) min(((signed char)-18), (((/* implicit */signed char) arr_60 [i_14] [i_14] [i_14] [i_14]))))) / (((/* implicit */int) min(((signed char)-37), (arr_54 [i_14] [i_14] [i_14]))))))));
    }
    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
    {
        arr_71 [i_20] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_50 [i_20]), ((signed char)0)))), ((-(1380737626873211339ULL)))));
        var_31 = ((/* implicit */short) (signed char)-2);
    }
}
