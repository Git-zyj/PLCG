/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 12972;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_7, ((max(var_13, var_9)))));
        arr_3 [19] [i_0] = (-12972 & 87);
        arr_4 [i_0] &= (arr_0 [i_0] [i_0]);
        arr_5 [1] = 20;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_9 [2] [8] = var_13;
        var_19 = var_8;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_20 = (max(var_20, var_6));
            arr_13 [i_2] [i_2] = (var_16 << var_16);
            arr_14 [i_2] [9] [i_2] = (((((2147483647 ? (arr_8 [i_2] [i_2]) : var_10))) ? var_16 : (arr_11 [i_1])));
            var_21 = (((arr_8 [i_1] [i_1]) << ((((var_4 ? -1080648680 : var_8)) + 1080648690))));
            arr_15 [2] [2] [i_1] &= (!13882276929209209371);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, (arr_20 [i_1] [i_3] [i_4] [i_1])));
                        arr_25 [i_3] [i_3] [12] [22] [i_3] = (arr_11 [i_3]);
                        arr_26 [i_3] [19] [19] [i_5 + 2] = (~11900511725154518963);
                    }
                }
            }
            arr_27 [i_3] = var_14;
        }
        var_23 = var_6;
        arr_28 [i_1] = ((var_3 ? (0 * 9223372036317904896) : (((min((arr_17 [i_1] [i_1]), var_10))))));
    }
    #pragma endscop
}
