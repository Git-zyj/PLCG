/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123432
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
    var_10 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])) >= (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 3] [i_0 - 3])))));
        var_11 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_2 [i_0] [i_0 - 2])))))) - (((((/* implicit */_Bool) -5LL)) ? (-5LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))));
        var_12 = max((((/* implicit */long long int) max((arr_0 [i_0 + 2] [i_0 + 2]), (var_1)))), (min((((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 + 2])), (((((/* implicit */_Bool) -8263029319612468054LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-4LL))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (((~(847977744))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)106)) >= (((/* implicit */int) var_9)))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) 1007120713))));
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_7 [8ULL])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned char)127)));
        var_14 = -1143387316;
        /* LoopSeq 4 */
        for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((-1143387320) & (((/* implicit */int) (unsigned char)122)))))));
                arr_13 [i_2] [10ULL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2])) < (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1143387320) : (-742054216)))));
            }
            var_16 = ((signed char) arr_7 [i_2 + 2]);
        }
        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 3) 
        {
            var_17 = (-(((/* implicit */int) (signed char)7)));
            var_18 |= ((/* implicit */long long int) ((signed char) arr_15 [i_4 + 2] [8] [i_4 - 3]));
        }
        for (signed char i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)123)) * (((/* implicit */int) (unsigned char)13))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((signed char) (unsigned char)133));
                            var_21 ^= ((/* implicit */int) (+((~(-2230717847764475986LL)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_9 = 1; i_9 < 10; i_9 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1] [i_1])) == (((/* implicit */int) (unsigned short)20027))));
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_9 - 1] [i_9 - 1]))));
            var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_1])))) || (((/* implicit */_Bool) ((((-1608635262356910634LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_6)) + (113))) - (46))))))));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 4; i_10 < 9; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_25 = ((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)42))) : (5LL));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), ((~(arr_32 [i_10] [i_10 + 1])))));
                    }
                    var_27 = ((/* implicit */unsigned char) (unsigned short)1703);
                    var_28 = ((long long int) var_4);
                }
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                {
                    var_29 = (~(arr_27 [i_9 + 1] [i_10] [i_9 + 1] [i_9]));
                    var_30 = ((/* implicit */signed char) ((arr_15 [i_10] [i_10] [i_10 - 4]) | (arr_15 [i_10 - 4] [i_10] [i_10 - 4])));
                    var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446708889337462784ULL)) ? (arr_20 [(unsigned short)8]) : (arr_20 [2ULL])));
                }
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51206)) && (((/* implicit */_Bool) var_6))));
                    var_33 += ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_10 - 4] [0ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_10 - 4] [(unsigned char)10]))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        arr_51 [i_10] [i_14] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10 - 1] [i_10] [8LL] [i_15 - 1]))) | ((~(576459652791795712LL)))));
                        var_35 = ((int) arr_24 [i_15 - 1] [i_15] [i_10]);
                        arr_52 [i_1] [i_9] [i_1] [6ULL] [i_15] [i_10] [i_1] = ((/* implicit */int) (~(arr_27 [i_10 - 1] [i_10] [i_14] [i_10 - 4])));
                    }
                }
                var_36 = arr_36 [i_10] [i_9] [i_10];
            }
            for (int i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                arr_55 [i_1] [i_1] = ((/* implicit */int) ((-550297421540922744LL) / (((/* implicit */long long int) arr_46 [i_1] [i_9] [(short)2] [i_9] [i_9 + 1]))));
                var_37 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_16 - 1] [(signed char)4] [i_16 + 1])) << (((((/* implicit */int) arr_22 [i_16] [8LL] [i_16 + 1])) - (72)))));
            }
        }
    }
    var_38 = ((/* implicit */signed char) ((short) var_7));
}
