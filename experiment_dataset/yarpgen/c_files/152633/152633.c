/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (!-23242);

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = ((!(arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (((arr_1 [i_0 + 2]) > (arr_1 [i_0 + 2])));
            var_20 = var_4;
        }
        arr_6 [i_0] = arr_1 [i_0 - 2];
        var_21 = (!9065556737681129127);
    }
    #pragma endscop
}
