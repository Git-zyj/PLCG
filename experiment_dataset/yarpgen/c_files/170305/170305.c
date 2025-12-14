/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (!0);
                var_14 = (max(((-118 ? (arr_2 [i_0] [i_1]) : -25)), 9084));
                arr_6 [i_0] = var_11;
                var_15 = (min(var_15, (((1 << (((((var_3 | var_6) | (0 ^ -9105))) + 151)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_16 += (((-11046 / -47) && (55 + 46)));
                    arr_15 [i_3] = ((-5 ? (((((var_3 <= var_11) != var_5)))) : var_1));
                }
            }
        }
    }
    var_17 = (((((9223372036854775807 > var_7) - (var_7 > var_6))) << (var_4 + 6379167289192738917)));
    #pragma endscop
}
