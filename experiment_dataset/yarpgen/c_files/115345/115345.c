/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (~var_9)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = (max(var_9, ((max(-6785316427415972568, (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = var_8;
        arr_10 [i_1] = ((+(((((arr_7 [i_1] [i_1]) && (arr_2 [i_1]))) ? ((((arr_0 [14]) || 3216))) : (arr_7 [i_1] [13])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_13 = var_2;
        arr_14 [i_2] [i_2] = (~var_10);
    }
    #pragma endscop
}
