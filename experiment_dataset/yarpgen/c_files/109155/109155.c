/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0 - 1] = (((arr_0 [i_0 + 1] [i_1]) * 7));
                arr_8 [i_0] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_15 [i_3] [4] = (arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [1]);
                            arr_16 [i_0] [i_0] [i_0] [i_3] = ((((arr_12 [5] [i_1] [i_1] [i_3]) / (arr_12 [i_0 - 1] [i_1] [i_2] [i_0 - 1]))));
                        }
                    }
                }
                arr_17 [i_0 + 3] [i_1] = ((+(max((arr_11 [i_0 + 2] [i_0 - 1]), (arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
            }
        }
    }
    var_11 = ((max(var_4, var_2)));
    #pragma endscop
}
