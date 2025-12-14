/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_11 ? -1869658133 : var_1))) || (((0 ? var_12 : var_19)))))) < (~-2492));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (max(2852688082, 8228808013270236883));
                    var_21 = (~-16);
                }
            }
        }
    }
    var_22 = ((975611914673466597 ? -1 : 65));
    var_23 = var_11;
    #pragma endscop
}
