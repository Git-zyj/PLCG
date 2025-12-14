/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = ((((!128034183) > ((-20533 ? var_9 : (arr_2 [i_0] [i_1]))))));
                var_18 |= ((-(1 + var_12)));
                arr_4 [i_0] = (((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))) < (((((0 ? (arr_2 [i_1] [7]) : (arr_1 [i_0] [i_1]))))))));
            }
        }
    }
    var_19 *= 860199818;
    #pragma endscop
}
