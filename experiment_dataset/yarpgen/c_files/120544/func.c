/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120544
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
    var_12 = ((/* implicit */short) var_9);
    var_13 = ((/* implicit */unsigned int) var_0);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> ((((-(((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)61874)))))) - (61859)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) var_6)));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)80))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [0LL] [i_0])) > (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (var_0)))))));
                        var_18 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3])))))) || (((/* implicit */_Bool) (unsigned char)255))));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_0 [i_2 + 2])) || (((/* implicit */_Bool) (short)15694))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_0] [i_2 - 1] [i_2 - 1] [(unsigned short)7] [(unsigned char)3] [i_0])))) % ((~(var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (arr_5 [i_0] [i_1] [i_1])))) <= (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_2 + 2] [i_2] [i_1] [9LL]))) : (var_0)))))))));
                        var_19 *= ((/* implicit */unsigned char) max(((((~(arr_0 [3ULL]))) | (((arr_7 [i_4] [i_1] [i_2] [i_4]) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */int) ((signed char) var_1))), (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(short)4])) : (((/* implicit */int) (unsigned short)27750))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        var_20 *= ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        var_21 = ((/* implicit */unsigned int) -3543094469283941086LL);
                        arr_17 [i_5] [i_1] [i_5] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (3977527198813546664LL)))));
                        var_22 = ((/* implicit */signed char) (-((-(arr_0 [i_0])))));
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) arr_4 [i_0] [i_0]))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_11 [3U] [i_1] [i_2] [i_2] [i_5] [(unsigned char)1]))) & (arr_9 [i_0] [i_1])))));
                    }
                }
            } 
        } 
    } 
}
