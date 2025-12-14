/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = min(((~((3431398201 ? 55 : 2129503463)))), 353010685);
                var_14 = ((!(arr_1 [i_1 - 2])));
                var_15 = ((1530778410 << (((((-10 + 2147483647) >> (-29 / 84))) - 2147483636))));
                arr_7 [i_1] [i_1] [8] = (((~70) ? (255043322 < 65) : ((36 ? 2428910817 : 933031175))));
            }
        }
    }
    var_16 -= min(((((min(var_6, var_6)) < ((var_9 ? 863569094 : var_5))))), (((~727889581) ? (((var_12 ? 126 : -85))) : ((-79 ? 61 : 2582911273)))));
    #pragma endscop
}
