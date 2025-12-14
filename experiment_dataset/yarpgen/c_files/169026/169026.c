/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((~((114 ? ((min(-1557925700, 44125))) : ((var_6 ? 3294422143 : 274877906688)))))))));
    var_19 = (max((max(var_11, var_8)), ((var_2 ? (-9223372036854775807 - 1) : (!var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4] = (((~var_0) != (((arr_5 [3] [3] [3] [i_4]) | -20))));
                                var_20 *= var_1;
                                arr_14 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] = (~var_15);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_21 [i_1 - 1] [i_1 - 1] [i_5] = ((((!(((1000545152 ? 274877906688 : var_1))))) && var_17));
                                var_21 = ((!(((arr_3 [i_6 + 1] [i_1 + 1]) > (arr_3 [i_6 + 1] [i_1 + 1])))));
                                arr_22 [i_0] [i_1 + 1] [i_2 + 1] [7] [i_5] = (~4936813954123000508);
                            }
                        }
                    }
                    var_22 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
