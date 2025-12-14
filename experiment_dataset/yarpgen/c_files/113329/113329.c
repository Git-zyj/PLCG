/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-var_8, var_7));
    var_12 = ((var_10 ? (var_1 == -22692) : var_7));
    var_13 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (min((min(((243 ? var_5 : var_6)), (((var_1 < (arr_3 [i_1])))))), (((1 ? (arr_3 [i_0 + 1]) : (((!(arr_5 [i_1] [i_1] [i_1])))))))));
                var_14 = (max(var_14, (((((190 ? 243 : 1)) < (((((var_4 ? (arr_2 [i_0 - 1]) : 0))) ? (arr_1 [i_1 - 2]) : (((var_0 != (arr_1 [i_0])))))))))));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
