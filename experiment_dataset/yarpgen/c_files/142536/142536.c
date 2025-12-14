/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 &= 3764919046;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = (((((131072 ? 8998403161718784 : var_6))) ? ((131072 ? 3178923705691463567 : 160)) : (((-131069 ? 1021896213 : -118)))));
                            arr_14 [i_0 - 1] [0] [i_2] [i_2] [i_3] = (var_12 % -131081);
                            var_18 = (min(var_18, (131076 != var_10)));
                            arr_15 [i_2] [i_2] [i_2] = (((((-3725685053400954614 ? -131069 : -131073))) ? var_2 : ((131081 ? 16334165052177989954 : -131069))));
                        }
                    }
                }
            }
        }
    }
    var_19 += 11;
    #pragma endscop
}
