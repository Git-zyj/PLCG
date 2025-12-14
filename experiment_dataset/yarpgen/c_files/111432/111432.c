/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 != (((((18446744073709551596 ? 1 : (-2147483647 - 1))) <= -1)))));
    var_21 = (max(var_8, var_17));
    var_22 |= ((var_5 ? (((max((var_10 >= var_18), var_14)))) : ((var_11 ? var_10 : (min(4095, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (((var_2 >= 179) ? ((-310 % (arr_3 [i_1 - 1] [i_1]))) : ((min(-1, 128)))))));
                var_24 -= ((-310 - (min(((min(-4100, -21971))), -24965))));
            }
        }
    }
    var_25 = -67090841;
    #pragma endscop
}
