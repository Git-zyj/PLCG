/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((((min(87, var_10)))) < var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max((((arr_0 [i_1]) ? (((376676614 ? (arr_3 [i_0 + 1] [i_0] [i_1]) : var_9))) : 284019682)), 818306421));
                var_21 = (((arr_3 [i_0] [5] [i_0]) * ((min((((arr_3 [i_0 - 2] [i_0 + 1] [i_1]) && var_14)), ((!(arr_1 [i_0]))))))));
                var_22 *= min((arr_2 [i_1]), (max((max(var_12, var_2)), (-818306421 ^ var_2))));
                var_23 = (min(var_23, (-96 ^ var_19)));
            }
        }
    }
    #pragma endscop
}
