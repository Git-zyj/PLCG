/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_0 ? 145422190030523530 : var_2));
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (!-554199785);
                var_12 = (min(var_12, (arr_3 [i_0] [i_0 - 1])));
            }
        }
    }
    var_13 = var_9;
    var_14 |= (1 >= var_8);
    #pragma endscop
}
