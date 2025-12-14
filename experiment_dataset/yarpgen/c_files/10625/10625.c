/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((max(2323149233723776545, (!1)))) ? (arr_1 [i_0] [i_0]) : 1));
                var_17 = ((((max((arr_3 [i_0]), var_0)) / 1)));
            }
        }
    }
    var_18 = (max(18446744073709551615, ((max(var_13, var_1)))));
    var_19 = (min(var_19, ((((((var_15 ? -var_2 : var_8))) ? var_15 : var_14)))));
    var_20 += (max(((var_1 ? ((379328156 << (var_5 - 723881757))) : var_8)), ((max(((var_13 ? var_12 : 1)), (2323149233723776545 == var_11))))));
    var_21 = var_8;
    #pragma endscop
}
