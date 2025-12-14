/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(-66, 101))) / ((88 ? -var_7 : (~var_13)))));
    var_20 = ((12 ? 4294967295 : 11));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -56778409;
        var_21 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_22 = -88;
            var_23 = (-var_5 != var_7);
            arr_6 [i_0 - 2] [i_0 - 2] = (((((arr_3 [i_1] [9]) ? ((var_17 ? (arr_4 [i_1] [i_0]) : var_12)) : 85))) ? (max((((-66 ? 19839 : -1))), ((17140 ? (arr_1 [i_1]) : var_16)))) : (((max(29439, -88)))));
        }
    }
    #pragma endscop
}
