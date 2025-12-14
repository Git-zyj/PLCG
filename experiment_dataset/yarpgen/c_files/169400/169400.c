/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_1, var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] [i_1] &= ((-var_13 ? var_6 : 286634786));
            var_15 = -669443685;

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_16 -= (+-15639702734598728827);
                var_17 = (var_12 ? (~var_3) : var_8);
            }
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_18 = (((arr_12 [12] [12] [i_0] [i_5]) ? (((1003358401 ? 1735472292 : -1158956574))) : var_6));

                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            var_19 = (~(-1485438561 / 1417534312));
                            var_20 = (arr_3 [i_6 - 3]);
                        }
                        arr_21 [i_5] [i_0] [2] [i_3] [i_0] = ((~(arr_17 [i_0] [i_4] [i_4 + 1] [i_5])));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_21 = var_8;
                            var_22 *= ((-1445635198 || (~var_3)));
                        }
                    }
                }
            }
            var_23 = var_4;
        }
        var_24 = var_7;
        var_25 = ((255488996 ? 442315022 : 669443684));
    }
    var_26 = (((!(((262143 ? var_2 : var_10))))));
    #pragma endscop
}
