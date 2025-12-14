/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [0] [i_2 + 1] = (((((arr_2 [i_2 + 1]) != (arr_2 [i_2 + 1]))) ? var_6 : (((min((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1])))))));
                    arr_11 [i_0] &= ((80 ? ((((!(arr_0 [i_2 - 1]))))) : (arr_5 [i_0 - 3])));
                }
            }
        }
    }
    var_11 = var_0;
    var_12 = (min(var_12, (var_6 / var_5)));
    var_13 = var_7;
    #pragma endscop
}
