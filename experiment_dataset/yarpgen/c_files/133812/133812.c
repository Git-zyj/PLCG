/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [6] [i_1 + 1] [i_1] [6] [i_3] [i_4] = (-((0 ? 0 : 18446744073709551601)));
                            arr_15 [i_4] [i_3] [i_1] [i_1] [i_0] = var_1;
                            var_18 = ((-(var_14 / var_16)));
                            arr_16 [i_1] [i_1] = (arr_11 [i_4] [i_3] [17] [i_0]);
                        }
                    }
                }
            }
            arr_17 [i_1] [i_1] = (arr_1 [1] [i_1]);
            arr_18 [i_1] [i_1] = ((var_5 ? (arr_4 [i_1 - 2] [i_1 + 2] [i_1]) : (arr_4 [i_1 - 2] [i_1 + 2] [i_1])));
            var_19 = ((-930334151 ? (arr_1 [i_1 + 2] [i_1 - 2]) : (arr_1 [i_1 + 2] [i_1 + 2])));
            arr_19 [i_1] = (arr_10 [i_1] [i_1] [i_0] [17] [i_1 - 1] [i_0]);
        }
        var_20 ^= (arr_2 [i_0]);
        arr_20 [10] [i_0] = (arr_0 [i_0]);
    }
    var_21 = var_10;
    #pragma endscop
}
