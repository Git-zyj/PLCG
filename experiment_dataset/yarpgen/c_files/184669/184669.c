/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(((151 ? var_8 : (23663 + -109))), 160));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_16 -= (arr_5 [i_0]);
                        var_17 |= (max(var_4, (((!0) ? var_3 : var_2))));
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_1] = (((max((arr_0 [i_0] [i_0]), 3149974636)) > (((var_0 ? -var_14 : 96)))));
                }
            }
        }
    }
    var_18 = (min(var_0, -var_9));
    var_19 |= ((((-(var_3 ^ var_4)))) ? (max(-7972, (67 % 27562))) : var_1);
    #pragma endscop
}
