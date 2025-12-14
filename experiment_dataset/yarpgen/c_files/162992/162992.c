/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_0, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = 0;
                    arr_8 [i_0] [i_1] = (var_15 == var_9);
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_19 -= 1;
                    arr_11 [i_0] [i_0] = ((~(~var_1)));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] = (!549621596160);
                        arr_15 [i_0] = (1401685411438942472 ? 881265351260750010 : -881265351260750011);
                    }
                }
                var_20 = var_10;
                var_21 -= (!(((0 ? var_0 : 1))));
                var_22 = var_1;
            }
        }
    }
    var_23 -= var_1;
    #pragma endscop
}
