/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (!var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (!805306368)));
                    var_22 = ((!((!(((arr_5 [i_2]) || (arr_5 [i_0])))))));
                    arr_10 [i_0] [1] = ((19646 >> (arr_8 [i_0] [i_0])));
                    var_23 = ((-(~1)));
                }
            }
        }
    }
    var_24 = (min((((!((min(var_3, var_0)))))), (min(var_12, (!805306373)))));
    var_25 = ((((-3134 ? var_12 : var_15))));
    #pragma endscop
}
