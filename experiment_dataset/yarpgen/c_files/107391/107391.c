/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_5, var_7));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!(((-((var_11 - (arr_2 [i_0] [i_0]))))))));
                var_14 = (min(var_14, ((min((((!(arr_4 [i_1 + 2])))), (13 - var_7))))));
                var_15 -= ((!((max(-8, var_1)))));
            }
        }
    }
    var_16 = ((var_11 / (max(var_0, var_11))));
    #pragma endscop
}
