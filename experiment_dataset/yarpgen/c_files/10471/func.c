/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10471
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
    var_13 = ((/* implicit */short) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) ((_Bool) (+(var_6))))) - (1)))));
    var_14 &= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_0] [i_1] [i_2] [i_1]));
                    var_15 = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_1 + 1] [i_0 + 3]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3]))));
                            var_17 -= ((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_4] [i_4]);
                            arr_15 [i_4] [i_3] [i_3] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_4 + 2])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2]))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_20 [i_0 + 2] [i_0] [6U] [i_1] [i_0] [20U] [i_0] = ((/* implicit */unsigned long long int) ((arr_11 [i_1] [i_1 - 1] [i_2] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (short)16)))));
                            var_18 -= ((/* implicit */unsigned int) var_5);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            arr_25 [i_0 + 3] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned long long int) var_7);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_1 + 1])) ? (arr_12 [i_0] [i_1] [i_1] [(short)5] [i_1 - 1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
                        }
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_0] [i_0 + 1]))) == (arr_14 [i_3] [i_0 - 1] [i_3] [i_0] [i_1 - 1]))))));
                    }
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) arr_5 [20U] [i_0] [20U])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)8))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7 + 1]))));
        arr_29 [i_7] [i_7] = ((/* implicit */signed char) var_12);
    }
    /* vectorizable */
    for (short i_8 = 1; i_8 < 8; i_8 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_8 - 1] [i_8 + 1] [i_8 + 2]))));
        var_23 = ((/* implicit */signed char) arr_10 [i_8] [i_8 - 1] [i_8]);
    }
    var_24 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 15; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        {
                            arr_42 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_10] [4ULL]))) : (arr_19 [i_9] [i_9] [i_9]))) : (((unsigned long long int) arr_28 [i_11] [i_11])))), (arr_35 [i_10])));
                            arr_43 [i_9] [i_10] [i_9] [i_12] = ((/* implicit */unsigned long long int) var_0);
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            {
                                arr_52 [i_9] [i_10] [i_13] [i_14] [i_9] [i_15] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_23 [i_9] [i_10] [i_9] [i_14] [i_15])) ? (arr_12 [i_14] [i_14] [0LL] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_15] [(short)3] [i_9] [i_9]))))), (1009068206U)))));
                                var_26 = ((/* implicit */_Bool) ((short) max((((/* implicit */int) max((var_2), (((/* implicit */short) var_0))))), (((((/* implicit */int) arr_40 [i_10] [i_9] [i_14] [i_15])) - (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((arr_6 [i_9] [12ULL] [12ULL] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                var_28 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
