/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 ^= (arr_0 [i_0] [i_1]);
                var_11 = ((max((arr_2 [i_1]), (~var_7))) >> (((max(-5497860182845474379, 9719069113459873122)) - 12948883890864077219)));
                arr_7 [i_1] [i_1] = (~var_2);
                var_12 = max(var_3, ((~(arr_1 [i_1]))));
            }
        }
    }
    var_13 = ((~(max(-var_6, var_6))));
    var_14 = ((-(max(-51, 3594792467))));
    var_15 = -64;
    var_16 = max((max(9719069113459873122, ((max(var_1, var_0))))), var_3);
    #pragma endscop
}
