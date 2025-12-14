/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_10;
    var_12 = (max(var_12, 12717505626241724604));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 *= (max(25527, 25527));
                                var_14 = (max((12717505626241724619 == var_10), 68));
                                arr_12 [i_0] [i_1] [8] [8] [8] [i_1] [i_4 - 1] = min(((var_6 << (((-711742733 + 711742761) - 7)))), 33561);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = (min((12717505626241724629 & 25517), (arr_6 [i_1] [i_2] [i_3] [i_4])));
                                var_15 = (arr_8 [i_3] [i_4 + 1] [i_4 + 1] [i_4] [i_4]);
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    var_16 = ((12717505626241724610 + (arr_7 [i_1] [0] [i_5 - 2] [i_5 - 3] [i_5 - 2])));
                    var_17 = -711742733;
                    arr_16 [i_5] [i_1] [i_5] = (max(170, var_7));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_9));
                                var_19 |= (arr_17 [i_0] [i_1] [i_1] [i_7]);
                            }
                        }
                    }
                    arr_24 [i_5] [i_5] [i_5 - 1] [i_5] = var_1;
                }
                var_20 = (170 | 170);
            }
        }
    }
    #pragma endscop
}
