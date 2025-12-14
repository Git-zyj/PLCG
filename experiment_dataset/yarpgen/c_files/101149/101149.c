/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 ^= (var_8 * var_10);
                    var_15 = 4294967295;
                }
            }
        }
    }
    var_16 = ((0 * 263284566) ? (((((-2147483647 - 1) ? 18446744073709551603 : (-2147483647 - 1))) * 2881573955)) : 6610404985599255459);
    var_17 = var_10;
    var_18 = (max(var_18, var_4));
    #pragma endscop
}
