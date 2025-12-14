/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = var_0;
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) * (((-127 - 1) * ((1 ? 50 : 4294967295))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (max(-43, -52));
        arr_9 [5] = (((max(var_0, 1)) >> ((((((((arr_4 [i_1]) ? -50 : (arr_4 [i_1])))) ? (arr_7 [i_1]) : (arr_6 [i_1]))) - 56222))));
    }
    var_13 = var_5;
    var_14 = ((((min(var_8, var_0))) ? ((var_8 ? (~var_8) : ((var_2 ? 8332860547346196356 : 26520)))) : var_1));
    #pragma endscop
}
