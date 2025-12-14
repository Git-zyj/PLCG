/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 = (~17629923991681412613);
        var_14 = (arr_2 [4]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [9] [9] [i_2] [4] = (arr_1 [i_3]);
                        arr_16 [i_1] [i_2] [2] [i_4] = (min((arr_11 [2] [i_2] [i_3] [i_2]), (((!(((var_9 ? (arr_2 [6]) : (arr_6 [i_2])))))))));
                        var_15 = ((arr_13 [i_2] [i_2]) ? ((((max(6758187733054364144, (arr_9 [i_1] [i_1])))))) : -3302792428027843366);
                        arr_17 [i_1] [i_3] [6] [10] [10] |= 127;
                        arr_18 [i_1] [10] [i_2] = ((!((min(var_4, (arr_12 [i_1] [i_4 - 1] [i_2] [i_4 - 1]))))));
                    }
                }
            }
        }
    }
    var_16 = 12636071066879928330;
    var_17 = ((var_2 & (~255)));
    var_18 = var_0;
    #pragma endscop
}
