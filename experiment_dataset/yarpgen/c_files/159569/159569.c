/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((1 ? 56 : -2147483628)) * var_2));
    var_12 |= (min(var_1, (((((var_0 ? var_7 : var_4))) ? (max(var_10, var_7)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_7;
                var_13 = ((-((~(min(var_3, var_3))))));
            }
        }
    }
    #pragma endscop
}
