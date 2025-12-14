/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((2273888444 ? ((((arr_4 [i_0] [i_0] [i_0]) & (30 * 255)))) : (max(225, -var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_10 [i_2] [1] [i_2 - 1] [i_4]) ? var_5 : (arr_10 [i_0] [17] [i_2 + 1] [i_3])))) == (((((152 ? 1 : 10313965741837925156))) ? ((min(26961, -7904314444470767825))) : 225))));
                                arr_18 [12] [i_1] [12] [17] [i_2 + 1] [i_3] [i_0] = ((((((((arr_8 [i_0] [i_3] [i_4]) ? (arr_0 [i_0]) : var_4))) ? (arr_15 [5] [i_3] [i_3] [i_3] [i_4] [i_0] [17]) : (arr_16 [i_0] [i_0] [i_0]))) >> ((((var_11 - (((1 ? 0 : 35))))) - 165))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_9;
    var_14 = ((var_6 ^ ((var_10 ? var_7 : (((106 << (var_1 - 4409887970247274089))))))));
    #pragma endscop
}
