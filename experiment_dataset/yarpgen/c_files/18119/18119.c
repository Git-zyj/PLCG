/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (!974901778);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min((arr_5 [i_0] [i_0] [i_0]), 24));
                arr_6 [i_0] [i_1] [i_0] = ((!((((arr_1 [i_1 - 3]) + (arr_1 [i_1 - 2]))))));
                arr_7 [i_0] [7] = (min((arr_1 [i_0]), (((((-974901774 ? (arr_4 [i_0] [i_0] [i_0]) : var_13))) ? (-542586781 >= -20556) : (arr_2 [i_0] [i_0])))));
            }
        }
    }
    var_17 = ((!(((-49 ? (var_8 && 1838466354) : (-55 || 3968))))));
    #pragma endscop
}
