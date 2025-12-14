/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [7] [i_1] [7] = ((((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2]) && var_4)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_1] = var_4;
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_1] [i_0] = -30163;
                            var_10 = (((!1859062944) ? var_8 : (((!(arr_9 [i_4] [i_1] [i_1] [i_1 + 1]))))));
                            arr_16 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_3] [i_4 - 1] = ((!(((arr_4 [i_1]) <= (arr_4 [i_1])))));
                            arr_17 [i_4 - 1] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0] = ((!((((((var_4 ? (arr_6 [8] [i_2] [i_0]) : var_1))) ? -14571508783617556110 : (((min((arr_11 [i_3] [i_0]), var_9)))))))));
                        }
                        var_11 = (((max((1 / 32754), ((var_6 ? (arr_11 [i_2] [i_3]) : var_7))))) ? ((((((arr_2 [i_1]) | (arr_6 [i_1 - 1] [i_2] [i_1 - 1])))) | 3583956270)) : ((max((arr_1 [i_0 + 2]), (max((arr_0 [i_0 - 1]), (arr_10 [i_1] [i_1] [i_2] [14] [i_0] [i_3])))))));
                    }
                }
            }
        }
    }
    var_12 = var_9;
    var_13 = var_9;
    #pragma endscop
}
