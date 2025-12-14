/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [1] [i_3] [i_3] [i_3] = ((-((0 ? ((209 ? 249559544 : -94)) : 1))));
                            var_11 = (arr_7 [i_0 + 1] [i_2] [i_2] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1 + 2] [i_4] = (arr_10 [i_5] [i_4] [i_1] [i_0]);

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_12 = (arr_6 [i_0]);
                                var_13 = (arr_2 [i_0]);
                            }
                        }
                    }
                }
                var_14 = ((-((-(((!(arr_1 [i_1 + 1]))))))));
            }
        }
    }
    var_15 = (((!(((-249559549 ? var_5 : var_5))))));
    #pragma endscop
}
