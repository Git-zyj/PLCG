/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 = 1;
                        var_16 -= (((((max((arr_2 [i_0] [i_0]), ((((arr_9 [14] [i_1] [i_3] [16]) > (arr_8 [i_0] [i_1] [i_2] [i_3])))))))) > (arr_6 [i_2] [10] [i_0])));
                    }
                }
            }
        }
        arr_11 [i_0] = -31702;
        var_17 = var_7;
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_18 = (arr_3 [i_4] [i_4 + 1]);
        arr_14 [i_4] = (arr_6 [i_4] [1] [i_4]);
    }
    var_19 = (var_8 ? ((max(var_13, var_7))) : var_11);
    var_20 += -21459;
    var_21 = (min(var_21, (((-8537917583859197964 % (var_5 / var_12))))));
    var_22 = (min(var_0, (~var_10)));
    #pragma endscop
}
