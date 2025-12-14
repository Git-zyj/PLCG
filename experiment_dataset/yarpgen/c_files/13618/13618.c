/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((max(var_3, (var_5 + var_10))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (max((((0 + 0) ? 65535 : 2835559947)), (((!(!5041829135129738226))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_5 [0] [i_1] [i_1]) & ((-(((arr_1 [i_0]) ? (arr_9 [3] [i_4] [i_3] [i_3] [i_2] [i_1] [i_0 - 1]) : 12612585559559105843))))));
                                arr_12 [9] [i_2] [i_3] [i_0] [i_4] [i_3] [i_4] = ((((-17236 ? (((arr_3 [i_0] [i_4]) ? 65535 : var_4)) : (arr_4 [i_0 + 1] [i_2] [i_3]))) << (((!((min(var_7, var_2))))))));
                                var_17 = var_2;
                                arr_13 [3] [i_0] [i_0 + 3] [i_0] [i_0 + 3] = 6;
                            }
                        }
                    }
                    var_18 = (arr_0 [i_1]);
                }
            }
        }
    }
    var_19 = ((-(!-18553)));
    #pragma endscop
}
