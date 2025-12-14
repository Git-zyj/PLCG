/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_12 && var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((max(6095945516286608609, 5610))) ? 0 : (((max(var_5, var_6)) >> (2223641627 - 2223641609))));
                var_14 = (max(var_1, ((-(var_1 - var_4)))));
                arr_7 [i_0] = (((((((var_3 << (var_8 - 2875582282)))) ^ ((5579 ? 9223372036854775802 : var_4)))) | 8224608292624182487));
                arr_8 [i_0] [i_0] [i_0] = -5579;
            }
        }
    }
    var_15 *= ((5601 ? -5 : (max(((112 ? var_12 : var_0)), ((27101 ? 43782 : var_7))))));
    #pragma endscop
}
