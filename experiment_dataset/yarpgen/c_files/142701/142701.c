/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_4 [i_0] [5] |= -1534063602;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 |= (((-1534063602 ? var_7 : var_1)));
                    var_14 = (((-var_3 ? ((var_9 ? var_9 : var_3) : (arr_5 [i_1] [i_2])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_15 = (max(var_15, (((!((min(2305843009213693952, (arr_13 [14] [14])))))))));
        var_16 -= (var_10 * ((((min((arr_11 [12]), -12684))) ? ((var_9 ? var_3 : var_7)) : var_1)));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_18 [i_4] = (max((((var_8 ? (arr_17 [i_4 + 1]) : var_1))), (max(var_0, ((2305843009213693952 ? var_0 : var_2))))));
        var_17 = ((-1534063602 ? var_3 : ((min(12684, (arr_14 [16]))))));
        var_18 = (max(var_18, var_3));
        var_19 = (var_0 ? (min(var_10, var_7)) : (((((var_6 ? var_9 : 29695))) ? ((var_3 ? -1534063602 : var_8)) : ((0 ? -17697 : var_5)))));
    }
    var_20 = 1534063602;
    #pragma endscop
}
