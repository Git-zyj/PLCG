/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-var_4 ? var_13 : var_13))) * var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 *= (((arr_3 [i_1] [i_0] [i_0]) > (min((arr_4 [i_1 + 3]), (arr_4 [i_1 + 2])))));
                arr_5 [i_1] [i_1] [i_0] = (var_13 || ((((arr_1 [i_0] [i_1 - 1]) | (min(var_7, var_6))))));
                var_18 = (max(var_18, (var_5 | 0)));
                arr_6 [i_0] [i_1] = (((((((min((arr_3 [9] [i_1] [0]), var_7))) ^ (~-965265900090370856)))) ? (!var_9) : var_3));
            }
        }
    }
    var_19 = ((139 ? -2137377318 : -283053517));
    #pragma endscop
}
