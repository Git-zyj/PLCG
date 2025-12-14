/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = ((((((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : var_7))) && (((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) > (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                            var_12 = (arr_11 [i_2]);
                            arr_13 [i_0] [i_2] [i_2] [i_3] = ((((!(-127 - 1))) ? (((arr_4 [i_0]) ? var_7 : (arr_4 [i_0]))) : ((((arr_4 [i_1]) && (arr_4 [i_2 - 1]))))));
                            arr_14 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] = (((-2147483647 - 1) ? (((arr_6 [i_2 - 1] [i_2 - 1]) ? -var_4 : (arr_5 [i_2 - 1] [i_2 - 1]))) : ((((!(arr_10 [i_2])))))));
                        }
                    }
                }
                var_13 -= (max(1, 896370807428039162));
            }
        }
    }
    var_14 = (min(((max(var_5, var_1))), var_2));
    var_15 = (((min(var_0, (var_6 / var_2))) - var_2));
    var_16 = ((var_2 | ((((-2335546823545796690 ? 9223372036854775807 : 1688682634754127705)) & -1))));
    #pragma endscop
}
