/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [10] = (arr_0 [i_0] [i_0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 &= ((!(arr_6 [i_0] [i_0] [i_2])));
                        var_21 = (min(var_21, (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2])));
                        var_22 = (max(var_22, (((var_9 >> (((~var_16) + 179)))))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_0] [1] [i_0] = 34359738367;
                            arr_13 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_0] [4] = (~(arr_5 [i_4 - 1] [5] [5] [i_0]));
                            var_23 = ((~(arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
