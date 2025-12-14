/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = ((((var_4 << (var_5 - 8653337321305061685))) << (25183 - 25180)));
    var_22 ^= max((((~var_14) ? ((var_4 ? 18446744073709551615 : var_3)) : var_4)), var_3);
    var_23 = max(var_2, (-32767 - 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_0 [i_0] [i_1]) ? (((-(arr_3 [2])))) : (max(0, var_10))));
                var_24 += (max((-7092547107246285299 >= 1), 540187401));
            }
        }
    }
    #pragma endscop
}
