/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = -114534734676098566;
        arr_4 [i_0] = ((75 ? 224 : -33));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((114534734676098566 ? -114534734676098566 : (224 / 114534734676098565)));
        var_14 = (min(var_14, -114534734676098566));
        var_15 -= 245;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = (((arr_6 [i_2] [2]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])));
        var_16 *= (105 ? 114534734676098566 : ((-114534734676098578 | (arr_1 [i_2]))));
        var_17 = ((208 * (arr_9 [i_2] [i_2])));
    }
    var_18 = (max(var_18, var_11));
    #pragma endscop
}
