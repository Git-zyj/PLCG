/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_1;
    var_20 = (+-18446744073709551615);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((!((min((arr_3 [i_0] [i_0]), 18446744073709551614)))));
                arr_8 [i_0 + 1] [i_0] = (min(21, ((((arr_2 [i_1] [i_0]) ^ (-32767 - 1))))));
            }
        }
    }
    var_21 = (((18446744073709551594 ? var_7 : var_7)));
    #pragma endscop
}
