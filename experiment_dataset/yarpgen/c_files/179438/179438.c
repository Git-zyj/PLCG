/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(2147483647, 27))) - var_1)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] = 1655488883;
                var_15 |= ((((var_1 & (52 ^ -5445664233062067222))) / (max(1069891221, -5300617150028052853))));
            }
        }
    }
    var_16 += ((((max((max(-5300617150028052851, 0)), (((var_3 ? var_10 : var_8)))))) ? ((((((-9223372036854775807 - 1) ? var_3 : 1104377035))) ? ((-5300617150028052862 ? 44909 : 61285)) : (var_10 & 1))) : ((-5300617150028052838 ? 44924 : ((-970431347 ? var_6 : -1928082552))))));
    #pragma endscop
}
