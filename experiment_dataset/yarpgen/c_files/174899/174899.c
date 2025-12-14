/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -202;
    var_15 = (((max(var_2, -188))) ? var_11 : ((-37 ? (((min(var_6, var_1)))) : (69 * 17732923532771328))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 69;
        arr_5 [12] = ((((min(-10122, 61))) ? ((192353383 << (179 - 178))) : (arr_2 [20])));
        arr_6 [i_0] = 21083;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [18] [18] = (((1 + -19001) || (var_11 < 162)));
        arr_10 [i_1] [15] = (arr_0 [i_1]);
    }
    #pragma endscop
}
