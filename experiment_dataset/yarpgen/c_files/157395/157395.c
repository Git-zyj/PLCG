/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (min(var_0, (min((var_1 + var_12), (min(var_10, var_2))))));
    var_18 *= ((!((min((~var_5), (var_6 | var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [9] [i_0] [9] = (min((min((((!(arr_4 [6] [6])))), (min((arr_4 [2] [i_1]), (arr_0 [6]))))), (arr_2 [5])));
                var_19 -= (max(1, 1));
            }
        }
    }
    #pragma endscop
}
