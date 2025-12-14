/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = var_9;
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (35524 / 2147483647)));
                                var_21 = (max(var_21, (((-((-(arr_12 [i_4] [i_1] [i_2] [i_1 + 2] [i_1]))))))));
                                arr_13 [i_0 - 4] [i_1] [i_1] [i_1 + 3] [i_4] = ((-((-(arr_6 [i_0 + 1])))));
                                var_22 = -0;
                            }
                        }
                    }
                    arr_14 [i_0] [i_1 + 2] [5] [i_2 + 1] = ((5 ? -41 : ((((!4294967287) && 16)))));
                    arr_15 [i_0] [i_2] [i_2 - 1] = (arr_3 [i_0] [i_1]);
                    var_23 = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 - 3] [i_1 + 1] [i_2 - 2] [i_5] [i_5] [i_6] = ((~((~(((arr_7 [i_0 + 1] [i_2 - 2] [i_5] [i_6]) ? (arr_16 [i_0] [i_1 + 2]) : (arr_4 [i_1] [i_2 - 1] [i_2 - 1])))))));
                                var_24 = (max(var_24, (~81)));
                                var_25 = (max(var_25, ((!(!1)))));
                                var_26 = -81;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((~(~0)));
    #pragma endscop
}
