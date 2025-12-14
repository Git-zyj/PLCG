/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (!var_4);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((~(60 - 8589934591))), 18446744065119617024));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (((arr_2 [i_0]) ? (((arr_1 [i_0]) / (arr_2 [i_0]))) : (((arr_2 [22]) ? var_4 : var_13))))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [1] = var_12;
        arr_9 [14] |= (arr_7 [i_1]);
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = var_13;
        arr_13 [i_2] = (((arr_6 [i_2]) ? (arr_5 [i_2]) : (max(var_2, ((var_14 ? (arr_6 [i_2]) : (arr_10 [i_2] [i_2])))))));
        arr_14 [24] = ((!((!((max(8589934591, 1095861430)))))));
        arr_15 [8] = (arr_10 [4] [i_2]);
    }
    var_17 = ((((min(63, var_2))) ? var_1 : 1095861430));
    #pragma endscop
}
