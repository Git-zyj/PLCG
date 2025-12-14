/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_3] = ((((((7056 || -28687) - -var_17))) ? ((max(46071, 102))) : (max(-1213795504, -28687))));
                            arr_13 [i_0] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [3] = (max(var_2, ((max(1213795497, var_16)))));
                            arr_14 [i_0] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0 - 2] = ((28691 ? var_18 : (((((1213795504 ? var_1 : var_5)) <= 28686)))));
                            arr_15 [3] [i_1 + 1] [i_1 + 1] [3] [i_1 + 1] = ((((max(((var_16 ? 3102787137 : var_8)), (arr_7 [i_3] [i_2 + 1] [i_0 - 1])))) ? var_1 : ((((~757063002) != ((-1213795505 ? 205 : 4886024287547697574)))))));
                            arr_16 [i_3] [i_3] [i_3] [i_3] = 46071;
                        }
                    }
                }
                arr_17 [i_0] [i_1 + 1] = ((((-(max((arr_1 [i_0]), 757063002))))) ? ((2147483647 ? (arr_2 [i_1 + 1] [i_0 - 1]) : (arr_9 [i_0 - 4] [i_0 - 3] [i_1 + 1] [i_1 + 1] [i_0 - 3] [i_0 - 4]))) : (((-var_18 - (arr_7 [i_0 - 3] [i_0 - 3] [i_0 + 1])))));
            }
        }
    }
    var_20 = ((((((max(28683, var_17))) ? ((20867 ? 28686 : -1497378073)) : ((var_4 ? var_6 : var_17)))) - ((-var_17 >> (var_12 - 3011021003)))));
    #pragma endscop
}
