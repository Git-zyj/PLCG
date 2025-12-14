/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (((((((var_10 << (var_6 - 28571)))) ? ((var_10 ? var_7 : var_12)) : (((max(var_10, 1)))))) < var_4));
    var_14 = (~(((var_8 ? var_11 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((!(max((((arr_0 [8]) <= var_11)), 0))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = ((((var_3 > (arr_0 [i_0])))));
                            arr_14 [i_0] [i_3] [i_2] [i_0] [i_3] = (max((((9060959493945190307 & (arr_11 [i_0] [8] [4] [8] [1])))), (((((arr_1 [i_0] [i_0]) ? var_5 : (arr_10 [5] [i_3] [5] [5]))) + var_10))));
                            var_17 *= 9060959493945190301;
                            arr_15 [i_3] [i_3] [10] [i_1] [i_3] [i_0] = (((arr_10 [i_2 - 3] [i_3] [i_2 - 1] [i_2 - 1]) % (max(var_7, (arr_4 [i_2 - 1] [i_2 - 3] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
