/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((max(var_1, var_7)), 1))) * (-127 - 1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_18 = (((7287638798468655671 ? 1 : (arr_1 [i_1 + 1]))));
            var_19 = (1 + 1);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_7 [i_0] [i_2] [4] = (-127 / (arr_3 [i_2]));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_3] [i_2] [3] [i_0] = (-108 / -127);
                        var_20 = (!-1088454818426322454);
                    }
                }
            }
        }
        var_21 = ((-(((-127 - 1) ? -104 : (((arr_3 [i_0]) + var_3))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_22 = ((3281260292 ? (127 * 65535) : 964628339));
        arr_17 [i_5] = -1870000946653262094;
    }
    #pragma endscop
}
