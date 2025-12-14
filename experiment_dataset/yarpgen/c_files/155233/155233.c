/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (var_5 > var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] = (((((-(max(var_8, var_10))))) % (arr_0 [i_1])));
                var_15 = (max(var_15, var_0));
                arr_6 [18] [i_1] = var_0;
            }
        }
    }
    var_16 = (max((((var_7 * ((min(var_11, var_3)))))), (max(var_10, var_9))));
    var_17 = var_13;
    #pragma endscop
}
