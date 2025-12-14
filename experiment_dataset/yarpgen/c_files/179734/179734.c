/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_1 || ((min(((51864 ? 50 : var_3)), (var_15 && var_16)))))))));
    var_19 = (min(var_19, ((min(((var_6 << (var_14 + 63))), var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (var_4 >> (var_0 - 16323010567206398805));
                    arr_8 [5] [i_2] [i_2] [12] = var_16;
                }
            }
        }
        arr_9 [2] = 0;
        var_21 = 0;
    }
    #pragma endscop
}
