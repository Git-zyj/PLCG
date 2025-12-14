/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_11, ((min(var_15, var_9))));
    var_21 = (min(var_21, ((min(((max((var_17 * var_11), ((max(var_16, var_18)))))), var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = ((+((min((arr_5 [i_1 - 1]), (((arr_2 [i_0]) > var_15)))))));
                var_23 = (((max((arr_2 [i_1 - 2]), (((arr_3 [i_0] [i_1 - 3]) ? (arr_5 [i_1]) : (arr_4 [i_0]))))) < var_2));
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
