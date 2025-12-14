/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_1 + (((86 ? var_7 : 0)))))) <= (max(var_8, -126))));
    var_13 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_0] [i_0] = var_2;
                    arr_10 [i_0 + 1] [13] [4] [i_0] = (arr_8 [i_0] [i_1 - 1] [i_2]);
                    arr_11 [i_0 + 1] [i_1] [i_1] [i_2] = ((var_5 != (min(-363036383, var_3))));
                    arr_12 [i_0 + 1] = (((min((arr_0 [i_0 - 1] [i_1 + 4]), (arr_0 [i_0] [i_2]))) ? (((arr_0 [i_2] [i_0 - 1]) >> (arr_0 [i_0 + 1] [i_2]))) : (~53034)));
                }
            }
        }
    }
    #pragma endscop
}
