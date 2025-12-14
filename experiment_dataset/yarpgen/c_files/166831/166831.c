/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 += ((((var_5 ? var_13 : (~-21463))) < (min((arr_4 [10] [i_1] [i_1]), var_1))));
                var_18 = ((var_6 | (((((((arr_4 [i_0] [i_0] [i_1]) ? var_9 : var_9))) < (var_14 / 1739099243388176823))))));
                var_19 = (((((min(var_15, var_11))) ? -12673 : (min(var_1, var_16)))));
                arr_5 [i_0] [i_0] = (min(((((((arr_0 [11] [i_0]) - (arr_4 [i_0] [i_1] [i_0])))) ? var_13 : ((var_8 ? (arr_3 [i_1] [i_0]) : var_5)))), var_9));
            }
        }
    }
    var_20 = -21458;
    var_21 = var_14;
    #pragma endscop
}
