/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((((~(arr_2 [i_0 - 1] [i_0 - 2])))) >= (max((arr_2 [i_0 + 1] [i_0 + 1]), 15237258967999888206))));
                    arr_8 [i_1] [i_1] [i_2] = (arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = 306181330;
                                arr_15 [i_4] [19] [i_1] = (max((arr_7 [i_0] [i_0]), (min(-var_1, (arr_9 [i_4] [6] [i_2] [6] [6])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] [i_1] [i_5] = (((arr_10 [i_1] [i_2] [i_2] [i_1]) ? var_4 : 1));
                                var_14 = ((679 * ((4233 ? 32764 : 4221))));
                                arr_23 [i_0] [i_1] [7] [i_2] [i_5] [i_5] [i_6] = ((!((((-(arr_21 [i_1] [i_5] [i_2] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = -2184206069;
    #pragma endscop
}
