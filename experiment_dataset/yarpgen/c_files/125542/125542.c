/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [19] = (((!var_2) & -1010090623));
        arr_3 [i_0] [i_0] |= (((arr_1 [i_0] [i_0]) ? 229376 : 9223372036854775803));
        var_14 = (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));
    }
    var_15 = var_1;
    #pragma endscop
}
