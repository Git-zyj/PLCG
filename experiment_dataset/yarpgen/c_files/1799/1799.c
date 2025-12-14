/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-9223372036854775807 - 1) ? var_7 : var_7));
    var_14 = 0;
    var_15 = (min(var_15, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = -var_4;
                var_16 = (min(var_16, (((arr_4 [i_1] [18]) * (((max(var_2, (-9223372036854775807 - 1)))))))));
                var_17 ^= ((46881 ? (min((min(3781502792807943436, var_9)), var_1)) : (38963 * -10892)));
                arr_6 [i_1] [15] = ((-var_9 ? (min((9223372036854775807 - var_11), (arr_0 [i_0]))) : (arr_0 [i_0])));
            }
        }
    }
    var_18 = (((((max(var_3, -64))) & var_1)));
    #pragma endscop
}
