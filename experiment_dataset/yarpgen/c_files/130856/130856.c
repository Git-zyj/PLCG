/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_0));
                    var_15 += ((((min(var_13, (arr_5 [i_2 - 1] [i_2] [i_2 + 1])))) ? (max((arr_5 [i_2 + 2] [10] [3]), (arr_6 [i_2 - 1] [i_2 + 1] [1] [i_0]))) : ((((arr_6 [i_2 + 1] [i_2 + 2] [5] [i_0]) ? (arr_6 [i_2 + 2] [i_2 + 1] [11] [i_1]) : var_12)))));
                }
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}
