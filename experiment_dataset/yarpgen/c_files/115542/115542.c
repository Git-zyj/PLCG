/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((~(var_4 + -var_11)));
    var_17 += (!var_11);
    var_18 = var_13;
    var_19 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_0 [i_0])));
                var_21 = ((129 ? 0 : (((arr_5 [i_1] [i_1]) ? (min(18446744073709551615, (arr_1 [5]))) : (((-1 ? var_5 : (arr_6 [i_0] [i_1] [7]))))))));
                arr_7 [i_1] [i_1] = (((((arr_1 [i_0]) != (!0))) ? (((arr_4 [6] [i_1] [i_1]) / (arr_4 [i_0] [i_1] [i_1]))) : ((-(19105 && 3103506149)))));
            }
        }
    }
    #pragma endscop
}
