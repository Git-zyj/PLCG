/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (+-317);
    var_13 = var_1;
    var_14 = (max(var_1, 3496084435));
    var_15 = -798882872;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min((arr_1 [i_0]), ((((max(3496084435, 192))) ? 477854695 : (~798882901)))));
                var_17 = (min(var_17, (max(((var_2 ? (arr_3 [4] [i_0 + 1]) : (arr_3 [12] [i_0 - 1]))), (arr_3 [12] [i_0 + 1])))));
                arr_6 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = 798882872;
                                var_19 = (arr_11 [i_3] [i_2 + 1] [i_0]);
                                var_20 = var_1;
                                arr_18 [i_1] [i_0] [i_4] = max(((max(var_8, (var_8 % var_2)))), var_5);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
