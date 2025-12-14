/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = 4;
                                arr_10 [3] [i_0] = var_13;
                                var_21 = (var_12 / var_14);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_22 -= (arr_2 [i_0 + 3] [i_0 + 3]);
                            var_23 = (max(var_23, (((+((var_7 ? (arr_2 [i_0] [i_0 - 2]) : (((-1 + 2147483647) << (var_14 - 3498467819319276817))))))))));
                        }
                    }
                }
                var_24 = (0 % 2744);
            }
        }
    }
    #pragma endscop
}
