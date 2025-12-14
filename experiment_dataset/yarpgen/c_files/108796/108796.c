/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? ((min(1277618297, 2130291150))) : 22841));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = ((max((22861 % var_3), ((((arr_5 [i_0] [i_1]) < 42687))))));
                            var_18 = (arr_1 [i_0]);
                            var_19 = (max((22850 | 22844), 4294967295));
                            var_20 -= (((((max(var_1, (arr_3 [i_0] [i_0]))))) % (((arr_1 [i_0]) / (arr_2 [i_3])))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = var_6;
                        }
                    }
                }
                arr_13 [i_1] = (42710 && 9223372036854775807);
                arr_14 [i_0 - 1] [i_0] [i_0 + 1] = (((arr_3 [i_0] [i_1]) ? ((max((((arr_10 [i_0 - 1] [i_0] [i_1]) - (arr_5 [i_0 + 2] [i_1]))), 42710))) : ((((42704 || (arr_6 [i_0] [i_0]))) ? (max((arr_7 [i_0]), (arr_1 [i_0]))) : 7599594996505879863))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = var_7;
                            var_22 = max((-127 - 1), (arr_7 [i_0 - 1]));
                            var_23 = ((var_10 ? (max((((arr_10 [i_0] [i_4] [i_0]) ? (arr_8 [i_0] [i_1] [14] [14]) : 22847)), (min((arr_4 [i_4] [i_5]), (arr_1 [i_0]))))) : var_2));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
