/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(((63 ? 0 : 404990810), (((10 ? 51 : var_5)))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [3] = (arr_2 [i_0]);
        var_12 = ((-67 / -7358886580739112233) * 1);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_13 = (arr_0 [i_1]);
        var_14 = (max(var_14, ((-1 ? 2527 : 62995))));
    }
    var_15 ^= var_4;
    var_16 = 2700019567;
    #pragma endscop
}
