/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 28472));
    var_20 |= ((var_7 * ((~((var_14 ? var_0 : var_5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (!var_9);
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 += ((!(arr_6 [i_0] [i_0] [i_0] [i_0])));
                                var_23 = (((arr_10 [i_3] [i_3] [i_2] [1] [i_0] [i_0]) ? var_13 : ((37070 ? 56 : (arr_7 [i_0] [i_1] [i_4] [i_1])))));
                            }
                        }
                    }
                    var_24 += (((arr_13 [i_2] [2] [i_2] [i_2] [i_1] [i_1]) % -563316129));
                }
            }
        }
        var_25 |= arr_8 [i_0];
        var_26 = ((-(arr_3 [i_0] [i_0])));
    }
    var_27 = var_6;
    var_28 = (((!var_4) % (((34700 & 37063) ? -var_4 : 1))));
    #pragma endscop
}
