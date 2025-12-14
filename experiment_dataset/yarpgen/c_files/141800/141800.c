/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((769985872 >> (min(769985872, var_1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_21 = (max(var_21, ((((~(arr_0 [i_0] [i_0])))))));
        var_22 -= (arr_0 [i_0 + 2] [i_0 - 1]);
        arr_2 [i_0] [17] = ((12049 ? (((arr_0 [3] [3]) + 769985857)) : (!var_14)));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_23 ^= (arr_1 [i_1] [i_1]);
                            arr_16 [i_2] [14] [1] [13] [i_2] = var_18;
                            var_24 = ((-(arr_1 [i_4] [19])));
                            arr_17 [i_1] [10] [20] [i_1] [i_2] = (arr_14 [i_2 - 2] [i_3] [i_3] [i_3 - 2] [i_2] [i_2 - 2] [i_3 - 2]);
                            var_25 = (arr_6 [i_0 + 2]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [i_0] = (arr_9 [i_5]);
                        var_26 = (~var_7);
                    }
                }
            }
        }
        arr_24 [i_0] = (769985831 == 769985872);
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_33 [1] = var_0;
                    arr_34 [i_7] = ((max(var_5, var_19)));
                }
            }
        }
    }
    #pragma endscop
}
