/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136718
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) (short)-26576)))) - (2046))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */_Bool) ((unsigned int) ((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) 131072)))) / (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_17 -= arr_1 [(signed char)6];
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))))) ^ (((arr_6 [1U] [1U] [1U]) & (arr_6 [i_0] [i_1] [i_2])))));
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_9 [i_1] |= ((4015247548U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-18802))));
                    var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((arr_0 [i_1]) - (((/* implicit */int) arr_3 [i_0])))))))));
                    var_20 ^= max((((/* implicit */short) (!(((/* implicit */_Bool) max((-1047222337202299774LL), (((/* implicit */long long int) 1874064759U)))))))), ((short)13408));
                    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_3] [i_1])))) ? (((/* implicit */int) ((0LL) != (arr_5 [i_3] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
                    arr_10 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_5 [i_3] [i_0])))) - (((unsigned long long int) (-(((/* implicit */int) arr_3 [i_0])))))));
                }
            }
        } 
    } 
}
