/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 -= (min((arr_2 [i_1] [i_0] [i_0]), (((!(((49843 ? (arr_3 [i_1 + 2]) : var_14))))))));
                var_19 = (((-(arr_0 [i_0]))));
                var_20 = (max((((!(arr_2 [i_1 + 2] [i_0] [i_0 - 1])))), (((arr_2 [i_1] [18] [i_0 - 1]) & (arr_1 [i_0 - 1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_6 [i_2] = var_13;
        arr_7 [0] = (((((15677 ? (arr_4 [i_2] [i_2]) : var_2))) ? (0 - -17452) : var_3));
    }
    var_21 = ((((((var_12 ? var_2 : var_6))) % var_11)));
    var_22 = var_11;
    #pragma endscop
}
