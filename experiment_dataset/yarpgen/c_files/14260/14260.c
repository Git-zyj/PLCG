/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_4 <= (((var_15 && ((max(var_3, var_13)))))))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = ((((-((var_16 ? 2175371137 : (arr_0 [i_0] [i_0]))))) > var_15));
        arr_3 [i_0] [i_0] = (max((arr_2 [i_0]), var_3));
        arr_4 [12] [i_0] = ((~(min(((var_6 ? var_1 : var_11)), 0))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_21 ^= -var_18;

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] [i_2] = (~var_14);
            arr_13 [i_1] = ((-((min(var_4, var_8)))));
            arr_14 [i_1] = max(var_16, 2175371137);
        }
    }
    var_22 = var_10;
    #pragma endscop
}
