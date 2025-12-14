/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1452590750 ? var_2 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [9] = (((~(arr_3 [13] [i_1]))));
                var_21 = -var_8;
            }
        }
    }
    #pragma endscop
}
