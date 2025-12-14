/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_7;
    var_21 = (min(((min(((min(var_15, var_15))), (~var_5)))), (min((min(12111444394162023695, 1)), ((min(var_17, var_19)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = ((((!(arr_3 [i_0] [i_0])))));
                var_23 += ((-(max(1814359902, (arr_2 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
