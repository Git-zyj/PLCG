/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_1] [i_0] = (arr_5 [i_1]);
                            arr_10 [i_1] [i_1] = (i_1 % 2 == zero) ? ((max(var_17, (((arr_2 [i_1 - 1] [i_1]) >> (((arr_6 [i_1 + 1] [i_1]) - 905883324))))))) : ((max(var_17, (((arr_2 [i_1 - 1] [i_1]) >> (((((arr_6 [i_1 + 1] [i_1]) - 905883324)) - 862515206)))))));
                            arr_11 [i_0] [i_3] [i_2] [i_1] = 562949953421311;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4 - 2] [i_1] = ((((((arr_6 [i_0] [i_1]) ? (min((arr_0 [i_5] [i_1]), 63141)) : (arr_16 [i_0])))) ? (((arr_17 [i_1 + 1] [i_1 + 1] [4] [i_4 + 1] [i_4 + 1]) ? (arr_17 [i_1 + 1] [i_1 + 1] [i_4] [i_4 - 1] [i_4 - 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [1] [i_4 - 2]))) : (((((arr_13 [i_4 - 1] [i_1 + 1] [i_1 + 1] [i_0]) <= 255))))));

                            for (int i_6 = 1; i_6 < 23;i_6 += 1)
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_0] [i_5] [i_0] = min(((max(239, var_3))), 39898);
                                var_18 = ((-(((arr_22 [i_4 - 2] [i_4 - 2] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1]) ? (arr_22 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]) : (arr_22 [i_0] [i_6] [i_6 - 1] [i_0] [i_6] [i_6] [i_6])))));
                                var_19 = (max(var_19, (arr_16 [i_0])));
                            }
                        }
                    }
                }
                arr_24 [i_0] |= (((arr_16 [i_1 - 1]) <= 18029696221874936648));
            }
        }
    }
    var_20 = var_17;
    #pragma endscop
}
