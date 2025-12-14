/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, var_10));
        arr_3 [i_0] [i_0] = min(((max(51, 251))), ((var_4 ? (((min((arr_2 [i_0]), var_8)))) : ((var_6 ? var_0 : var_3)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 ^= arr_2 [i_1];
            var_13 = (max(3693499071263761355, 9));
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_14 &= var_10;
        arr_9 [i_2] = ((min(var_0, var_4)));
        arr_10 [i_2] = var_10;
        var_15 = (max(var_15, (((var_1 ? (arr_8 [i_2] [i_2]) : (min((arr_0 [i_2]), (arr_2 [i_2]))))))));
    }
    var_16 = 3860307324;
    #pragma endscop
}
