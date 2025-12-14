/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_10, var_5));
    var_20 |= var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (min((arr_3 [i_0] [8] [i_2 - 1]), (min((arr_0 [7]), 399419392))));
                    var_22 = (arr_3 [1] [i_1 + 1] [1]);
                    var_23 = (min(var_23, (((((max((((-(arr_0 [1])))), (min((arr_0 [i_2 + 1]), var_17))))) ? (((var_13 ? (arr_0 [i_2 - 1]) : (arr_1 [i_1 - 2])))) : (arr_2 [i_2 - 1]))))));
                }
            }
        }
    }
    var_24 = (min(var_24, var_0));
    var_25 &= ((min((((var_2 ? 399419378 : var_16))), (var_12 + var_9))));
    #pragma endscop
}
