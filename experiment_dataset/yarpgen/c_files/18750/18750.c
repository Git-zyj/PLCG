/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(--2779)));
    var_12 |= (max((min(((65535 ? 2556090063873537709 : var_5)), (-127 - 1))), var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (((((arr_6 [i_1]) ? ((-15449 ? var_0 : (arr_8 [i_1] [2] [2] [i_3]))) : var_8)) / (((var_1 ? (min((arr_6 [i_1]), (arr_7 [i_1]))) : (min((arr_0 [i_0]), (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1]))))))));
                        var_14 = (max(var_14, (max(65, (max((min(var_1, 0)), (arr_4 [i_1 + 1] [i_1 + 1] [i_2])))))));
                        var_15 = ((((min(61, 2590228961))) ? ((((-1 - 248) ? 1 : -3177765144354620355))) : (min((arr_4 [i_2 + 4] [i_3 - 1] [i_1]), -1))));
                        var_16 = 127;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((var_4 != (arr_7 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_17 |= (((((var_10 ? (arr_8 [i_6] [i_5] [i_4] [i_6]) : (arr_6 [i_6])))) ? 1 : (arr_18 [i_4] [i_6])));
                    arr_23 [i_5] [i_5] = (((-2147483645 ? 1 : var_7)) < 611383363);
                    arr_24 [i_5] [i_5] [i_6] = (~102);
                }
            }
        }
        var_18 ^= (((((arr_8 [i_4] [i_4] [i_4] [i_4]) + 9223372036854775807)) << (var_6 - 9364118101716009237)));
        var_19 = ((arr_0 [i_4]) + (var_5 || 24));
    }
    var_20 = ((((((((-86 - 1) + 2147483647)) >> (!1)))) ? var_1 : 2147483647));
    #pragma endscop
}
