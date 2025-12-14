/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (((~var_9) ? var_11 : var_10));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = ((((min((arr_3 [i_0] [i_0]), (arr_0 [i_0] [6])))) || var_14));
        var_21 = (((((-(arr_2 [i_0] [i_0])))) ? (((var_12 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))) : var_2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = ((arr_1 [i_1]) | ((var_1 ? var_1 : (var_6 >= -1))));
                    var_23 = (arr_2 [i_1] [i_1]);
                    var_24 = (((arr_4 [i_0]) >= (arr_0 [i_2 - 3] [i_1])));
                }
            }
        }
        var_25 = (arr_1 [i_0]);
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_26 = 24;
        var_27 = (max((arr_0 [i_3] [i_3]), ((var_15 ? var_0 : (arr_4 [i_3 + 1])))));
    }
    var_28 = (1 <= 12526);
    #pragma endscop
}
