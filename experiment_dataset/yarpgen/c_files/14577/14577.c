/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (4294967277 ^ 1495083837);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 -= ((((2108008542 >> (((arr_4 [i_0] [i_1]) - 23565)))) >> (((2108008547 >> 0) - 2108008522))));
                var_21 += (((-123 * var_7) == ((((arr_2 [i_1]) <= 2108008554)))));
            }
        }
    }
    var_22 -= ((((((var_14 || var_2) <= var_17))) >> (var_12 - 45)));
    var_23 = var_8;
    #pragma endscop
}
