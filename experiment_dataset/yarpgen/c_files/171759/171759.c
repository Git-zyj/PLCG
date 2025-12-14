/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 = var_11;

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((max(var_3, 0)));
            var_16 = var_11;
            var_17 = (!var_9);
            var_18 = (arr_2 [i_1]);
        }
        var_19 = ((((!(arr_0 [i_0 + 3]))) ? (max(var_10, (arr_0 [i_0 - 4]))) : (min((arr_0 [i_0 - 3]), var_2))));
    }
    var_20 = (min(var_20, ((max(0, var_12)))));
    var_21 = (min(((((409816067 ^ 0) ? (0 == -70) : 0))), (((!255) % var_5))));
    var_22 = var_2;
    #pragma endscop
}
