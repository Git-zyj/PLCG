/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (~-var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = var_11;
                    arr_7 [i_0] [i_0] [i_0] = (min(1330005720, 91043687));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_1] = (~var_3);
                        var_21 = (~(arr_1 [i_3 - 1]));
                        arr_11 [1] [i_1] [1] [i_1] [i_1] [i_1] = ((2232294129 ? (arr_5 [i_0] [i_1]) : var_17));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = 1;
                        arr_13 [i_1] [i_3] = 1330005720;
                    }
                }
            }
        }
    }
    #pragma endscop
}
