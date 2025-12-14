/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((max((((-1596494557 ? var_3 : var_12))), var_5)) << (((((max(var_8, var_13)) ^ 1)) - 18446744073709551575)))))));
    var_16 = (min(var_16, (var_11 ^ var_5)));
    var_17 = (min(var_17, ((max((!var_10), ((((var_0 ? var_4 : var_4)) >= (!-1596494561))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (max((((min(var_11, var_3)) ^ (((arr_5 [i_2] [i_1 - 1] [i_2] [i_0 + 1]) << (((arr_4 [i_0]) - 1738376560)))))), (((!((max((arr_0 [i_1] [i_2]), var_12))))))))));
                    var_19 = (min((((!(arr_3 [i_0 - 1] [i_1 + 1])))), (arr_4 [i_0 - 1])));
                    arr_6 [i_0] [i_1] [i_2] [i_1] = (max(((((arr_0 [i_0 + 1] [i_0 + 1]) | var_10))), (var_10 & -1596494561)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((max(1, 127)) ^ (arr_7 [i_4] [i_4] [10] [i_4] [i_4]))))));
                                arr_15 [i_4] [i_4] [i_2] [i_4] [10] |= (arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
