/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-1 * 107) ? var_13 : (110 > -94)))) ? ((0 ? 0 : 6)) : var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (1984 + 18446744073709551615);
        var_16 = (((((arr_0 [i_0]) <= 10710981041001252055)) || (((2613545933 ? -110 : 6)))));
    }
    var_17 = var_5;
    #pragma endscop
}
