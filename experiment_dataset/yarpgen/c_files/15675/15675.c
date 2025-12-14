/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((!((max(var_10, (min(4294967295, var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((max((arr_1 [i_0] [i_0]), (((-(arr_3 [i_0] [i_1])))))))));
                var_20 -= (min(1645800977, 1256307373343441749));
                var_21 = (min(var_21, ((max(((-(arr_1 [i_0] [10]))), 3450373021)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_22 ^= (-(arr_4 [i_2]));
        var_23 = 1645800977;
    }
    #pragma endscop
}
