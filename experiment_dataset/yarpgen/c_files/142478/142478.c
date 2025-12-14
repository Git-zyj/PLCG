/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [12] = var_10;
                arr_7 [8] [16] = var_4;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [3] [i_3] [0] = var_2;
                    arr_17 [8] = var_10;
                }
            }
        }
    }
    var_13 = (!4611685743549480960);
    var_14 = -var_0;
    #pragma endscop
}
