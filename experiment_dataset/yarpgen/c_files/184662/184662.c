/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 ? 1 : var_9))) ? (var_3 || var_2) : ((-1 ? ((min(47, -19751))) : (var_8 - 1)))));
    var_13 = (((-1761721443680974558 < 18446744073709551607) ? ((((1 - var_5) != (!var_0)))) : ((1 ? 1 : ((var_4 ? 1 : 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 1;
        arr_3 [i_0] [i_0] = (-1761721443680974558 * 120);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = ((-var_6 ? (var_11 & var_11) : 0));
                    var_14 = 20982;
                    arr_13 [2] [i_2] [i_2] [i_1] = (((!(arr_0 [i_1] [i_2]))));
                }
            }
        }
        arr_14 [i_1] = (((var_6 / var_8) ? 32756 : 1));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_15 = (((((1 ? -16 : 44554))) ? (0 >= 437) : ((1 ? 43 : 34970))));
            var_16 = 1;
            arr_18 [i_1] = var_9;
        }
        arr_19 [i_1] = ((((var_1 ? 437 : var_3)) % var_8));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] = var_9;
                    arr_27 [i_1] [i_5] [i_6] [i_1] = (((-(arr_15 [i_1] [i_1] [i_1]))));
                    var_17 = (arr_0 [i_1] [i_5]);
                }
            }
        }
    }
    var_18 += var_5;
    #pragma endscop
}
