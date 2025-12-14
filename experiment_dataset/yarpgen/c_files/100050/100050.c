/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (0 | 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((arr_3 [i_0] [i_0]) | (((((min(-117, 28797)))) - ((var_6 ? var_4 : 10))))));
                arr_5 [i_0] [i_1 + 3] = min(var_7, ((var_4 ? var_2 : (var_5 == var_10))));
                var_13 = (min((((((var_5 ? var_9 : (arr_3 [i_0] [i_1 - 1])))) ? (var_11 * var_4) : var_5)), (var_10 * -87)));
            }
        }
    }
    var_14 |= var_0;
    #pragma endscop
}
