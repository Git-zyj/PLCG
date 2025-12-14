/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0]);
                arr_4 [i_0] [i_1] [i_1] = 1565242061;

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] = (max(1, (min(-689238871, 1565242061))));
                    var_12 = 3145756415;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [1] [i_0] &= 55;
                                var_13 = -582094392;
                                var_14 = (min(var_14, (1 <= 1)));
                            }
                        }
                    }
                    var_15 &= ((((min((arr_8 [i_1 - 1] [i_1 - 1] [i_2 + 1]), (min(4294967295, 4515997441483020180))))) ? (arr_13 [12] [12]) : (((((((arr_8 [i_0] [17] [1]) / (arr_14 [i_1 + 2] [i_1] [i_2 + 1] [10] [i_1] [i_1 + 2] [i_2 + 1]))) <= 65526))))));
                    var_16 -= (max(1, (arr_12 [i_2] [i_1] [10] [5] [0])));
                }
            }
        }
    }
    var_17 |= var_7;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            {
                var_18 = (arr_16 [i_6]);
                var_19 = (((arr_14 [i_6] [i_6] [i_5] [1] [10] [i_6 - 1] [i_5]) ? -582094402 : (min(3145756409, (min((arr_20 [1]), 3145756435))))));
                var_20 = (((((55 ? (arr_11 [i_6 - 2] [i_6] [i_6 + 3] [i_6 - 3] [i_6] [i_6]) : 127))) ? 0 : -2668));
                arr_22 [i_5] = ((min(((min(55, 10))), (max(36028797018931200, 65530)))));
            }
        }
    }
    var_21 = (min(var_21, ((min((min(var_3, 466032217)), ((min((((-582094392 ? 664653189 : var_1))), (max(var_7, var_0))))))))));
    #pragma endscop
}
