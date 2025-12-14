/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_6, (var_4 / var_4)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 += (arr_1 [i_0 + 1]);
                    var_14 = (arr_6 [i_0 + 1] [18] [i_0 + 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = ((!(!1897346709)));
                                var_15 = var_6;
                                var_16 = (min((((!(arr_7 [i_0 - 1] [i_0] [4] [i_0] [i_0 - 1] [i_0])))), ((0 ? 5603327689749293917 : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
