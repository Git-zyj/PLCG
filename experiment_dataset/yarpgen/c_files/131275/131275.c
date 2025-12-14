/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = 117;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = ((-(((!(arr_6 [i_3] [i_1]))))));
                            var_14 = 1143544020;
                        }
                    }
                }
                arr_9 [i_0] [i_0] [i_0] = 12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] = (arr_16 [i_5 + 1] [i_4] [8]);
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] = ((17615708600260397557 * (243 == 3151423295)));
                                var_15 = 13089129516497701042;
                                arr_28 [14] [14] [i_6] [i_6 + 3] [i_6] = (max((arr_23 [i_7 - 2] [i_7 + 2] [16] [i_7]), (!3151423290)));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (arr_19 [i_4] [i_5])));
            }
        }
    }
    #pragma endscop
}
