/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 7393043164337554547;
    var_17 -= var_0;
    var_18 = 7393043164337554546;
    var_19 = ((((!((min(7393043164337554547, var_15))))) ? (min(((var_15 ? var_4 : var_2)), var_13)) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [4] = var_3;
                    arr_10 [i_0] [i_0] [i_0] [20] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
