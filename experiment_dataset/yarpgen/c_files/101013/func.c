/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101013
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
    var_13 ^= ((/* implicit */signed char) var_12);
    var_14 = ((/* implicit */short) var_1);
    var_15 = ((((/* implicit */_Bool) ((long long int) var_3))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11)))) ? (var_11) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) / (190514874515828066LL))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_0);
        var_16 = ((/* implicit */signed char) 2047U);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) 9223372036854775792LL);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */short) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [2LL] [i_3] [i_3 - 2]);
                                arr_18 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_16 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]))) | (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) (short)-22805))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) (short)25763)) << (((5902636078356525533LL) - (5902636078356525520LL)))));
                                var_19 = ((/* implicit */unsigned int) (unsigned char)0);
                                var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_3 - 1]);
                }
            } 
        } 
        arr_19 [i_1] [i_1 + 1] = ((/* implicit */long long int) ((arr_13 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [(signed char)7]) > (arr_13 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_20 [i_1] = arr_5 [i_1];
    }
}
