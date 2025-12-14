/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = ((arr_0 [i_0 + 1]) * (((arr_0 [i_0 + 1]) ? (1554519938 / -28382) : (((-18 ? (arr_1 [i_0 - 2] [i_0 - 2]) : (arr_0 [i_0])))))));
        var_19 = (min(var_19, (((max((((arr_0 [i_0]) ^ -9223372036854775807)), 84))))));
        arr_2 [i_0] [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = (((-1 / -85) / -var_15));
        var_20 = (max(var_20, ((((arr_6 [16]) / ((max((arr_5 [i_1] [i_1]), 142))))))));
        var_21 = (min(var_21, (((~(max((max(562949919866880, 805324033)), -792512581991871368)))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_22 = (((((((var_7 ? -38 : var_14)) * (var_1 + var_9)))) + (-1311728829 - 64)));
        var_23 = (max(var_23, ((((((0 > ((min(-5312, -85)))))) >> (var_6 < var_8))))));
        var_24 += (((64463 | (arr_1 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_25 = var_9;
                    arr_16 [i_4] [i_4] = (14 ? (18705 ^ 11) : 3824217763970703416);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((((max((arr_17 [i_3 - 1] [i_6 + 1]), 227))) * (((arr_14 [i_3 - 1] [i_6 + 1] [i_6 + 3]) ? var_15 : (arr_17 [i_3 - 1] [i_6 + 1]))))))));
                                arr_22 [i_2] [i_2] [i_6] [i_2] [i_2] = (((arr_3 [i_6] [i_2]) && 562949919866864));
                                var_27 = -562949919866863;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = 0;
    var_29 = (min(var_29, var_7));
    #pragma endscop
}
