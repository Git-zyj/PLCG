/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((!((((0 == -1699474721) / ((790627649 ? (arr_5 [i_0] [i_2] [i_2] [i_0]) : 1)))))));
                    var_16 = 1;
                }
            }
        }
    }
    var_17 = ((((((var_3 ? var_5 : var_10)) >= (((var_0 ? 1 : 1))))) ? (((-((0 ? 58 : 1648325131))))) : var_4));
    var_18 = var_5;
    #pragma endscop
}
