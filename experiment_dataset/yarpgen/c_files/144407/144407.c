/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (((((var_10 ? 127 : 549755813887))) <= (((max((max(var_2, var_2)), (17254 <= 17224)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (max(var_21, (((-17219 ? (6180 / 64) : ((max(151, var_4))))))));
        var_22 = (max(var_22, 37455));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_23 = -18631;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, (arr_9 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 2])));
                            arr_13 [i_1] [i_2 - 1] [i_3] [i_2] [18] = (98 ? (arr_3 [i_1 + 2] [i_1]) : 6657);
                            var_25 = (min(var_25, ((((549755813887 * var_3) / var_3)))));
                        }
                        for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, ((((var_17 >= -2) ? (((824332078 ? (arr_2 [i_1]) : -1))) : (arr_8 [i_1] [7] [i_1] [i_4] [11] [i_3]))))));
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_4] = ((31 ? ((-20 ? 17254 : (arr_4 [i_1] [i_1] [i_3]))) : (1 * 27485)));
                            var_27 = -75;
                            var_28 = 41;
                            var_29 = (max(var_29, ((((arr_9 [i_6 - 2] [i_4] [i_3] [2] [i_1 - 1]) ? (arr_4 [i_1 + 4] [i_6 + 1] [0]) : (var_12 | -17255))))));
                        }
                        var_30 = ((0 ? 1 : 1));
                    }
                }
            }
        }
        var_31 = (max(var_31, (arr_2 [i_1])));
        var_32 = (max(var_32, (((var_7 > (arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))));
    }
    #pragma endscop
}
