/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (min(var_18, var_15));
    var_19 = (var_5 * var_0);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 -= ((-19501 & (((!(arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_21 = 19501;
                            var_22 -= (min((~32765), (-32767 - 1)));
                            arr_11 [i_0] [i_0] [i_1] [14] [i_3] [i_3] [i_3] = (((~var_6) ^ ((max(3780, 19518)))));
                            var_23 = (max(var_23, var_16));
                        }
                        var_24 = (((19518 ? var_7 : ((-32753 ? 32753 : 1)))));
                        var_25 += ((-19518 ? 1 : -19518));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((max(32757, var_10)));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_26 = (~(arr_4 [i_5 - 2] [i_5]));
        var_27 -= 1;
        var_28 = var_12;
    }
    #pragma endscop
}
