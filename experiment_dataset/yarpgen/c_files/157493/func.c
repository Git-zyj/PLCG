/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157493
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (-((~(8388607U)))));
                    arr_7 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((int) arr_4 [i_0 + 1] [i_1 - 1] [i_2 - 1]))));
                    var_16 = ((/* implicit */long long int) var_14);
                }
            } 
        } 
    } 
    var_17 = ((int) max((((/* implicit */unsigned int) max(((signed char)79), (((/* implicit */signed char) var_14))))), ((-(209042834U)))));
    var_18 = ((/* implicit */int) var_12);
    var_19 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 2])) ? (arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 2]) : (((/* implicit */long long int) arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 1])))) - (((/* implicit */long long int) var_8)))))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_20 [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) min(((unsigned short)13514), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-34)))))));
                                arr_21 [i_3] [i_4 - 2] [i_4 - 1] [i_5] [i_6] [i_6] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (arr_5 [i_5 - 1] [i_6 - 1] [i_5 - 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((unsigned int) var_4))));
                                arr_22 [i_7] [i_6] [i_5] [i_4 + 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_5] [i_4 - 2] [i_4 - 2] [i_6]) ? (((/* implicit */int) arr_8 [i_4 - 1])) : (((/* implicit */int) arr_17 [i_3] [i_4 - 1] [i_5 - 1] [i_5 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10934417167934604737ULL))))) : (((/* implicit */int) arr_8 [i_4 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_14 [i_3] [i_3])) >> (((((arr_16 [i_5] [i_3]) - (var_1))) - (2628894038U)))))));
                                arr_27 [i_9] = ((/* implicit */int) ((unsigned int) (unsigned char)13));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)99))));
                                var_24 = ((/* implicit */unsigned char) (-(0LL)));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_43 [i_12] [i_12] = (+((~(arr_37 [i_3] [i_4] [i_12] [i_14]))));
                                var_25 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                    arr_44 [i_12] [i_12] [i_3] = ((signed char) ((((/* implicit */_Bool) ((unsigned int) arr_41 [i_3] [i_3] [i_3] [i_3] [i_3]))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 9; i_16 += 2) 
                        {
                            {
                                arr_50 [i_3] [i_12] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_7))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((long long int) max((((/* implicit */long long int) arr_13 [i_16] [i_12 - 1] [i_4 - 2] [i_3])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_49 [i_3] [i_3] [i_12] [i_12] [i_3] [i_12])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 3; i_17 < 11; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_52 [i_12 - 1] [i_17 - 3])) - (((/* implicit */int) arr_52 [i_3] [i_17])))) % (((/* implicit */int) ((unsigned char) var_6)))));
                                var_28 = ((/* implicit */unsigned int) (+(max((max((arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_25 [i_18] [i_17] [i_12] [i_4 + 2] [i_3]))))));
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((int) min((((/* implicit */long long int) ((signed char) var_11))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) % (-3793896755565334467LL)))))))));
                                arr_56 [i_3] [i_12] [i_3] [i_17 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_12] [i_4 + 2]))) <= (7512326905774946878ULL)))))) >> (((((/* implicit */int) max((arr_19 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) arr_40 [i_3] [i_4 + 2] [i_12 - 1]))))) - (65444)))));
                            }
                        } 
                    } 
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_10))));
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 2; i_20 < 9; i_20 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_20] [i_20] [i_20 + 1] [i_20 + 3])) ? (arr_23 [i_19] [i_19 - 1] [i_20 - 1] [i_19 - 1]) : (arr_23 [i_4] [i_19] [i_20 + 2] [i_19])))) ? (((/* implicit */int) max((arr_32 [i_4] [i_4] [i_20 + 3] [i_20 - 1] [i_20] [i_20] [i_4]), (arr_32 [i_4] [i_4] [i_20 + 3] [i_4] [i_20] [i_20] [i_20])))) : (max((((/* implicit */int) arr_32 [i_3] [i_3] [i_20 - 2] [i_3] [i_3] [i_20] [i_20 + 2])), (arr_23 [i_19] [i_20 + 2] [i_20 + 1] [i_20 + 1])))));
                        arr_61 [i_3] [i_4] [i_3] [i_3] &= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */signed char) ((_Bool) var_5))), ((signed char)-5))));
                        /* LoopSeq 2 */
                        for (unsigned int i_21 = 1; i_21 < 11; i_21 += 3) 
                        {
                            arr_64 [i_19] [i_19] [i_19 - 1] [i_19] [i_4] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) && ((!(((/* implicit */_Bool) (signed char)-34)))))) ? (((arr_16 [i_20] [i_4]) + ((~(arr_5 [i_3] [i_4 - 2] [i_19 - 1] [i_20 - 2]))))) : (((/* implicit */unsigned int) (~(-1573724849))))));
                            var_33 = ((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_3] [i_4 - 2] [i_19] [i_4 - 2] [i_21]))));
                            arr_65 [i_3] [i_19 - 1] [i_19] [i_3] = ((/* implicit */unsigned long long int) (signed char)-34);
                            var_34 = arr_15 [i_3];
                            var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(var_1)))))) || ((_Bool)1)));
                        }
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            arr_68 [i_3] [i_4] [i_19 - 1] [i_19] [i_20 - 2] [i_22] [i_4] = ((int) -6522557638800286071LL);
                            var_36 ^= ((((arr_1 [i_20]) + (9223372036854775807LL))) >> (((arr_1 [i_3]) + (7385609579769897658LL))));
                            var_37 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_3] [i_4 + 2]))));
                            var_38 = ((/* implicit */short) arr_34 [i_19] [i_20 + 3] [i_22]);
                            var_39 -= ((/* implicit */long long int) var_11);
                        }
                        var_40 = ((/* implicit */short) arr_25 [i_20] [i_4] [i_4] [i_4] [i_3]);
                    }
                    for (unsigned int i_23 = 2; i_23 < 9; i_23 += 2) /* same iter space */
                    {
                        arr_71 [i_19] [i_19] [i_4] [i_19] = 2623458302U;
                        var_41 += ((/* implicit */int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_33 [i_23] [i_19 - 1] [i_4] [i_3])) ? (arr_4 [i_3] [i_3] [i_3]) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_35 [i_19]))))), (((((/* implicit */_Bool) arr_13 [i_23] [i_19 - 1] [i_4] [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3] [i_4]))))) : ((+(arr_1 [i_3])))))));
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) max(((-(arr_55 [i_4 - 2] [i_19 - 1] [i_23 - 1] [i_23 - 2]))), (min((arr_55 [i_4 - 2] [i_19 - 1] [i_23 - 1] [i_23 - 2]), (arr_55 [i_4 - 2] [i_19 - 1] [i_23 - 1] [i_23 - 2]))))))));
                        var_43 = var_5;
                        arr_72 [i_3] [i_19] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 147372804U)))));
                    }
                }
            }
        } 
    } 
}
