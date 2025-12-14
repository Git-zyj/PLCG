/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = ((((((18446744073709551591 ? (-127 - 1) : (-127 - 1)))) / (((arr_5 [i_0] [i_0]) * 3)))));
                var_11 ^= ((((var_0 * (arr_3 [2] [6]))) != (max((((arr_3 [i_0 - 1] [2]) >> (var_9 + 119))), (max(0, var_1))))));
            }
        }
    }
    var_12 = (var_7 ? 13530291488823370052 : var_6);
    var_13 = (min(9223372036854775807, 18446744073709551615));
    var_14 = var_5;
    #pragma endscop
}
