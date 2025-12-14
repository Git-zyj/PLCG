/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, var_3));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = var_3;
                    var_15 = var_5;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_16 &= ((!(!var_6)));
                        var_17 |= -6730582264086080995;
                        arr_10 [i_3] [i_3] [i_2] [4] [i_0] = -var_10;
                        var_18 *= (!var_2);
                    }
                    var_19 *= (max((min(var_10, (min(var_0, var_6)))), ((max((-2147483645 & var_8), (var_5 | var_7))))));
                }
            }
        }
        var_20 = ((var_2 ? 59 : (min((max(4229097346, 30414)), 2147483624))));
    }
    var_21 += (~var_11);
    #pragma endscop
}
