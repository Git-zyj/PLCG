/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = (min(var_10, (((min((((!(arr_1 [1])))), var_5))))));
        var_11 += ((((((var_7 ? var_3 : var_4))) ? ((var_6 ? var_2 : 1702478202031896003)) : (max(var_5, var_7)))));
        var_12 = (arr_1 [0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 += var_8;
                        var_14 = -1;
                        var_15 = (max(var_15, var_6));
                        var_16 = (arr_3 [i_0] [i_0]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] = (((arr_3 [8] [i_1 - 2]) ? 1702478202031895997 : (16744265871677655612 | 0)));
                            var_17 = ((((((((var_9 ? var_6 : (arr_5 [9] [i_2] [i_0] [i_2])))) ? ((4294967295 ? 1 : 0)) : (((arr_3 [i_0] [i_0]) ? var_0 : (arr_6 [i_0] [i_0] [i_0] [i_0])))))) | (arr_9 [i_1 - 1] [i_1 - 2] [i_1] [6] [i_1 + 1] [8] [1])));
                        }
                    }
                    arr_13 [i_0] [8] [i_0] |= ((((((((var_0 != (arr_2 [i_0] [0] [0])))) | (arr_8 [i_1 - 1] [i_1 - 3])))) > 16744265871677655590));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] = (((3403851677567812012 ? var_8 : (arr_3 [i_1 - 3] [i_1 - 2]))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [9] [1] = (((!1702478202031896004) | ((~(min((arr_10 [i_1] [i_0] [i_1] [i_1] [10] [i_1] [i_1 - 2]), var_7))))));
                                var_18 = (~var_7);
                            }
                        }
                    }
                    var_19 = (min(var_19, (arr_7 [i_2] [i_2] [i_2])));
                    var_20 |= ((((!(arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]))) ? ((16744265871677655632 ? 1 : 1702478202031896025)) : (arr_14 [i_1 + 1] [i_1 - 1] [i_1])));
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 = (max(var_21, (((var_0 || (arr_3 [6] [i_0]))))));
            var_22 *= (!var_8);
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_23 = (max(0, 4294967295));
        arr_25 [1] = (((arr_24 [i_8] [i_8]) + (var_3 | var_0)));
    }
    var_24 = var_8;
    #pragma endscop
}
