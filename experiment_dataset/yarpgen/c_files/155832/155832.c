/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 27915));
                                arr_14 [i_0] [i_1 - 1] [i_4] [i_0] [i_4] [i_3] &= ((max(37621, -5588168257522618596)));
                                var_14 = min(((min((-2147483647 - 1), -3))), 107);
                                var_15 -= min(2, (-2147483647 - 1));
                            }
                        }
                    }
                    var_16 = 2147483622;
                    arr_15 [i_1] [i_1] [i_1 - 1] [i_1] = (max(-5057781948846505850, (((max(2147483647, -625762779))))));
                }
            }
        }
    }
    var_17 = (max(var_17, ((max(6, 244)))));
    #pragma endscop
}
