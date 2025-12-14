/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (min((((arr_1 [i_0 + 2]) ? 31291 : var_7)), (arr_1 [i_0 + 1])));
                var_21 = (min((min(var_2, (arr_2 [i_0 + 2] [i_1]))), ((var_8 ? (arr_2 [i_0 + 2] [i_1]) : (arr_2 [i_0 + 2] [i_0])))));
            }
        }
    }
    var_22 = ((((~(~-1718948468))) ^ var_3));
    var_23 = (min(((((min(var_1, var_18))) ? (min(var_16, var_0)) : var_8)), (var_8 + -87)));
    #pragma endscop
}
