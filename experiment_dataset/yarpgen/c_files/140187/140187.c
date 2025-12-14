/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = 18446744073709551614;
                arr_6 [18] [i_1] [i_1] = ((-134184960 <= ((~((4041208545 ? 56153 : 18446744073709551611))))));
            }
        }
    }
    var_13 = (min((((min(var_6, var_10)))), var_4));
    var_14 = (((var_4 ^ 1546827220) ^ (((((0 ? var_9 : var_11))) - 3039796173955483071))));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_15 ^= (((min(-2635483549, 1))) == ((var_6 ? (((2 ? (arr_3 [i_2] [i_2]) : var_7))) : (((arr_0 [i_2]) >> (var_2 - 1112))))));
        arr_10 [8] [i_2] = (arr_0 [i_2]);
    }
    #pragma endscop
}
