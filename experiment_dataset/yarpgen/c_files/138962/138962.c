/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((var_4 & 7765), var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (-119 * 7782);
                    var_13 = ((!((!((min((arr_3 [i_0]), var_4)))))));
                    var_14 = ((!((((57766 != 7778) ? ((max(0, 252))) : (57754 / 7765))))));
                    arr_6 [13] = (arr_2 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_15 &= ((7765 ? (((1 ? 1 : (arr_18 [i_7 - 2] [i_4 - 3] [i_3 + 3] [i_3 + 3])))) : var_10));
                                arr_22 [i_3] [i_5] [i_5] [i_6] [i_7 - 2] = (((((min(1, var_5)))) ? (arr_20 [i_3] [i_3]) : (min((arr_15 [i_4 + 4] [i_4 + 4] [i_4 + 4]), (57743 / 57784)))));
                                var_16 = ((!((min((min(57784, 57770)), 7765)))));
                            }
                        }
                    }
                }
                var_17 = (!((!(((57773 ? 1872926965 : 7752))))));
            }
        }
    }
    #pragma endscop
}
