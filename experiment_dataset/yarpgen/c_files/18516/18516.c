/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (arr_1 [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            var_13 = (min(var_0, ((((var_5 ? (arr_6 [i_0] [i_1]) : var_10))))));
                            var_14 += (arr_6 [20] [i_1]);
                            var_15 = (min(var_15, (arr_10 [4] [4] [17] [i_3])));
                            var_16 += (((min(3671101510, (min(5699350591857135685, 17597728920767227232)))) ^ (((((~(arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])))) ^ ((-2263971755532150733 ? (arr_3 [i_2 - 2] [i_2]) : var_1))))));
                        }

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] = (-((53 ? 3497397584 : -54)));
                            var_17 += (~3484251000);
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_0] [i_6] [17] [i_6] = ((((-2037232221 ? (arr_3 [i_1] [i_2 - 1]) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_2 - 2] [i_6]))) + (((arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]) ? (arr_11 [i_1] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 2]) : (arr_11 [9] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 1])))));
                        var_18 = 849015152942324387;
                        var_19 = ((((((((min(var_0, var_3)))) > var_3)))) & (((((849015152942324370 ? var_12 : 813879743))) - (((arr_13 [i_0] [i_1] [i_2] [11] [i_6]) ? (arr_1 [i_0] [i_1]) : var_7)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_0] [1] [i_0] = 17597728920767227223;
                        arr_25 [i_0] [i_0] = ((arr_6 [i_2 + 2] [i_7 - 3]) * (arr_10 [i_2] [14] [i_7] [i_7 + 1]));
                    }
                }
            }
        }
    }
    var_20 = var_2;
    var_21 += (var_2 & var_9);
    var_22 = (max(var_22, 17597728920767227250));
    #pragma endscop
}
