/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((var_9 || (~var_1))))));
    var_14 = ((var_7 ? 3 : ((255 ? 5 : 4))));
    var_15 -= ((3 <= (((((var_3 ? var_7 : -1089345978))) - var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 9));
                arr_4 [i_0] = (arr_3 [i_0 - 1] [i_0 - 2]);
                var_17 = (4 ? (max((((arr_1 [i_0]) | var_9)), ((6145898492554341897 ? 136 : var_11)))) : (min((((~(arr_3 [i_0] [i_0])))), (arr_1 [i_0]))));
            }
        }
    }
    var_18 = (((((((-6145898492554341898 ? var_12 : -4998))) ? (min(var_0, var_8)) : var_10)) - ((((6 || var_6) ? var_1 : var_7)))));
    #pragma endscop
}
