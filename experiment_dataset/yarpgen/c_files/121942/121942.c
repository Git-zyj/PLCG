/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (arr_5 [i_0] [i_0] [i_1 + 1] [i_2]);
                    var_21 = (min(var_21, (((((((arr_1 [i_1 - 1] [i_2 + 1]) ? (arr_1 [i_1 - 1] [i_2 + 1]) : (arr_1 [i_1 - 1] [i_2 + 1])))) ? var_18 : var_12)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_22 = (arr_9 [i_3]);
        arr_10 [i_3] [8] = (arr_9 [i_3]);
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((((min(var_19, (((-1232177046 ? 1232177030 : 1232177045))))) >> (((~-1232177045) - 1232177044)))))));
        var_24 &= (min((min(3785, -2143425785)), (min(var_3, var_7))));
        var_25 *= min((arr_11 [i_4 + 2] [i_4 + 2]), ((((arr_12 [i_4 + 2]) / -127))));
        var_26 = (min((min((arr_11 [i_4 - 1] [i_4 - 1]), -6498104351294626259)), ((((arr_11 [i_4 - 1] [i_4 + 1]) ? (arr_11 [i_4 + 2] [i_4 - 1]) : (arr_11 [i_4 + 1] [i_4 + 2]))))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_27 += var_13;
        var_28 = (((((((arr_13 [i_5]) ? var_17 : 3785))) ? (((arr_12 [i_5]) ? (arr_11 [12] [i_5]) : (arr_15 [i_5]))) : ((((arr_13 [i_5]) ? var_5 : 50473))))) / (max(var_14, var_7)));
        var_29 = (max(var_29, -6594040926559229807));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_20 [i_6] = min((-4350287771604640299 / var_0), (arr_13 [i_6]));
        arr_21 [i_6] [i_6] = (min(((2147483647 ? -1232177030 : (arr_17 [i_6] [i_6]))), var_10));
    }
    #pragma endscop
}
