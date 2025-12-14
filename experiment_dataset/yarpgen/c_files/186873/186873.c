/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (var_7 + var_3);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 ^= (((arr_3 [i_2 + 1] [i_2 - 2] [i_3]) || (arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1])));

                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            var_14 = (((((arr_0 [i_0]) ? var_9 : var_7)) + ((-(arr_8 [i_0] [i_0] [i_2] [i_3] [6])))));
                            arr_14 [i_2] [18] [i_2] = -var_1;
                            arr_15 [i_2] = (((arr_4 [19]) ? (arr_13 [i_2] [i_2 - 2] [24]) : (arr_11 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_4 - 1] [i_4 - 1])));
                        }
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_15 ^= (var_5 >> 1);
                            var_16 = (((arr_10 [i_5 + 1] [i_5] [i_5 + 2] [i_2] [i_5] [i_5] [i_5]) < 1700906981));
                        }
                        var_17 = (((16383 * var_2) ? var_6 : var_7));
                    }
                }
            }
        }
    }
    #pragma endscop
}
