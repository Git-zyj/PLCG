/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (3221225472 ? var_3 : 15360);
        arr_4 [i_0] = ((var_9 % (arr_0 [i_0])));
        arr_5 [i_0] [5] = (max(var_13, (((arr_1 [i_0]) % 37619))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 += ((-(((max(var_0, var_11)) * var_11))));
                    var_20 = (max(var_20, var_16));
                    var_21 = var_16;
                }
            }
        }
    }
    var_22 = ((((((var_6 ? var_3 : var_15)))) % (min(var_14, (var_6 + var_0)))));
    #pragma endscop
}
