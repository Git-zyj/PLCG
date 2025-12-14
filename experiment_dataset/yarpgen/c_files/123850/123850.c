/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [4] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((!(((-(arr_0 [i_0 - 2] [i_0 + 1]))))));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_11 = (arr_5 [10]);
        var_12 = (arr_0 [i_1 + 1] [i_1 + 1]);
        var_13 = ((arr_7 [i_1 - 2]) ? ((-17 + (arr_1 [i_1]))) : var_10);
        arr_8 [i_1] = (((arr_5 [i_1]) ^ (arr_6 [i_1 - 3] [i_1])));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_14 = (max(1, 1));
        var_15 = (max((((arr_1 [i_2 - 2]) >= (arr_11 [i_2 - 2]))), (((arr_6 [i_2 - 1] [6]) >= (arr_6 [i_2 + 1] [4])))));
    }
    var_16 = (min((~var_10), var_2));
    #pragma endscop
}
