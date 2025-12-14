/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 -= (arr_1 [i_0]);
        var_17 = (arr_1 [i_0 - 1]);
        arr_2 [i_0] = ((var_12 <= ((((arr_1 [i_0]) ? var_0 : var_7)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((var_0 != 128) >= (2805 & var_6))))));
        var_19 = (12290215296804695137 && 3581382892);
        var_20 = (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1])));
        var_21 += (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (arr_0 [i_2] [i_2]);
        arr_9 [i_2] [i_2] = (((((arr_3 [i_2]) - 25660))) ? var_2 : 12216214665006068963);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_14 [i_3] &= (((arr_12 [i_3] [i_3]) | var_2));
        arr_15 [i_3] = (((4689262295826147405 - 2987286488351172284) || (var_4 & var_4)));
        var_22 = -17769;
    }
    var_23 = var_12;
    #pragma endscop
}
