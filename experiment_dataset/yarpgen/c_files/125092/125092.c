/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 |= ((((!(arr_1 [i_0 - 1]))) ? 8 : (((((arr_1 [i_0 + 2]) <= var_12))))));
                arr_6 [i_0 - 3] = (((((223 ? (arr_1 [i_0 - 1]) : (arr_5 [i_1 + 1])))) ? ((min(-32, var_13))) : (max((arr_0 [i_0 - 2]), (arr_1 [i_0 - 2])))));
            }
        }
    }
    var_19 = (min(var_19, (((((((((40 ? var_6 : 0))) ? ((96 ? 127 : 2423734658)) : var_12))) > (!var_14))))));
    #pragma endscop
}
