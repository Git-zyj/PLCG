/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] &= ((((((var_10 ? (arr_1 [i_0]) : var_6))) ? -158506825 : (16565295517111886232 - var_7))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((arr_1 [i_3 - 1]) ? -2352738110286743119 : (-872553257952148205 * 0))))));
                            arr_12 [i_3] [i_3] [i_3] [11] [i_3] [i_1] = -1237506961;
                            var_21 = (arr_10 [i_2] [i_1] [i_3 + 3] [i_3] [i_3 - 1]);
                            var_22 = var_8;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_18 [i_4] |= var_13;
                var_23 ^= (max(((-30346 & (arr_14 [i_5]))), var_13));
                var_24 += var_2;
            }
        }
    }
    var_25 |= (((max(((var_4 ? var_19 : 158506825)), (min(var_15, var_8)))) >= var_15));
    var_26 = var_6;
    #pragma endscop
}
