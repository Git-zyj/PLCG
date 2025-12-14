/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175681
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_0] [(signed char)5] [i_1] = ((/* implicit */short) (-(max((-8856594387157615772LL), (((/* implicit */long long int) 2147483646))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) arr_8 [i_0] [i_1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_0] [i_1]))));
                            var_21 = ((/* implicit */short) min(((~(((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) (short)-32763)) + (32780))))))), (((/* implicit */int) (short)-32763))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */short) (-(((/* implicit */int) (short)-16384))));
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_15 [i_4] [6ULL]);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1066588128)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)-16379))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                {
                    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) arr_21 [i_4] [i_5] [14LL] [i_6])))) ^ (((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) var_4))))));
                        var_27 = ((/* implicit */signed char) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) / (arr_22 [11] [i_4])))))) ? (arr_23 [i_6 - 1] [12LL] [13U] [i_8] [i_4]) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_15 [i_5] [(unsigned char)11])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 2] [i_6 + 2])))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7467)) - (((((/* implicit */int) var_17)) + (((/* implicit */int) var_15))))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((arr_21 [(_Bool)1] [(unsigned short)4] [i_6] [i_8]), (arr_15 [i_4] [i_4])))) - (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (2712079832U)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16375))) : ((-(arr_22 [11LL] [i_4])))))));
                        arr_27 [i_4] [i_4] [16LL] [(signed char)0] [(short)3] [(signed char)0] = ((/* implicit */_Bool) max(((-((~(arr_22 [i_8] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_20 [i_4] [i_5])) : (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_16 [i_4])))))))));
                        var_30 = ((/* implicit */short) ((unsigned char) max((arr_24 [i_6 - 1]), (arr_24 [i_6 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 21; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            {
                                arr_33 [i_4] [i_5] [i_4] [i_4] [i_9] [i_9] = ((/* implicit */_Bool) ((max((max((arr_22 [i_4] [i_4]), (((/* implicit */long long int) arr_21 [i_4] [i_6] [i_9] [i_9])))), (arr_24 [i_6 + 2]))) << (((((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_4] [(signed char)14])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_5)))) - (99)))));
                                var_31 = ((/* implicit */short) (+(var_7)));
                                var_32 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (short)16383)) <= (((/* implicit */int) (unsigned char)65)))));
                            }
                        } 
                    } 
                    arr_34 [i_4] [i_4] [i_6 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_6])) & (((/* implicit */int) arr_20 [i_4] [(unsigned short)0])))) >> (((((var_2) ? (var_7) : (((/* implicit */int) arr_28 [i_4] [i_5] [i_6 + 2] [0] [i_6])))) + (25767)))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_30 [i_4] [i_4] [i_6] [(short)10] [i_5])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_29 [17LL] [i_4] [17LL] [i_6])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_17)))))) : (max((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (short)-16384))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) var_18))))))));
                }
            } 
        } 
        arr_35 [14ULL] &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (arr_23 [i_4] [i_4] [i_4] [i_4] [(signed char)5]))) + (max((((/* implicit */unsigned long long int) var_19)), (arr_23 [i_4] [6LL] [i_4] [i_4] [i_4])))));
    }
}
