/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((288230101273804800 ? ((min(1, 1))) : (var_0 + var_4)))) && var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] = (max((((!(arr_7 [4] [i_1] [i_0])))), (((((var_4 ? var_1 : var_0))) | (max(3699005698250522478, var_0))))));
                                var_12 = ((((min((~65511), 0))) ? (((30 - 44) | -6826871862090203977)) : ((11371494171113302941 ? 1456578493 : (~0)))));
                                arr_13 [i_3] [i_1] [i_3] = (max(118, 1525078330));
                                arr_14 [i_0] [i_3] [i_2] = ((!(-1107405485 && 1)));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_0] = (1 ? (((-1 + 2147483647) >> (((((-2147483647 - 1) - -2147483643)) + 19)))) : 41178);
            }
        }
    }
    var_13 = var_6;
    var_14 = -7387;
    #pragma endscop
}
