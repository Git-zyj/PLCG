/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((var_1 ? var_3 : 205))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (((((((0 ? 2856926360629871250 : var_8))) ? (arr_0 [i_0] [i_0]) : var_2)) % (((((~(arr_4 [i_0] [i_0] [i_0])))) ? var_4 : (var_3 / var_9)))));
                var_13 = ((((min(var_6, var_0))) ? (((var_8 <= 190) ? (((arr_1 [i_0] [i_1]) ? var_10 : var_6)) : var_1)) : var_4));
                var_14 = (((max(((4577709080049616224 ? var_7 : (arr_1 [i_0] [i_1]))), 0)) > (((arr_3 [i_0] [i_1]) ? (min(6424738049613696355, 203)) : (65535 ^ var_1)))));
            }
        }
    }
    #pragma endscop
}
