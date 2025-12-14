/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165776
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
    var_17 = 1331891712U;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) == (arr_4 [i_1 - 2] [i_2 - 1] [i_2 - 1])))), (min((var_7), (((((/* implicit */_Bool) arr_4 [i_0] [10ULL] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) arr_3 [1ULL] [i_1 - 3] [i_2]))))))));
                    var_18 = arr_3 [(unsigned short)13] [i_1] [i_2];
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned long long int) 2963075584U);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        arr_13 [i_3] = (+(((((/* implicit */_Bool) 1797662541033543470ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (514765574U))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        var_20 -= (~(arr_12 [i_4]));
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) arr_14 [i_4 + 1]);
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34969)) ? (((/* implicit */int) arr_15 [i_4 + 1])) : (((/* implicit */int) arr_15 [i_4 - 1]))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned long long int) 0U)))));
        }
        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) 2963075581U);
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1331891710U)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (1331891711U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103)))))) : (18446744073709551615ULL)));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_17 [9U]) : (arr_17 [i_4])));
        }
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((+(4294967295U))) - (((/* implicit */unsigned int) ((arr_25 [i_4 + 1]) ? (((/* implicit */int) arr_14 [7U])) : (((/* implicit */int) var_15))))))))));
            var_27 |= ((/* implicit */unsigned char) (((-(1647017351U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_16 [i_4]))))));
            arr_26 [2U] [i_7] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_4 - 1] [i_7])) ? (((/* implicit */int) arr_23 [i_4 + 1] [i_4 + 1])) : (arr_17 [i_4])));
            var_28 += ((/* implicit */unsigned int) (!((_Bool)1)));
        }
        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                arr_33 [i_4 + 1] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967286U))));
                var_29 ^= ((/* implicit */int) (-(((arr_12 [i_9]) | (arr_30 [i_4] [2U] [12U] [3ULL])))));
            }
            for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                var_30 ^= ((/* implicit */unsigned short) var_8);
                var_31 ^= 3780201703U;
                arr_37 [i_8] [i_10] = ((/* implicit */signed char) (+(arr_31 [i_4 - 1] [i_8 - 3] [i_4 + 1] [i_8 - 3])));
                arr_38 [(_Bool)1] [i_8] [i_10] = ((/* implicit */unsigned int) var_16);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_2)) >= ((~(var_7)))));
            }
            for (unsigned short i_11 = 1; i_11 < 14; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) (-(arr_35 [1ULL] [i_8] [i_11] [i_12])));
                    arr_44 [i_4] [i_4] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (~(arr_27 [i_11] [i_8] [14U])));
                }
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_11 + 2] [i_11 + 2] [0U] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13] [i_14]))) : (((((/* implicit */_Bool) 9615120406701759552ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 1331891700U))))));
                            var_35 = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                arr_52 [i_4 - 1] [i_8 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_4 + 1])) >> (((/* implicit */int) arr_25 [i_4 - 1]))));
                var_36 *= ((/* implicit */signed char) arr_36 [i_4] [i_4] [i_8 - 2] [i_15]);
                arr_53 [i_4] [i_8 - 1] [(unsigned short)15] = ((/* implicit */unsigned long long int) arr_15 [i_4 - 1]);
            }
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                arr_56 [4U] [i_8] [3ULL] = ((/* implicit */unsigned long long int) var_2);
                arr_57 [i_4] [8U] [8U] = ((/* implicit */unsigned short) (~(var_16)));
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0U)) / (3455949373981725482ULL))))));
                var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_22 [(unsigned short)13] [i_17 - 1] [i_8 - 3]) : (((/* implicit */unsigned long long int) arr_48 [i_17] [i_17] [i_17] [i_17] [i_17 - 1] [i_8 + 1]))));
                var_39 -= ((/* implicit */unsigned int) arr_58 [i_4] [i_8]);
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_64 [i_8] [i_8] [i_17] [i_18] [(_Bool)1] [i_4] [i_17] = ((/* implicit */unsigned long long int) var_13);
                            var_40 += ((/* implicit */int) ((unsigned char) arr_34 [i_17] [i_17] [i_17] [i_17 - 1]));
                        }
                    } 
                } 
            }
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
            {
                arr_67 [(short)10] [1ULL] [i_20] [i_20 - 1] = ((/* implicit */unsigned int) 16649081532676008146ULL);
                var_41 = ((/* implicit */unsigned short) (-(arr_21 [i_8 - 1] [i_8] [i_20])));
            }
            var_42 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)32747)))))) != (9615120406701759552ULL)));
        }
        arr_68 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_4 - 1] [i_4])) & (((/* implicit */int) arr_40 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1]))));
    }
}
