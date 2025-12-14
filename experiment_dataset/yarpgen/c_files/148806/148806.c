/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (((((58500 ? (arr_1 [i_0]) : 62854))) && ((min(4333220478962261587, 3)))));
                    var_19 = (((((11168 ? (!-877593235) : ((max(229, 41014)))))) ? (((arr_2 [i_1 - 2] [12] [i_2 - 2]) ? (arr_2 [i_1 + 1] [11] [i_2 + 2]) : -1)) : 229));
                }
            }
        }
        arr_8 [i_0] [i_0] = 221;
    }
    var_20 = (((((~(1742816663 || 235)))) != (~var_11)));
    var_21 = ((~((((38478 ? -3669048583936458653 : var_14)) % (29 && var_9)))));
    #pragma endscop
}
