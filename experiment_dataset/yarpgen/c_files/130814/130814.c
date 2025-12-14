/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_15 = (min(var_15, ((((((((!(arr_5 [i_2] [i_1] [10] [i_0]))))) + (16124721494724918356 & -1343782050154354819))) + (-545695233260445149 ^ 3524688008205347134)))));
                    var_16 = (min(var_16, (((var_2 ? 1 : (((((var_2 ? (arr_4 [i_0]) : (arr_0 [8] [i_1])))) ? ((1 ? var_10 : -24267)) : 1)))))));
                    var_17 = (max(var_17, (((-((-1495742365 ? ((var_1 % (arr_3 [i_0] [i_0] [8]))) : 4170463748)))))));
                }
                var_18 = max((((arr_1 [i_0]) ? var_4 : (arr_6 [i_1 + 2] [i_1 + 1] [i_0] [i_0]))), 48373);
            }
        }
    }
    var_19 = ((~(1 && 94)));
    #pragma endscop
}
