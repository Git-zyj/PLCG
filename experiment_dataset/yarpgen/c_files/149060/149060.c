/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((120 ? var_7 : 164)));
        var_20 = (min(var_20, ((((((var_10 & var_6) & var_15)) * (((~(44 + 107)))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 |= ((((6634300685486085896 ? 4 : (5 && var_10))) ^ -6634300685486085903));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = (((((var_9 ? (max(var_9, var_2)) : (84 == 55)))) ? (117 ^ 1530732444) : ((1692471391 ? -0 : (0 - 10819261684457942899)))));
                    arr_9 [i_1] [i_1] [i_1] = (((((-((var_1 ? 1 : -45))))) ? (((var_13 ? var_9 : var_15))) : ((var_11 ? 1793691718249523439 : -45))));
                    arr_10 [i_2 + 2] [12] = var_1;
                    var_23 = ((((var_5 ? var_7 : 10)) & -1374739035));
                    arr_11 [i_1] [i_2] = -44;
                }
            }
        }
        var_24 ^= (-70 % var_10);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_25 = (-9223372036854775804 & var_8);
        var_26 = var_17;
        var_27 = (2329304755 + var_8);
    }
    var_28 &= ((33127 >> (var_14 + 28934)));
    #pragma endscop
}
