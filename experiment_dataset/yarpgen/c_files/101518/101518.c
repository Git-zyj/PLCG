/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (((var_14 | (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_4 - 1] = (min((!1688608091444539731), var_13));
                                arr_14 [i_0] [i_2] [i_2 + 1] [i_3] [i_2 + 1] = ((!((min(48117, (arr_2 [i_3 - 2] [i_2 + 1]))))));
                            }
                        }
                    }
                    var_19 = (min((min(-1688608091444539745, (!var_11))), 1688608091444539731));
                }
            }
        }
    }
    #pragma endscop
}
