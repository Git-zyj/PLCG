/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (((max(var_3, ((511295726 ? 511295726 : var_6)))) <= var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 *= (min(((+(max((arr_0 [6]), 8)))), (((!(arr_0 [4]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_12 [10] [i_0] [i_2] = (arr_0 [i_0]);
                    arr_13 [i_0] [i_1] = ((-1941340050 ? 1941340053 : (arr_5 [16] [i_0 + 4])));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (((~(arr_10 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_0 - 1]))))));
                        var_19 -= (((arr_14 [i_0] [2] [i_0 - 1] [16] [i_0]) * 115086269));
                        var_20 = (min(var_20, (arr_4 [i_0 + 2] [i_3 - 1] [12])));
                        var_21 = (min(var_21, ((((arr_4 [1] [i_3 + 1] [1]) ? -14 : (arr_4 [4] [i_3 + 3] [4]))))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [i_2] [i_1] [i_0] = (arr_17 [i_1] [i_0] [i_4]);
                        var_22 *= (((arr_9 [0]) >> (((arr_9 [1]) - 2392982267))));
                        var_23 -= 218;
                    }
                }
            }
        }
    }
    #pragma endscop
}
