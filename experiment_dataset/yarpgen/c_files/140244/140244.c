/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 -= -var_12;
                    var_20 = (min(var_20, ((min((((var_16 ? (-7516 >= 268434944) : var_17))), (((arr_4 [3]) ? var_11 : (arr_1 [i_0] [i_0]))))))));
                    arr_8 [i_0] = ((-(((((var_15 ? (arr_4 [i_1]) : (arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2])))) ? ((var_8 ? (arr_3 [i_0]) : (arr_5 [i_0 - 1]))) : var_3))));
                    var_21 -= (max((((((var_14 ? (arr_3 [i_2]) : var_16))) ? ((var_13 ? (arr_5 [i_1]) : var_4)) : var_17)), (arr_3 [i_0])));
                }
            }
        }
    }
    var_22 = (var_8 == ((((min(var_0, var_16)) >= var_1))));
    #pragma endscop
}
