/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((((~((max(109, var_1))))) % var_1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = ((!((max(var_3, ((((arr_10 [i_3] [i_0] [i_0] [i_0]) || 1))))))));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] = (max(var_4, 3258852849402628751));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_25 [i_7] = var_0;
                                arr_26 [i_4] [i_7] [i_7] [i_7] = (((arr_20 [i_4] [i_6] [i_7]) + ((-(1 | 2147483648)))));
                            }
                        }
                    }
                    var_14 = (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] [i_6]);
                    var_15 = var_5;
                }
            }
        }
    }
    var_16 &= var_12;
    var_17 += (((((max(3258852849402628751, 924554898)) & (42022 / var_12))) <= var_8));
    #pragma endscop
}
