/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] = 4294967295;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [5] [i_3] [5] [i_3 - 2] [i_0] [12] [12] = (~-122);
                                arr_12 [i_1] [i_1] = 13020924337978428210;
                                arr_13 [6] [10] [5] = (!1434328796);
                                arr_14 [i_3] [i_4 - 1] = (!48);
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = -5425819735731123406;
    #pragma endscop
}
