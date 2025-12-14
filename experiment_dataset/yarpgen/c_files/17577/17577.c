/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((!(arr_0 [i_0])));
        arr_2 [i_0] = ((-(((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_2))));
        var_20 = ((26 ? 2107627557 : 2187339737));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 |= (arr_1 [i_0] [i_0]);
                    var_22 = ((((!(arr_5 [i_0] [7] [i_2] [i_2]))) && (((var_14 ? var_12 : (arr_1 [i_0] [i_0]))))));
                    var_23 = ((((var_15 ? (arr_0 [7]) : 40611))) ? 18446744073709551600 : (!var_3));
                    var_24 = (arr_0 [i_2]);
                }
            }
        }
    }
    var_25 = var_12;
    var_26 = ((!(((23 << (18446743798831644672 - 18446743798831644652))))));
    #pragma endscop
}
