/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-(((arr_2 [13] [i_0]) ? (var_4 < 146) : var_11))));
                var_17 = min(((((arr_5 [i_0] [i_0] [i_1]) - (arr_5 [i_0] [i_1] [i_0])))), (105 % 3647442272564067069));
                var_18 = (min(var_18, (((-((6986587629202335611 ? (arr_1 [i_0 + 2] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 - 1]))))))));
            }
        }
    }
    var_19 = (((((var_15 != var_10) ? (((var_14 ? var_0 : 105))) : ((var_5 << (var_7 - 5239)))))) ? (!0) : var_2);
    var_20 = (((var_5 ? (4064638027 % var_16) : (((max(var_7, var_2)))))));
    #pragma endscop
}
