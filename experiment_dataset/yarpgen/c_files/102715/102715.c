/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((min((var_6 % 2255970037), 131)));
                var_19 = ((-(max(2255970037, (arr_1 [i_1 - 1] [i_0 - 1])))));
            }
        }
    }
    var_20 = ((((min(((max(39, 32))), 11))) ? var_3 : var_6));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_21 = (max(var_21, ((((((var_0 ? var_1 : var_2))) ? 150 : var_14)))));
        arr_9 [i_2] [i_2 + 2] = 78;
    }
    #pragma endscop
}
