/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135880
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
    var_20 = ((/* implicit */unsigned long long int) (short)32704);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] = (unsigned char)255;
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_22 = max((((/* implicit */unsigned long long int) ((((var_14) / (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) != (arr_7 [i_2] [i_1] [i_0])))), (((unsigned long long int) arr_1 [i_1])));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)5])) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (arr_7 [i_2] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_2]))) : (((/* implicit */int) ((4ULL) != (((/* implicit */unsigned long long int) var_2)))))));
                    var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_24 ^= ((((((int) 18446744073709551615ULL)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_0] [i_0] [i_3])) - (101))));
                        var_25 = ((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_3]);
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((((int) var_9)) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_13))))))) : ((~(((/* implicit */int) var_15))))));
        arr_17 [(short)11] = ((/* implicit */unsigned long long int) arr_0 [i_4]);
        var_26 = ((unsigned long long int) (~((+(((/* implicit */int) var_5))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] [(unsigned char)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551601ULL))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (int i_7 = 4; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */int) arr_18 [i_6]);
                        var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (arr_2 [i_8]) : (((/* implicit */int) arr_8 [i_5]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                {
                    arr_38 [i_9] [i_11] &= ((/* implicit */unsigned char) arr_0 [i_9]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_47 [i_9] [i_10] [i_11] = (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_29 [i_13])) ? (18446744073709551613ULL) : (arr_7 [i_11] [i_11] [i_11]))))));
                                arr_48 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_44 [i_10] [i_12 - 1] [i_12 - 1] [i_10]), (arr_44 [i_10] [i_12 + 2] [i_12 + 1] [i_10])))), (((int) 9U))));
                                var_29 |= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */int) (unsigned char)7);
        var_31 = (((-(((/* implicit */int) arr_23 [i_9] [i_9])))) | (((((/* implicit */_Bool) var_14)) ? (arr_2 [i_9]) : (arr_2 [i_9]))));
        arr_49 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
    }
}
