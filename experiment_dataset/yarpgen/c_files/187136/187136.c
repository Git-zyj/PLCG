/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_9;
    var_17 = ((-(min(var_6, ((2147483636 ? 2047 : var_6))))));
    var_18 = (min(((((((var_10 ? var_10 : 1))) ? 1014766201 : (min(2342813079, 1))))), ((var_3 ? (max(1, -7580008141849567261)) : var_8))));
    var_19 = (min((max(var_4, (var_3 / 513987849))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((((arr_3 [i_1 - 1] [i_1 - 1] [i_1]) && (arr_3 [i_1] [i_1 + 2] [i_0]))));
                var_21 = (arr_3 [i_0] [i_1] [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
