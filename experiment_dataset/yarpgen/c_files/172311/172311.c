/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [1] [1] [i_0] = (min(165, (((!(~var_7))))));
                arr_6 [i_0] [i_1] = 233;
            }
        }
    }
    var_15 = (!var_2);
    var_16 = (((((var_11 / var_1) != (258048 / 233)))) | (max((~36182), (65491 * 23))));
    #pragma endscop
}
