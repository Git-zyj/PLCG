/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 174;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((~var_5), (((~6340429620231036582) ? 16260 : ((10182 ? var_4 : var_0))))));
        var_11 = var_4;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = 65524;
        var_12 = (max((min((arr_4 [i_1]), 1)), ((((var_9 | var_7) && (arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (~var_8);
        var_13 = ((!(arr_4 [i_2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((((((-2147483642 ? var_9 : -563660807)))) ? ((-(((arr_7 [i_3]) ? var_3 : var_4)))) : ((((var_8 ^ var_4) | 63)))));
        arr_14 [i_3] = ((((-(arr_10 [9]))) * (!var_8)));
    }
    #pragma endscop
}
