/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_3));
    var_17 = 224;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [1] [10] = var_6;
        var_18 -= (!10253111914732352564);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = var_12;

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_20 = (max(var_20, (arr_2 [6])));
            var_21 *= 5;
            var_22 = (max(var_22, var_10));
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            arr_12 [10] [i_3] |= -16;
            arr_13 [i_1] = (~var_3);
            arr_14 [i_1] [i_1] [i_1] = var_15;
            var_23 = (max(var_23, (arr_7 [i_3] [9] [i_3 + 1])));
        }
        var_24 = var_4;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_24 [i_1] [i_4] [i_5] [i_1] = var_13;
                        arr_25 [i_6] [18] [i_1] [i_1] [i_1] [i_1] = arr_11 [i_1] [i_4] [i_5];
                        var_25 = 15;
                        arr_26 [17] [i_1] [i_1] [17] = (((((-16 ? (arr_9 [11] [i_4] [i_5]) : ((-1014542028873007604 ? -1 : 4))))) ? var_5 : 2784044740));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                {
                    arr_37 [i_8] = 1;
                    arr_38 [i_8] [3] [i_8] = var_12;
                }
            }
        }
        var_26 -= 335274268;
        var_27 = (arr_35 [0] [i_7] [0]);
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_28 -= ((((~var_7) ? var_1 : 18446744073709551610)));
        var_29 -= var_15;
    }
    #pragma endscop
}
