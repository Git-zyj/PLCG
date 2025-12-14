/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? ((var_3 ? var_1 : var_1)) : var_1));
    var_14 = (var_2 | 7258067855043517173);
    var_15 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_8 || var_0) + ((var_8 ? var_11 : var_1)));
        var_16 = -0;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (var_10 / 3767667883);
            var_17 = (max(var_17, (((!(arr_3 [i_0] [i_1] [i_1]))))));
            arr_7 [i_1] [i_1] [i_0] |= (((arr_4 [i_0] [i_1] [i_1]) - ((var_9 >> (var_0 - 62)))));
            arr_8 [1] [i_0] [i_0] = ((-((-(arr_0 [i_0])))));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_18 = (((arr_5 [i_2 + 2] [i_2 + 2]) - 0));
            arr_11 [i_0] [i_2 + 2] = ((~((var_5 ? var_2 : (arr_1 [i_0])))));
            var_19 = (11 / var_5);
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 8;i_3 += 1)
    {
        arr_14 [i_3] [1] |= ((1 ? 970483714 : -126));
        arr_15 [i_3] = ((-73 ? -20360 : var_3));
    }
    var_20 = (max(690905002, -9));
    #pragma endscop
}
