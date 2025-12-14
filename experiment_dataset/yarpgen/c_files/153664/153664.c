/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((((((8912 ? 2908420633 : 4090224353)))) ? ((min(53360, (arr_1 [i_0 - 1] [i_0])))) : (arr_0 [i_0] [i_0])));
                    arr_8 [i_0] [i_1 - 1] [i_2] = 204742970;
                    var_21 = var_18;
                }
            }
        }
        var_22 = ((8912 ? (-5935345136077738181 - -var_8) : 3580643082));
        var_23 = (((arr_7 [i_0 - 1]) ? (((-115 ? 25 : (1 || 1)))) : ((-(((arr_6 [i_0] [i_0] [10]) ? 5935345136077738181 : (arr_7 [i_0 - 1])))))));
        arr_9 [i_0] = (~var_11);
        var_24 += ((((((arr_7 [i_0 - 1]) ? (arr_7 [i_0 - 1]) : (arr_7 [i_0 - 1])))) ? ((5935345136077738196 ? 1 : var_8)) : (((arr_2 [i_0] [6]) ? var_15 : (((var_4 ? 56604 : (arr_1 [0] [0]))))))));
    }
    var_25 &= ((1 ? var_0 : 1));
    #pragma endscop
}
