/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115254
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1176515204U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) - (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_11 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1706529247825408173LL))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_3 = 3; i_3 < 11; i_3 += 1) 
                {
                    var_12 = ((/* implicit */short) ((3684559753U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 3] [i_3])))));
                    arr_11 [i_0] [i_1] [i_1] [0U] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [13U] [i_1] [i_0]));
                    var_13 = ((/* implicit */unsigned char) var_8);
                }
                var_14 *= ((/* implicit */short) ((var_9) << (((arr_10 [i_2 - 3] [i_2 + 3] [i_2 - 3] [i_2 - 3]) - (1096100363U)))));
                var_15 += ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
            }
            for (unsigned short i_4 = 4; i_4 < 11; i_4 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) (_Bool)1);
                var_17 = ((/* implicit */unsigned int) var_0);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_18 -= var_7;
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)123))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 610407536U)))))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) -941144052))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (signed char i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_10 [7] [i_1] [(signed char)0] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)2772))) : (-1414364401901008862LL)));
                            var_21 -= ((/* implicit */int) ((arr_9 [i_8] [i_1] [i_1] [i_7]) <= (var_0)));
                            var_22 += ((/* implicit */_Bool) ((unsigned int) ((var_2) ? (arr_17 [1ULL] [i_7] [i_4] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_4 [i_8] [i_4 - 2])))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [3ULL] = ((/* implicit */unsigned long long int) ((signed char) var_3));
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            }
        }
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_9) : (((/* implicit */unsigned long long int) (~(var_4))))));
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_29 [i_9] [i_9] = ((/* implicit */int) arr_28 [i_9]);
        var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((var_4) >> (((((/* implicit */int) var_8)) + (31697)))))) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    }
}
