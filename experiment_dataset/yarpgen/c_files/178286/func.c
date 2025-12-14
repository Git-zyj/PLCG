/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178286
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_4))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ^ (arr_0 [i_0])));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_17 &= ((((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0] [i_2] [i_2]) : (arr_8 [i_0] [i_2] [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            var_18 -= ((/* implicit */unsigned long long int) arr_3 [i_2] [i_0]);
            var_19 = ((/* implicit */short) arr_7 [i_0]);
        }
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_5);
            var_21 = ((/* implicit */short) (+((-(var_0)))));
            var_22 = ((/* implicit */unsigned int) arr_4 [i_0] [i_3 - 1]);
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((2610412887U) - (2610412886U)))))) : (arr_1 [i_0])));
        }
        var_24 = (~(((var_0) ^ (arr_8 [8U] [i_0] [4U]))));
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_4]) : (((/* implicit */int) var_6))));
        arr_14 [i_4] [8] = ((/* implicit */unsigned long long int) ((var_11) != (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [(_Bool)1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_15 [0ULL]))))) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5 + 1])))) <= (((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            arr_22 [i_6] = ((/* implicit */unsigned int) arr_17 [i_5 - 1] [i_5 - 1]);
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_8 = 4; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    var_27 -= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_26 [i_5] [i_7] [i_8])) + (((/* implicit */int) arr_26 [i_5] [i_6] [i_5]))))));
                    var_28 -= ((/* implicit */short) arr_19 [i_6]);
                }
                /* vectorizable */
                for (long long int i_9 = 4; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */_Bool) var_8);
                    arr_32 [i_9] [i_9 - 1] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_7])) ? (((/* implicit */int) arr_30 [i_7] [i_6] [i_7] [i_9 - 4] [i_7] [i_7])) : (((/* implicit */int) arr_26 [i_9] [i_6] [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_9] [i_5 - 1])) ? (((/* implicit */int) arr_30 [i_5] [(_Bool)1] [i_7] [i_9] [(_Bool)1] [i_7])) : (((/* implicit */int) arr_28 [i_6] [i_9 - 2]))))) : (((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_7])) ? (arr_24 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [6U] [i_6])))))));
                    var_30 -= ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_5 + 1] [13ULL] [i_6] [i_5 + 1] [i_7] [(unsigned short)2]))) <= ((+(arr_31 [i_5] [i_6]))));
                }
                /* vectorizable */
                for (long long int i_10 = 4; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) arr_16 [i_5]);
                        var_32 -= ((/* implicit */unsigned int) var_9);
                    }
                    var_33 = ((/* implicit */_Bool) var_6);
                }
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    arr_39 [i_5 + 1] [12ULL] [i_6] = ((/* implicit */short) arr_31 [i_7] [i_12]);
                    arr_40 [(_Bool)1] [i_5] [i_5] [i_5] [(short)15] [i_12] = arr_33 [i_5 - 1];
                    var_34 = (~(((arr_23 [i_5] [i_5] [12U]) | (((/* implicit */unsigned long long int) arr_36 [i_5] [i_5 - 1] [(unsigned short)12] [i_5 - 1] [i_5])))));
                    arr_41 [i_5] = var_5;
                }
                arr_42 [12U] [i_6] [i_7] = ((/* implicit */int) arr_21 [i_5 + 1] [i_7] [i_7]);
                var_35 = ((/* implicit */long long int) var_14);
            }
        }
    }
}
