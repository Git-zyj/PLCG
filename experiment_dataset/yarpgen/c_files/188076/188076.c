/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!3691590114305579680);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 |= ((!(~96)));
        arr_3 [i_0] = (~186);
        arr_4 [9] = (((arr_2 [i_0]) & (((arr_1 [i_0]) ? 30986 : (arr_2 [18])))));
    }
    #pragma endscop
}
