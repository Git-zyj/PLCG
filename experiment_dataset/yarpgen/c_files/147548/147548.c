/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_11 += (arr_2 [i_0 + 1]);
            var_12 ^= ((((arr_3 [4]) - (arr_7 [7] [7] [i_1 - 1]))));
            arr_8 [i_1 - 3] = (!3462579650960571246);
        }
        var_13 = (((arr_1 [i_0 + 1]) <= (arr_2 [i_0 + 1])));
        var_14 = (arr_0 [6]);
    }
    var_15 = (((((((var_2 * var_7) % ((max(var_6, 18012))))) + 9223372036854775807)) << (((min(-29451, (min(var_4, var_3)))) - 1))));
    var_16 = var_3;
    #pragma endscop
}
