/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (max(var_20, (arr_5 [i_0])));
                        var_21 = ((0 ? (-127 - 1) : 5351012903989498547));
                        var_22 = (((arr_8 [i_0] [i_3 - 2] [i_2] [i_3]) == (arr_8 [i_0] [i_3 - 1] [i_2] [i_3])));
                        var_23 += (-127 - 1);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_24 *= 0;
                                var_25 = (max(var_25, (arr_14 [i_4] [i_1] [i_1] [i_1])));
                                var_26 = (max(var_26, (((2001414464 ? (arr_5 [i_0]) : (arr_17 [i_5 + 4] [i_5 + 3] [1] [14] [14]))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 += 438392580;
    }
    var_28 = (min(var_15, 1));
    #pragma endscop
}
