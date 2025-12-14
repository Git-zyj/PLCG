/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = (((var_5 ^ 40633) ? var_15 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min((-var_2 >= var_13), (((arr_1 [i_2]) < 7590276009662285380))));
                    var_21 ^= (arr_2 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
