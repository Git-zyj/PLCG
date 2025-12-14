/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_2] [i_0] [i_0]);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((!(((~(arr_6 [i_1] [i_1] [i_1]))))));
                        var_17 = (~var_2);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_13 [i_4] [i_0] [i_0] [i_0] = ((!((max((arr_5 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0]))))));
                        var_18 = (arr_12 [i_0] [15] [i_1] [i_2] [i_4]);
                        arr_14 [i_0] [i_2] [i_1] [i_1] [8] [i_0] = (4294967295 >= var_8);
                    }
                }
            }
        }
    }
    var_19 *= var_14;
    var_20 -= (-((var_4 * (0 % var_11))));
    #pragma endscop
}
