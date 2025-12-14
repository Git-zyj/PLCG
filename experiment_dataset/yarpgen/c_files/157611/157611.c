/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_10 = (min(var_10, ((max(var_7, (max(((var_8 ? (arr_0 [i_0]) : var_4)), (arr_0 [1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = var_5;
                    arr_8 [i_2] [13] [i_2] = -5959831561621085619;
                }
            }
        }
        var_12 = (min(var_12, (-127 - 1)));
        var_13 = 0;
    }
    var_14 = (min(var_4, ((var_1 ? ((max(-51, var_7))) : var_9))));
    #pragma endscop
}
