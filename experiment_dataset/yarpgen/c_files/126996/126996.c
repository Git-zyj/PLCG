/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (((-((min(var_14, (arr_1 [i_0] [i_1])))))) != (((arr_1 [i_0] [i_1]) ? (arr_5 [i_0]) : (arr_4 [i_0] [i_2] [i_0]))));
                    arr_6 [i_2] [i_2] [i_2] [i_1] = min((min(59281, -5774590720645169996)), (((1 ? 4095 : -5774590720645169994))));
                    var_18 += 255;
                    var_19 = (arr_1 [i_0] [i_0]);
                }
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
