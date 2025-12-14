/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1693895459 | ((var_0 ? var_13 : (max(8190, var_2))))));
    var_18 = min(var_8, (((!(((176395811 ? var_0 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 -= (((((((arr_3 [i_1]) % (arr_1 [19])))) ? (((arr_1 [i_0]) ? (arr_3 [i_1]) : 10)) : ((min(3812772671, 94))))));
                var_20 = ((!(!1592918491)));
            }
        }
    }
    var_21 = ((!((((((var_6 ? -176395812 : 1))) ? (max(var_5, var_4)) : (((40 ? 1 : var_11))))))));
    #pragma endscop
}
