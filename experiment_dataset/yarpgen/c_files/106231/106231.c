/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (-(min(2535168259554220499, (arr_3 [i_0]))));
        var_20 = var_14;
        var_21 &= arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [8] &= (min(-74, -26704));
            var_22 = (arr_7 [i_1] [i_2] [i_2]);
        }
        var_23 = (max(-1, ((((arr_2 [i_1]) < ((var_11 ? var_19 : (arr_6 [i_1]))))))));
    }
    var_24 = var_7;
    var_25 = ((!(-var_13 - var_15)));
    #pragma endscop
}
