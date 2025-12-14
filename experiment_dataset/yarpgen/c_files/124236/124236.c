/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_11 = (arr_8 [i_0] [i_1]);
                    var_12 = ((312962357 && -312962349) ^ var_7);
                }
                arr_10 [i_0] [i_0] = (((arr_9 [i_2] [i_0] [i_0]) * (arr_9 [i_0] [i_0] [i_0])));
            }
            var_13 += (((!var_1) << (255 - 224)));
            arr_11 [i_0] [i_1] = var_8;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                var_14 += ((((((var_3 ? var_7 : var_2)) + (arr_3 [i_4]))) / (min(-312962349, 312962365))));
                var_15 = (max(var_8, (max(var_5, (arr_4 [i_5 - 1] [i_0] [i_5])))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] = -312962357;
                arr_19 [i_0] [i_0] [i_0] = (max((!var_8), (arr_7 [i_0] [i_4])));
                arr_20 [i_0] [i_0] [i_0] = (56470 != 2);
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_16 = 1990832733191053986;
                arr_23 [i_0] [i_7] = (arr_7 [i_0] [i_4]);
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {
                var_17 = 2;
                arr_28 [i_0] [i_0] = ((((((arr_27 [i_0]) >= (arr_22 [i_0] [i_0] [i_0] [i_0])))) / (312962334 % -312962349)));
                var_18 = (-(max(1024, (arr_12 [i_0] [i_0]))));
                var_19 = var_7;
                var_20 = 56764;
            }
            var_21 = ((((var_2 ? (arr_25 [i_0] [i_0] [i_4] [i_0]) : (arr_22 [i_0] [i_0] [i_4] [i_4]))) - (((arr_25 [i_0] [i_4] [i_0] [i_0]) & -1415834194))));
            arr_29 [i_0] [i_0] = -312962334;
            var_22 = (max(((255 ? 127 : 162081286)), ((min(var_3, var_1)))));
        }
        var_23 = (((min(var_4, (((var_5 ? var_2 : var_3))))) + ((((((2 ? 162081286 : -826390821)) > var_1))))));
        var_24 = (10226111213301753230 * 493848771);
    }
    var_25 = ((((var_9 << (var_6 - 71))) > var_3));
    var_26 = var_9;
    var_27 = (max((min(0, var_10)), ((24 | (var_7 + 192)))));
    #pragma endscop
}
