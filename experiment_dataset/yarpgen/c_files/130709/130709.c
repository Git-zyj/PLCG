/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 += ((max(722136252, 3572831043)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0 - 3] [i_0] [i_0] [8] [i_0 - 1] &= ((!(arr_5 [i_0] [i_1] [i_2] [i_3])));
                        var_11 = ((!((min((arr_2 [i_0 - 3]), (arr_6 [i_0] [i_0 - 2]))))));
                        arr_10 [i_0] [1] [i_1] [i_0] = 1;
                    }
                }
            }
            var_12 &= (min((max((-2147483647 - 1), -322229461522644472)), ((max(var_1, 2836616552)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_13 = 722136244;
                var_14 = (var_3 ? (~1) : (arr_1 [i_0 - 1]));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_15 = (arr_14 [i_0] [0] [i_0 - 3] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_16 = 722136252;
                            var_17 = (2147483647 ? ((var_2 ? var_7 : var_9)) : -2147483647);
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_25 [i_0] = -var_5;
                var_18 = (((((0 ? var_1 : 1))) ? -1 : (var_1 == 6817085514251219209)));
                arr_26 [i_0] [i_0] = var_9;
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_19 = ((var_4 ? (((var_9 ? 3572831019 : 1))) : (((arr_16 [i_0] [i_4] [6]) | (arr_4 [15] [10])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_20 |= ((arr_32 [i_0 - 2] [i_0 - 2] [i_0 - 1] [10] [i_0 - 3] [i_0 - 1]) ? (arr_32 [i_0 - 2] [i_0 - 2] [i_0 - 1] [6] [i_0] [i_0 - 1]) : 1);
                            var_21 = ((arr_17 [i_0 - 1] [11] [i_0 + 2] [i_0 - 3]) ? (arr_19 [i_0 + 1] [9] [i_0 - 2] [13]) : var_2);
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
