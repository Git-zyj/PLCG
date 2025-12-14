/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_8;
    var_13 = (min(var_13, (((!((((((var_8 ? 10483495535384386386 : var_6))) ? (max(var_8, 8525426344567082393)) : var_3))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (2063414407 ? var_5 : (arr_0 [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = ((!(arr_7 [i_0] [i_1 + 3] [i_2] [i_0] [i_3 - 3])));
                        arr_9 [i_3] = ((-(arr_4 [i_0] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
