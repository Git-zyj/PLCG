/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_12 = (~var_1);
            var_13 = (min(var_13, ((min(((((max(1, var_10))) ? (arr_0 [i_0]) : (arr_6 [i_0] [i_1 - 3] [0]))), (((~(arr_3 [i_1 + 2] [i_1 + 2])))))))));
            var_14 = (arr_3 [i_0] [i_1]);
            arr_7 [i_0] = arr_5 [10] [i_1 + 2];
            var_15 = ((((max(var_6, var_4))) ? ((((arr_1 [i_1 + 2]) && 1355195102))) : (min(var_6, (arr_1 [i_1 + 1])))));
        }
        var_16 = var_3;
    }
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                arr_21 [i_2] [i_3 + 3] [9] [i_4] [i_2] [2] = (((arr_10 [i_5 + 1]) ? (arr_14 [12] [i_3] [i_5 + 1]) : (arr_10 [i_6])));
                                var_18 = var_9;
                                var_19 = (~var_4);
                            }
                            var_20 = 120;
                        }
                    }
                }
                arr_22 [i_3] = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_21 = (arr_28 [i_7] [i_7] [i_7]);
                    var_22 = (99 / 593076274);
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
