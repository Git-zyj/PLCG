/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2 - 1] = ((-(arr_4 [i_0])));
                    arr_8 [i_2] = (((arr_0 [i_2 - 1] [i_2 - 1]) ? (((arr_0 [i_2 + 1] [i_2 - 1]) - (arr_0 [i_2 - 1] [i_2 - 1]))) : (arr_0 [i_2 - 1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [11] [i_2] = (max(((((arr_11 [i_4] [2] [i_4] [i_4] [i_4] [i_3 + 3]) >= (arr_11 [i_4] [i_4] [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2])))), ((~(arr_11 [i_4] [i_4] [i_3 + 4] [i_4] [i_4] [i_3 + 4])))));
                                arr_15 [i_0] [14] [14] [i_2] [i_2 - 1] [i_3] [i_4] = -var_11;
                                arr_16 [i_2] = (max(7808295335977878179, 7808295335977878177));
                                var_18 = (arr_6 [i_0] [i_2] [i_2]);
                            }
                        }
                    }
                }
            }
        }
        var_19 -= (!2223811371);
    }
    var_20 = var_3;
    #pragma endscop
}
