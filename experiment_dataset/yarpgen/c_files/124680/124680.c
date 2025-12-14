/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((var_17 | (~var_13)))), (max(var_10, (min(0, 1065312061))))));
    var_19 = ((((((((var_12 ? 10 : var_10))) ? var_14 : var_8))) ? var_7 : var_1));
    var_20 = (var_8 - 3);
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 &= (~var_3);
                arr_6 [i_1] = (((((-(arr_1 [i_1] [i_1]))) + 2147483647)) << (((((3 << var_8) ? (((var_0 || (arr_3 [i_0] [i_0])))) : var_7)) - 1)));
                arr_7 [i_1] [i_1] = var_6;
            }
        }
    }
    #pragma endscop
}
