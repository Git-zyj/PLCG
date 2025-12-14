/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= -1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [9] [i_0] = ((!(arr_1 [i_0])));
        var_21 = ((!((max((((~(arr_2 [i_0] [8])))), ((-(arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = var_15;
        arr_10 [i_1] [15] &= (~var_2);
    }
    var_22 = var_14;
    var_23 = (max(var_17, 255));
    var_24 = (max(3000187113, (max(var_18, (max(255, 0))))));
    #pragma endscop
}
