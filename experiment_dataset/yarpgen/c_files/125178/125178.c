/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= -var_8;
    var_16 = (min(3531682916, 1));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_17 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = var_0;
                    var_19 = (((arr_7 [i_1] [i_0 - 1]) ? var_2 : ((0 ? var_13 : 7445538905325523503))));
                }
            }
        }
        var_20 -= (arr_6 [i_0]);
        var_21 = (min(var_21, (var_8 * 211)));
        arr_9 [i_0] [i_0] = ((244 ? 7 : 6932961881920283429));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_22 = (min(var_22, ((((((min(var_1, var_9)))) / (min(-2880759517571460501, 0)))))));
        var_23 = (30204 + 13);
        var_24 = (-9223372036854775807 - 1);
    }
    #pragma endscop
}
