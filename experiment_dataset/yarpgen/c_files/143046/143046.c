/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_0] [i_1 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_10 [i_3] [i_1] [i_0])));
                            arr_11 [i_0] = (((arr_0 [i_0] [i_3]) ? (((((((arr_10 [i_0] [i_1 - 1] [i_2 - 1]) + 2147483647)) << (((arr_0 [7] [7]) - 60)))) << (((max(1, 12870985412555879548)) - 12870985412555879548)))) : ((max(((((arr_6 [i_0] [i_1 + 1] [i_2] [i_3]) == (arr_0 [10] [i_1])))), var_2)))));
                        }
                    }
                }
                arr_12 [i_0] [1] [i_1] = (var_6 + 12870985412555879548);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_4] [i_4] = (min((((!((max(var_13, (arr_20 [i_4] [i_5] [i_6]))))))), ((((~(arr_20 [i_4] [i_4] [i_4]))) & (!var_3)))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_20 = (min(32505856, 50));
                                arr_28 [i_4] [i_5] [i_5] [i_4] [i_4] [16] = (arr_26 [i_4] [i_4]);
                            }
                        }
                    }
                    var_21 = (max((47011 > 22935), ((~(min(var_16, 12870985412555879575))))));
                }
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
