/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((32767 ? 1 : -45)))) ? (min(var_7, (max(var_7, var_1)))) : var_5);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, ((((arr_1 [i_0 - 2]) ? var_1 : var_9)))));
        var_14 = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : -52));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 *= (max((((((1531602415794592004 ? (arr_1 [i_1]) : var_3))) ? (arr_2 [i_1]) : (max(var_5, 39)))), (~-52)));
        arr_4 [8] = (((~(arr_0 [i_1] [i_1]))) - (((((-27 ? 39 : 1531602415794592004))) ? 52 : -487)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_16 = ((-(((arr_6 [i_2]) ? (arr_0 [i_2] [i_2]) : var_2))));
        var_17 = (min(var_17, (var_5 <= var_8)));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_13 [i_3] [i_3] = ((1 - (((arr_8 [i_3]) ? (arr_1 [i_3]) : (arr_8 [i_3])))));
                    var_18 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
