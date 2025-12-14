/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max(var_11, ((((((-2147483647 - 1) ? var_3 : var_1))) ? (var_4 || var_3) : var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min((((var_12 >> (((var_10 - var_15) - 2438982276232702328))))), 5250995669701664253));
                arr_6 [i_1] = (var_0 + var_9);
            }
        }
    }
    #pragma endscop
}
