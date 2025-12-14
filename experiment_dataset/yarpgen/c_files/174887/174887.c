/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((8192 | ((0 / (0 != 4611677222334365696)))));
                arr_5 [i_1] = 2046876924;
                arr_6 [i_1] [i_1] [i_1] = ((~(((!(arr_0 [i_0] [i_0]))))));
                arr_7 [i_1] = 0;
            }
        }
    }
    var_10 = ((((((17371068856147471539 >> (8192 - 8190))) ^ 0)) - -18446744073709551615));
    var_11 = ((((((0 >> (var_0 + 1750818599034138820)))) ^ (max(1666356768121336278, var_5)))));
    #pragma endscop
}
