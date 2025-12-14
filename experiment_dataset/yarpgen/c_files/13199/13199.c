/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_8));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [17] = (max(((max(var_15, (arr_0 [i_0])))), (((var_12 > 983040) & var_14))));
        arr_3 [i_0] [i_0] = (max((arr_0 [i_0]), (1 & var_8)));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] = (max((max((max(1, 245)), 94)), -92));
            arr_10 [i_1] [i_2] = ((((max(var_2, var_6))) | (519532897 == 1)));
            arr_11 [i_1] = (max(((~((var_16 ? (arr_5 [i_1]) : (arr_5 [i_2]))))), (((var_10 > var_6) & var_2))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_19 [i_1] [1] [i_4] [i_1] = var_15;

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_5] [i_6 + 3] [i_4] [i_4] [i_6 + 3] |= (max(-2, 519532897));
                            arr_25 [1] [i_3] [i_1] = -0;
                        }
                        var_21 = (max(((-((0 ? 0 : (arr_22 [1] [3] [i_4]))))), (((1 + var_8) ? var_17 : 1))));
                    }
                }
            }
            var_22 = (((1 >> (85 - 65))));
        }
        var_23 = var_13;
    }
    #pragma endscop
}
