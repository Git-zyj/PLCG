/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((2 & 3125028476), 60));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 ^= (arr_2 [i_0] [i_0]);
        var_20 = (((((0 ? (arr_2 [i_0] [i_0]) : 59))) / 1152886320234758144));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (min(var_21, (-2147483647 - 1)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_22 ^= ((((((arr_7 [i_1]) ? 1152886320234758143 : (arr_7 [i_1])))) ? ((57950 ? 0 : 32758)) : 0));
            var_23 = (20574 + 0);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_24 ^= 3;
            var_25 = 65535;
        }
        var_26 &= ((-2 ? 2103 : 0));
        arr_11 [i_1] [i_1] = (((-1152886320234758144 | 2108) / (((-127 - 1) ? 1152886320234758144 : -1208756158))));
        arr_12 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_27 = (((((min(-6918087, 8842944367455540211))) ? 73 : 3746772025588599870)));
        arr_16 [i_4] |= ((((max(63433, 0))) ? (((~((max((arr_15 [i_4] [i_4]), 0)))))) : (-5372204791727905064 + 45650)));
    }
    var_28 = (max((max(7168, (-494769923 - 152))), 2147483647));
    #pragma endscop
}
