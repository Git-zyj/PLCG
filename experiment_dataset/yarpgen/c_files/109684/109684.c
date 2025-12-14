/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min((arr_2 [i_2]), ((((min((arr_3 [i_0 - 3] [i_0 - 3] [i_2]), 3085783731))) ? 1209183562 : 2970177392))));
                    arr_7 [i_0] = -var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 += (min(((((((arr_12 [i_0] [5] [5] [0] [i_4]) ? (arr_4 [6]) : 4294967280))) ? (var_8 | var_7) : ((1209183564 ? (arr_9 [i_0] [i_1]) : var_8)))), ((min(-1875551550, (((arr_0 [i_0]) << (35412 - 35398))))))));
                                arr_13 [i_4] [i_3] [i_4] = var_8;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_2] [4] = (~3085783731);
                    var_15 &= ((((arr_8 [i_1] [i_1 - 2]) ? (arr_0 [i_0 + 3]) : var_11)));
                }
            }
        }
    }
    var_16 = 35406;
    #pragma endscop
}
