/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_21 -= ((1 ? 118 : 2934066811658619355));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (((((arr_7 [i_1 - 2] [i_1 - 2] [i_1]) ? var_10 : 86)) / ((-53 ? (arr_7 [i_1 + 3] [i_1 - 3] [i_1]) : 0))));
                                arr_13 [i_0] [i_1] [i_1] [9] [i_3] [i_1] = (arr_7 [i_1] [i_1 - 3] [i_1]);
                                var_23 += ((((max((arr_0 [i_0 - 2]), (0 % var_2)))) / ((var_0 & (arr_12 [i_1] [i_1 + 3] [i_2] [10] [i_4] [i_1 + 3] [i_1 - 2])))));
                                var_24 = (max(var_24, 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_25 = ((((((arr_2 [i_0 - 1] [i_1]) ? 2053525913 : var_5))) ? ((max(1, 0))) : (0 / 58730)));
                            var_26 = (i_1 % 2 == 0) ? ((((!var_11) << ((((241 & (arr_12 [i_5 + 2] [i_0 - 2] [i_1] [i_6] [i_1] [i_5 + 2] [i_1 - 4]))) - 156))))) : ((((!var_11) << ((((((241 & (arr_12 [i_5 + 2] [i_0 - 2] [i_1] [i_6] [i_1] [i_5 + 2] [i_1 - 4]))) - 156)) + 89)))));
                            arr_19 [i_0] [i_0 - 2] [10] [i_0 + 1] [i_1] = var_3;
                        }
                    }
                }
            }
        }
    }
    var_27 = ((1792551944 ? ((~(max(var_0, var_5)))) : 1));
    var_28 = var_4;
    #pragma endscop
}
