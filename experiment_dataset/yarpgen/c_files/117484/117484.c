/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (min(15, var_7));
                arr_5 [i_1] [i_1] [i_1] = var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_18 = ((~((-640465279 ? var_9 : var_3))));
                arr_11 [i_2 + 2] [i_3] = ((min(var_9, var_0)));
                var_19 = min(192, 45);
            }
        }
    }
    var_20 &= var_5;
    #pragma endscop
}
