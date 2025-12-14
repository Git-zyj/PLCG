/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -8654181082879687149;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 += var_12;
                    arr_8 [i_0] [i_1] = ((((var_11 / (arr_5 [i_1] [i_1] [i_1]))) <= -var_11));
                    var_17 -= var_4;
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = (((((-981367215 ? (max(1666669684, var_4)) : (((-1142893323 ? var_12 : var_12)))))) / (min(24509, -3184378166267749770))));
    var_20 = 8654181082879687151;
    #pragma endscop
}
