/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((var_4 ^ -5341) + 23517)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_2] = arr_10 [i_2 + 1] [i_2] [i_1] [i_0];
                    arr_12 [i_0] [i_0 + 3] [1] = ((max(27772, (((!(arr_8 [i_0] [i_1] [i_2])))))));
                    var_13 = (((arr_2 [i_1]) ? var_3 : (11 - 0)));
                }
            }
        }
    }
    var_14 = ((62250 ? -13 : -4595015638967392341));
    #pragma endscop
}
