/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = (max(var_21, ((((var_7 + var_1) << ((((var_5 ? 3615361458 : 679605816)) - 3615361421)))))));
    var_22 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 = ((!(((51075 ? 2492652281 : -7496377003176911413)))));
                    arr_9 [i_0] [i_1] [i_2] = (min((arr_1 [i_0]), (min(3477678525736013772, var_8))));
                }
            }
        }
    }
    #pragma endscop
}
