/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127813
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) ((long long int) arr_2 [i_0] [i_0 + 1]));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_2 [i_0] [i_0])) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_6)))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_16 = ((((/* implicit */long long int) ((int) ((((/* implicit */int) var_7)) > (arr_2 [i_1] [i_1]))))) + (((long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned char) arr_7 [i_1] [i_2])), (arr_8 [i_2] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39682)) ? (-989950319) : (989950293))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) arr_1 [i_3]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned char) (~(((arr_5 [i_4]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))));
                            arr_18 [i_3] [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_1]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((-335630138), (((/* implicit */int) (signed char)27))));
                            arr_23 [i_1] [i_2] [i_6] [i_4] [10U] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [5U] [5U] [i_3])) ? (989950293) : (((/* implicit */int) arr_10 [i_6] [i_4] [i_2] [i_2]))))) ? (arr_11 [i_1] [i_2] [i_3] [i_4]) : (arr_1 [i_1]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_7 = 1; i_7 < 7; i_7 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) arr_21 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1]))) ^ (min((arr_21 [i_1] [i_7] [i_1] [i_7 - 1] [i_1] [i_7]), (arr_21 [i_7 + 1] [i_7] [i_1] [i_1] [i_7] [i_1])))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (signed char i_9 = 4; i_9 < 9; i_9 += 2) 
                {
                    {
                        arr_31 [i_9] [i_7] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 989950292)) ? (-989950299) : (989950318)));
                        var_22 = ((/* implicit */long long int) arr_15 [i_1] [i_7] [i_8]);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            arr_34 [i_10] &= ((/* implicit */unsigned char) ((unsigned int) arr_33 [i_10]));
            var_23 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [5ULL]);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) arr_33 [i_1])) : (989950318)));
        }
        arr_35 [i_1] [i_1] = ((/* implicit */signed char) (short)32765);
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        arr_38 [i_11] [1LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_11] [i_11])) >> (((((/* implicit */int) arr_32 [i_11] [i_11] [i_11])) - (25419)))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_11] [i_11])) ? (((/* implicit */int) arr_26 [i_11] [i_11])) : (((/* implicit */int) arr_26 [i_11] [i_11]))));
        /* LoopNest 2 */
        for (long long int i_12 = 2; i_12 < 8; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((signed char) arr_27 [i_12 + 2] [i_12 + 1])))));
                    var_27 = ((/* implicit */unsigned long long int) var_6);
                    arr_44 [i_11] [i_12] = ((((/* implicit */_Bool) arr_19 [i_11] [i_12 + 1] [i_13] [i_13] [i_12 + 1])) ? (((/* implicit */long long int) (+(var_3)))) : ((-(arr_28 [i_11]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        var_28 ^= ((/* implicit */unsigned char) var_3);
        var_29 *= ((/* implicit */unsigned int) (~(arr_48 [i_14])));
    }
    var_30 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))))), (((((/* implicit */_Bool) ((var_6) << (((var_2) - (4032503900005929473ULL)))))) ? (max((var_14), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        for (short i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            {
                arr_54 [i_15] [i_15] = ((/* implicit */short) arr_1 [i_15]);
                var_31 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_16]))) >= (((unsigned int) arr_2 [i_15] [i_16])))) ? (min((((/* implicit */unsigned long long int) ((signed char) arr_1 [i_15]))), (arr_50 [i_15] [i_15]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_15]))))) ? ((~(arr_1 [i_16]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_15])) && (((/* implicit */_Bool) arr_51 [i_15]))))))))));
            }
        } 
    } 
}
