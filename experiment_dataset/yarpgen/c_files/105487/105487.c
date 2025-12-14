/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((min(var_3, 63458)))) || ((((min(1006632960, -5629894000950744056))) && var_5))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_12 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = 67;
                    arr_8 [i_1] [i_1] [i_2] = 5629894000950744048;
                    var_14 = (min(var_14, (228 - 9205357638345293824)));
                }
            }
        }
        arr_9 [i_0 - 3] = (45041 ^ 105);
    }
    var_15 = 0;
    #pragma endscop
}
