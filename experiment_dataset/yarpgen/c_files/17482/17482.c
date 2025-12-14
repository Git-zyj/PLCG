/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (max((((0 ? (~var_10) : 1042194840))), var_6));
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (!113)));
        arr_3 [i_0] [i_0 - 1] = var_3;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((max(((((min(var_10, (arr_7 [i_1])))))), (max(-var_6, (arr_1 [i_1]))))))));
        var_15 |= (max(var_1, (arr_7 [i_1])));
        var_16 = (min(var_16, ((((arr_7 [i_1 - 1]) ? (arr_2 [i_1]) : (43859 * var_1))))));
        var_17 = (-1865715460 ? 2052867285 : -63);
        arr_8 [i_1] = ((max(1, var_10)));
    }
    var_18 = max((((((var_9 ? 2126059965 : 1)) > var_10))), (min(var_9, (min(var_6, var_2)))));
    #pragma endscop
}
