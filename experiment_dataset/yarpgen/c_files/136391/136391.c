/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [2] [i_1] [i_2] [i_3] = max((min(var_9, var_11)), -1242563072);
                        var_18 = (((((((arr_4 [i_0]) ? var_0 : var_16))) ? var_3 : var_13)) * (1242563072 / -1242563072));
                    }
                    var_19 = (-(min(((-1242563072 ? var_5 : var_4)), var_15)));
                }
            }
        }
    }
    #pragma endscop
}
