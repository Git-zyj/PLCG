/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 3] = (min((arr_2 [i_0] [i_1 - 1]), (min(11467, -33554432))));
                var_13 = (max(var_11, (arr_3 [i_0])));
                var_14 |= 26717;
                arr_6 [i_1] [i_0] = ((-var_8 ? var_0 : var_6));
            }
        }
    }
    var_15 ^= max(27087, (((var_5 ? 58 : 1))));
    #pragma endscop
}
