/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((!(((1706344898 >> ((((-101 ? 65535 : -19676)) - 65535)))))));
    var_14 = var_3;
    var_15 = (min(var_11, (~var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = var_10;
                var_17 = (((((var_1 + 2147483647) >> (var_11 - 2087349400)))) ? (((max((arr_3 [8] [i_1]), (arr_1 [i_0]))))) : 2588622397);
                var_18 &= (arr_3 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
