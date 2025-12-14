/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = var_6;
                var_11 = (((((max(var_8, (arr_3 [12])))) ? (arr_0 [i_0]) : ((var_5 ? var_3 : -6414599572827178210)))));
                arr_4 [14] [i_1] &= arr_1 [0] [0];
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (arr_3 [i_1]);
                            var_13 &= ((!(((6414599572827178221 ^ 6414599572827178198) == -6414599572827178240))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_14 = (min(var_14, (((!(((~(arr_3 [i_5])))))))));
                var_15 = ((~((1534 >> (((arr_12 [i_4]) - 58484))))));
            }
        }
    }
    var_16 = var_2;
    var_17 = var_0;
    #pragma endscop
}
