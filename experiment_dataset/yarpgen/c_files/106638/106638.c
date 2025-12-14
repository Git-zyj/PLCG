/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = ((!((max(var_5, ((-(arr_12 [i_0] [i_1 - 1] [6] [i_3] [i_4]))))))));
                                arr_15 [i_0] [i_3] [i_1] [i_3] [i_3] = (max((arr_2 [i_2]), var_2));
                            }
                        }
                    }
                    var_13 = (max(((((arr_13 [i_2 + 3] [i_0] [i_2 - 1] [i_1] [i_1] [i_2 - 2]) && (arr_13 [i_2 + 3] [18] [i_0] [i_1] [i_0] [i_2 - 1])))), var_5));
                    var_14 = var_10;
                    var_15 = (((((var_2 ? (((arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_2 - 1]) & -117)) : (var_6 * var_5)))) ? (((arr_3 [i_1] [i_2 - 1]) ? var_6 : 6877)) : (~23623)));
                    var_16 = -30;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_17 = 3220990191;
        var_18 = ((!(((((max(3220990181, var_11))) ? 1073977103 : var_11)))));
        arr_18 [i_5] = (((arr_6 [i_5]) / (!0)));
        arr_19 [i_5] [i_5] = var_4;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_19 = (max((max((arr_20 [i_6]), (arr_20 [i_6]))), var_9));
        var_20 = ((((!(arr_21 [i_6])))));
    }
    #pragma endscop
}
