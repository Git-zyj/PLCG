/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 -= ((((~(max(1952618751, var_14)))) / var_12));
    var_19 = (max(var_19, (((((max(-1749, (1749 * var_9)))) ? ((((var_3 && var_7) ? var_15 : (var_2 && var_16)))) : (1 / var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((!(arr_1 [i_0] [i_0])));
                var_21 = ((!((((arr_2 [i_1 - 1] [i_1]) ? -1727 : (arr_2 [i_1 + 2] [13]))))));
                var_22 ^= (((((arr_1 [i_1 - 1] [i_1 + 2]) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 2] [i_1 + 1]))) * ((min((arr_4 [i_0] [i_0] [i_1]), ((!(arr_4 [i_0] [i_1] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
