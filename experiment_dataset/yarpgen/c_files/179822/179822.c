/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(var_16, (~var_5)));
        var_17 = var_7;
        var_18 = 1;
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        arr_6 [10] |= var_11;
        var_19 = (max(var_19, var_8));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 = ((((max(var_7, 0))) <= ((((max(21, 1)))))));
        arr_10 [i_2] [i_2] = (max(268402688, 44953));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_21 = (max(185, (max((((!(arr_7 [i_2])))), var_5))));
            var_22 = (arr_1 [i_2]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_22 [i_2] [i_2] [i_4] [i_5] [i_6] = ((!((((arr_13 [i_2] [i_5]) ? var_15 : (arr_13 [i_2] [i_3]))))));
                            arr_23 [i_2] [i_2] [i_2] [10] [1] [i_2] [10] = ((~((-(arr_8 [i_2] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        var_23 = (((arr_1 [i_7 - 3]) ? (arr_1 [i_7]) : (((arr_1 [i_7]) ^ 185))));
        arr_26 [i_7] = 173;
        arr_27 [i_7] = 174;
    }
    var_24 = var_10;
    #pragma endscop
}
