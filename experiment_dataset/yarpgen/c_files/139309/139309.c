/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(((var_10 ? var_4 : 2486842940631644006)), -1534082803)) % (((~var_8) | var_10))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = 1249177180;
                            var_13 = 2242530853254492840;
                            var_14 = ((((2242530853254492826 ? 4167303546 : 15437299214882963373)) + (min(34, (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [5])))));
                            var_15 = var_4;
                            var_16 = ((var_4 ? ((-(arr_8 [i_0 - 1] [1] [i_2] [i_3]))) : var_0));
                        }
                    }
                }
                var_17 = (1987634045419247278 + 1);
            }
        }
    }
    #pragma endscop
}
