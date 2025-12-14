/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_10;
                var_18 = (((((((var_5 ? var_0 : 22908)) / (var_17 | 1)))) ? (((arr_2 [i_1] [i_0] [i_0]) / var_9)) : (((((((arr_3 [i_0] [i_0]) == 18446744073709551615)))) / 16694754083807436103))));
            }
        }
    }
    var_19 = ((~(((var_8 >= (4294967289 - var_13))))));
    #pragma endscop
}
