/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (arr_0 [4]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = (min((((arr_0 [i_0]) ? (arr_3 [i_0] [i_0] [i_1]) : var_3)), (max(((min((arr_0 [i_0]), 16383))), ((var_9 & (arr_1 [i_0])))))));
            var_21 = 0;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = (((-(arr_6 [i_2] [i_2] [i_2]))));
            arr_10 [i_0] = var_18;
        }
        arr_11 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
    }
    var_22 = var_2;
    #pragma endscop
}
