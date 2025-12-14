/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_4 [i_1] [9] [8] = ((!(((-1073535219 ? var_3 : 17651848736195570739)))));
            var_16 = (arr_2 [i_0 - 1] [i_0 - 1] [i_1 + 1]);
        }
        var_17 += (!var_1);
        var_18 = ((15382 ? 6 : 794895337513980888));
    }
    var_19 = ((!(((var_7 ? 632701587 : -17651848736195570723)))));
    #pragma endscop
}
