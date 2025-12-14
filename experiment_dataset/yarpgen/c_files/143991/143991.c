/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (arr_2 [i_1]);
                    arr_8 [i_2] &= (((arr_0 [i_1]) < (arr_6 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] = 400360824;

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_13 = (max(var_13, (((((((~(arr_17 [i_3] [i_5]))) + 2147483647)) << (var_1 - 2871107801))))));
                    var_14 = (arr_13 [i_3] [i_3] [i_3]);
                    arr_18 [i_3] [i_4] [i_3] [i_4] = 400360829;
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
