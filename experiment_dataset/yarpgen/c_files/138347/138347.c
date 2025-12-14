/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1 + 2] [i_1 + 1]))) ^ (!3227783096))) << (((((arr_4 [1] [i_1 - 1] [i_0]) >> (((arr_4 [i_1] [i_1 - 1] [i_1 - 1]) - 2600350713)))) - 158681))));
                arr_6 [i_1] = (~-1067184200);
                var_19 = (~3227783118);
                var_20 = (min(var_20, ((((((~(arr_1 [4])))) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_15 [i_2] = ((25651 ? 113 : 3227783097));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] [i_3] [i_6 + 2] [i_4] [i_6 + 3] = (arr_4 [11] [i_3] [i_4]);
                                var_21 -= min(((-(arr_0 [i_2 + 2]))), ((((((255 ? 26113 : 0))) <= var_3))));
                                var_22 = (max((arr_16 [i_2 - 1] [i_6 + 2] [i_6 - 2]), (arr_16 [i_2 + 2] [i_6 - 1] [i_6 - 2])));
                                var_23 = (arr_17 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
