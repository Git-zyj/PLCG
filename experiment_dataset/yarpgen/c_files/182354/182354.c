/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-((-903571814 - (arr_1 [i_0]))));
        var_10 -= (min(((~(min(177, var_0)))), (((!(-2147483647 - 1))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_11 = (arr_4 [i_1] [i_1]);
        arr_6 [i_1] = var_3;
        var_12 = 46;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_13 = (20207 ? var_8 : (131 % var_3));
                            arr_20 [i_4] [i_3] [i_4] [i_3] [i_4] = var_4;
                        }
                        arr_21 [i_2] [i_2] [i_4] = (((((!((min(var_3, (arr_0 [i_2]))))))) >> (-21621 + 21650)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                {
                    var_14 = 24397;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_15 = (max(var_15, -2003714543));
                                var_16 = min((arr_24 [i_7] [i_7 + 2] [i_7] [i_7]), (!var_8));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_17 = (min(var_17, -var_0));
                                arr_37 [i_2] [i_7] [i_2] [i_2] [i_2] = ((32256 ? 2003714543 : (((((arr_17 [11] [i_11 - 3] [i_7] [i_11 - 3]) + 2147483647)) >> (((arr_17 [i_11] [i_11 + 1] [i_7] [i_11]) + 6221))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (max(var_18, (((!((((((2003714543 ? (arr_17 [i_2] [i_2] [6] [i_2]) : -21621))) ? 33546240 : (((!(arr_13 [i_2] [14] [i_2] [i_2]))))))))))));
    }
    var_19 = (min(var_19, var_6));
    var_20 = var_1;
    var_21 = ((-2147483647 + (~-903571814)));
    #pragma endscop
}
