/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((19101 < (((((var_10 ? 1 : var_1))) ? var_10 : ((var_0 ^ (arr_5 [i_1])))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                        var_20 = (max((min(((var_8 ? var_12 : var_12)), (max(187550286, var_11)))), (((!(arr_0 [i_1 - 1]))))));
                        arr_12 [i_3] [i_2] [i_1] = ((!(arr_4 [i_1 + 1])));
                        var_21 = -6228440917999461745;
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (((!(0 && 1))));
                        var_23 |= (-23 && 647755620);
                        arr_15 [i_0] [i_1 + 1] [i_4 - 1] = ((-((var_14 << (((arr_1 [i_1 + 1] [i_1 - 1]) - 172368938))))));
                    }
                }
            }
        }
    }
    var_24 = (max((min(var_9, var_19)), ((var_16 ? var_3 : 2130706432))));
    #pragma endscop
}
