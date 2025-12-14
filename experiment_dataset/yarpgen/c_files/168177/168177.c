/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= max(-1616092600, 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = arr_1 [i_0] [i_0];
                arr_7 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_21 = (var_6 ? 1616092599 : (~var_1));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [9] [9] [i_4] [i_4] |= (-(((arr_0 [i_2]) + (arr_2 [i_4] [i_4]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_22 = min((arr_2 [i_5] [0]), (max((arr_15 [i_2] [i_2]), 1052764520)));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = max((((arr_4 [i_3 + 2]) ? (arr_4 [i_3 - 1]) : (arr_4 [i_3 + 1]))), (arr_4 [i_3 + 1]));
                                arr_22 [i_4] [i_6] &= ((!((max((arr_12 [14] [14] [14]), ((492682574 ? (arr_2 [i_4] [i_5]) : (arr_20 [i_3] [14] [14] [i_6]))))))));
                                var_23 = min((((arr_14 [5] [i_5] [i_3] [i_3]) ? (700567862 + 582581383) : (arr_8 [i_2]))), ((((arr_0 [i_5]) || ((((arr_17 [13] [i_5] [i_4] [13]) ? (arr_17 [i_6] [i_4] [i_4] [i_3]) : (arr_11 [i_2]))))))));
                            }
                        }
                    }
                    arr_23 [i_4] [7] [i_2] = (-(((min((arr_20 [i_2] [i_2] [i_4] [i_4]), 423372189)) / ((-(arr_10 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
