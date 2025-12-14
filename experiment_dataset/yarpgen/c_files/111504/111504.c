/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((max((arr_0 [i_0 + 1]), var_4))) != var_3));
        arr_3 [i_0] [i_0] |= var_8;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_10 = var_3;
                            var_11 = var_3;
                            arr_15 [i_0] [5] [3] [i_0] [i_2] [i_4] = (max(((min(var_4, (arr_8 [i_1 + 1])))), -var_3));
                            arr_16 [i_0] [i_1] [1] [i_0] [i_3] [i_2] = 1048575;
                            arr_17 [i_0] [i_1] [i_2] [1] [i_2] = ((((arr_14 [1] [i_1 - 1] [i_2 - 1] [i_3] [i_4]) != (arr_10 [6] [i_2 + 3] [1] [i_4]))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_21 [7] [i_2] [4] [i_2] [1] = (arr_20 [i_0] [i_0] [i_2] [3] [i_5]);
                            var_12 = (min(var_12, (arr_6 [8] [i_1])));
                        }
                        arr_22 [i_0] [i_2] [i_2 + 1] = ((((-(arr_14 [i_0] [i_0 + 2] [i_2 + 3] [i_3] [4]))) - ((((!(arr_20 [i_0 + 2] [i_3] [i_2] [i_2] [i_2 + 2])))))));
                        arr_23 [i_3] [i_2] [i_1 + 1] [9] [i_2] [i_0 - 1] = 14884;
                        arr_24 [i_2] [i_1] [i_2] [i_3] [i_2] = var_6;
                    }
                }
            }
        }
        arr_25 [i_0 + 1] [i_0] = 6208215690235752116;
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (arr_27 [i_6 + 1])));
        var_14 |= (arr_5 [i_6] [i_6]);
    }
    var_15 = var_9;
    var_16 = var_1;
    var_17 = (var_6 / var_1);
    #pragma endscop
}
