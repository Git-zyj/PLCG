/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((min((arr_1 [i_1 + 2] [i_0]), ((~(arr_1 [10] [i_1 - 3]))))))));
                var_15 |= (7 < var_4);
                arr_6 [i_0] [i_0] [i_1] = (!var_4);
                arr_7 [i_1 - 2] |= ((((!(!var_6))) ? (((arr_1 [i_1 - 3] [i_0 - 1]) ? 57543 : var_14)) : ((((((2294561229231886809 ? 1956389612 : var_7))) ? (((arr_4 [i_0]) ? var_11 : 0)) : (arr_4 [i_0 - 1]))))));
            }
        }
    }
    var_16 = (min(var_3, (min((var_6 && 393001234), var_9))));
    var_17 = (var_5 % var_12);
    #pragma endscop
}
