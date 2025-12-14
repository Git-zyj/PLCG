/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15084
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned long long int) var_7);
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (_Bool)0))));
                        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)59183)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */unsigned int) ((arr_13 [i_3] [i_3] [i_3 - 1] [i_3]) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 1] [i_2])) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 + 2] [i_1]))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1] [i_2] [i_1]))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (unsigned char i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_29 [i_8] [i_8] [i_7] [i_6] [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) arr_17 [i_1])))));
                                arr_30 [i_1] [i_5] [i_6] [i_7] [i_7] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_1] [i_5] [i_6 - 1])) ? (arr_21 [i_1] [i_5] [i_6 + 2]) : (arr_21 [i_1] [i_5] [i_6 - 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((arr_13 [i_6 + 2] [i_6] [i_6 + 2] [i_6]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 2]))));
                        arr_34 [i_1] [i_5] [i_6] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_5] [i_1])) << (((arr_12 [i_1] [i_6] [i_6]) - (1920303519700389008LL))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_5] [i_6] [i_6] [i_9]))) - (arr_27 [i_1] [i_5] [i_6] [i_9] [i_5]))) - (1473130976U)))));
                        var_22 |= ((((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_5] [i_6]))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (3838506931446025575LL));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_23 *= ((/* implicit */unsigned long long int) ((short) arr_28 [i_1] [i_1] [i_6] [i_6 + 1] [i_5]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_24 ^= ((/* implicit */signed char) (-(arr_39 [i_6 + 1] [i_1] [i_1])));
                            var_25 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                            arr_42 [i_6] [i_5] [i_11] [i_6] = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1]);
                        }
                    }
                    for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_45 [i_12] [i_6] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) (-(112250850)));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_6] [i_6] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)12049))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 9; i_14 += 3) 
                        {
                            {
                                arr_50 [i_1] [i_5] [i_6] [i_13] [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_14] [i_13] [i_5])) + (var_0)));
                                var_27 ^= ((((/* implicit */_Bool) var_0)) ? (arr_27 [i_14] [i_14] [i_14] [i_14 + 2] [i_14 + 1]) : (2969637608U));
                                arr_51 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) arr_11 [i_13] [i_14] [i_6] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_48 [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((int) ((arr_35 [i_1] [i_5] [i_5] [i_1] [i_1] [i_5]) - (((/* implicit */unsigned int) arr_15 [i_6] [i_6]))))))));
                }
            } 
        } 
        arr_52 [i_1] = ((/* implicit */int) var_8);
    }
    var_29 = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
}
