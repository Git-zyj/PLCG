/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = (max(var_20, (((16465 ? 16455 : -16456)))));
    var_21 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((-(10338501046064719812 + 9048))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = -26454;
                            var_23 = (!1);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] = ((!((((arr_4 [i_0]) ? 11500819355526905465 : (arr_4 [i_1]))))));
                    var_24 = (arr_15 [i_1 + 1]);
                    var_25 = (max(var_25, var_18));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_26 = (min(var_26, (arr_10 [i_1 + 1] [i_1 + 1])));
                    var_27 = (min(var_27, (!107)));
                }
                var_28 = (((168 ? -26442 : 1)));
            }
        }
    }
    #pragma endscop
}
