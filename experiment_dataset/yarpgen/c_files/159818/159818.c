/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 -= var_8;
                var_12 = (min(var_12, ((((((min(var_9, 0)) ? (~1024) : ((max(-121, -707))))))))));
                var_13 = ((!((max((arr_3 [i_1] [i_0 - 4] [i_0]), (((!(arr_3 [3] [i_0] [i_0])))))))));
                arr_4 [i_1] [i_0 - 1] [i_1] = (((((((246 ? var_10 : var_6))) ? (arr_0 [i_0 - 1]) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_1] [i_1]) : (arr_3 [i_0] [i_0 - 4] [i_1]))))) | var_2));
                var_14 = -13;
            }
        }
    }
    var_15 = (~var_1);
    var_16 = var_0;
    #pragma endscop
}
