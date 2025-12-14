/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 += (var_15 & 2881918844);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [6] [i_2] [i_3 + 2] = (arr_9 [9] [9] [i_2] [i_2] [i_3]);
                        var_22 = 3363901311;
                        var_23 = arr_4 [i_3];
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((2881918857 || (!1413048444)));
                    }
                }
            }
            arr_12 [i_0] [0] [14] = ((!(arr_6 [1] [i_1] [i_1])));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_24 = ((-var_6 && (arr_15 [i_4] [i_5])));
                arr_19 [i_4] [4] [4] [4] = ((var_1 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_4] [i_5] [i_4])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_25 += (!1413048452);
                            var_26 = (max(var_26, ((((!1413048464) * ((931065984 ? 1413048442 : 2881918861)))))));
                            var_27 |= (3363901311 == 2881918857);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_28 = 1413048417;
                            var_29 = ((1520491281 ? ((931065984 ? 3363901319 : 1490025876318513332)) : var_19));
                        }
                    }
                }
                arr_32 [i_5] [i_0] [i_4] = ((var_11 ? (arr_0 [i_5]) : -7979657291201776768));
            }
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                arr_36 [i_10] [i_4] [i_10] [i_10] = ((arr_3 [i_10 - 1] [i_10 - 1] [i_10]) << ((((~(arr_15 [7] [i_10]))) - 7817991877996990726)));
                var_30 = 4215296577;
            }
            arr_37 [i_4] [6] [i_4] = ((1173086895691829985 ? (var_2 + var_18) : -931065985));
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {

                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            arr_47 [8] [i_11] [i_11] [8] [8] [i_13] [i_14] = (arr_28 [i_11 - 2] [i_14] [10] [i_11]);
                            arr_48 [8] [i_13] [i_12] [4] [8] = (((arr_44 [i_11 - 1] [i_11] [i_11 - 1] [i_14]) ? (arr_44 [i_0] [8] [i_11 + 1] [i_11 + 1]) : 1413048404));
                        }
                        var_31 = (3363901311 | 511);
                    }
                }
            }
            var_32 = (((-4979716266564875466 / var_7) > var_3));
        }
    }
    var_33 = (~2881918856);
    var_34 = -var_6;
    var_35 = var_4;
    #pragma endscop
}
