/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min(0, (((0 ? (arr_2 [i_0 + 1]) : 84)))));
                arr_8 [i_1] [8] = -85;
            }
        }
    }
    var_10 = ((((~(~var_6))) & var_2));
    #pragma endscop
}
