/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_14;
    var_18 = (max(var_18, ((max(18446744073709551592, 24)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] = 18446744073709551586;
                    var_19 *= (((-(arr_1 [i_0 - 1]))));
                }
            }
        }
    }
    var_20 = ((~((((4294967288 ? -3464701315220403371 : var_12))))));
    var_21 = ((-(((14 + var_6) ? (var_1 && 1685694999) : 4294967288))));
    #pragma endscop
}
