/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((arr_6 [i_0] [14] [14] [i_2]) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : ((((!(arr_2 [i_1])))))))));
                    var_18 = (min(var_18, var_15));
                    var_19 -= ((!(!769858072)));
                }
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
