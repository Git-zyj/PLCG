/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_13;
        var_17 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 ^= (((arr_2 [i_0]) > (max((max(18446744073709551600, 211)), ((min(96, var_15)))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_19 = ((!((min(252, (min(136, 252)))))));
                            var_20 = ((51478 ? 101 : 159));
                            var_21 &= ((max(9407028888889348158, 157)));
                        }
                    }
                }
            }
            arr_16 [i_1] = (max((((arr_15 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_1]) - (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]))), (((arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_1]) ? 79 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))));
        }
        var_22 = (((!176) <= ((9039715184820203458 ? 163 : var_0))));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    {
                        var_23 = var_5;
                        var_24 = (arr_1 [i_5]);
                    }
                }
            }
        }
        var_25 = (max(var_25, ((min((((arr_27 [i_5] [i_5] [i_5] [i_5 - 1]) ? var_9 : var_12)), ((max(var_5, -31))))))));
    }
    var_26 -= var_11;
    var_27 = var_16;
    var_28 = ((((max(1, 132))) ? 79 : 3481589061));
    #pragma endscop
}
