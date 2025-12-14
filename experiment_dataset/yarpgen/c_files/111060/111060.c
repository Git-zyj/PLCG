/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 ? ((((!(((var_7 ? 137026080 : 3789303135))))))) : var_7));
    var_11 -= 3924445604;
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = max((((arr_2 [i_0]) ? 137026083 : 18446744073709551615)), ((((arr_3 [i_1] [i_0]) >= ((min(var_4, (arr_1 [i_0] [1]))))))));
                var_14 &= (arr_1 [7] [7]);
                var_15 = (min(var_15, ((!((min(((137026065 ? -29850237 : 1)), 9)))))));
            }
        }
    }
    #pragma endscop
}
