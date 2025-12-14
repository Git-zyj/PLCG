/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 &= (((18446744073709551615 ? (arr_0 [i_0]) : 43160)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, ((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (arr_7 [i_3] [i_2] [i_1] [i_0]) : var_11)))));
                        var_18 = 1562335076;
                    }
                }
            }
        }
        arr_9 [i_0] = 18446744073709551615;
        var_19 = (max(var_19, (((~(arr_3 [i_0]))))));
    }
    var_20 = (~(((576390383559245824 ? var_14 : var_1))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5] = (~(arr_11 [i_4]));
                var_21 = (max(var_21, (max(var_14, (arr_13 [i_5])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_4] [i_4] [i_5] [i_7] = (arr_18 [17] [17] [17] [17]);
                            arr_24 [i_5] = ((!(((arr_13 [i_4]) >= (arr_13 [i_4])))));
                            var_22 = (max(var_22, (((-((var_6 ? (arr_16 [i_4] [i_5] [i_7]) : ((-(arr_14 [4] [i_5] [22]))))))))));
                            var_23 = (-9223372036854775807 - 1);
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_0));
    #pragma endscop
}
