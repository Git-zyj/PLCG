/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_1 / ((6350 ? var_3 : 1))))), ((var_3 ? 1 : (var_8 / 12)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [0] = ((-1014852599 ? (((arr_3 [i_0]) | ((1 ? 1315 : (arr_2 [i_0]))))) : (!-var_4)));
        var_12 = (arr_3 [i_0]);
        var_13 *= min((max(((29476 ? (arr_0 [i_0] [i_0]) : var_7)), (arr_1 [i_0]))), ((max((arr_2 [i_0]), ((var_2 ? (arr_2 [i_0]) : (arr_2 [10])))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_13 [5] = (((((((min(65535, 1))) ? var_4 : (arr_7 [i_3] [i_3])))) ? (arr_11 [i_1] [i_2] [i_3]) : ((((9223372036854775807 <= -32765) || (((21960 ? var_5 : -4655609135795269763))))))));
                    arr_14 [i_1] [i_2] [i_3] [6] = (min((((((max(-12608, var_6))) && (((var_0 ? (arr_8 [i_1] [i_3]) : 61120)))))), -32765));
                }
            }
        }
        var_14 = (min(var_14, (32176 & 120)));
        arr_15 [i_1 - 1] [10] = 4294967295;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_15 = (max(4132179839838772456, (((((~(arr_16 [18])))) ? (arr_19 [i_4]) : -1))));
        var_16 *= ((((((arr_17 [i_4] [3]) + (arr_17 [i_4] [i_4])))) ? -9223372036854775798 : -8070450532247928832));
        var_17 = (1 < 1);
    }
    #pragma endscop
}
