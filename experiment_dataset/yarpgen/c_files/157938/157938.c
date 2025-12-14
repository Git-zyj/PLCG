/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((((-1358087694 ? 0 : var_14))) ? -0 : 8769)), var_10));
    var_18 = var_0;
    var_19 = ((-((var_3 ? ((1358087677 ? var_10 : var_8)) : (min(var_9, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((var_8 + -1358087688) - ((((arr_0 [i_0 + 1]) != 0))))))));
                var_21 = (arr_1 [i_0 + 1] [i_1 - 1]);
                arr_4 [i_1] = (min(((~(arr_1 [i_1 + 1] [i_0 + 2]))), var_7));
            }
        }
    }
    var_22 = ((((var_0 >= ((-1881993742 ? var_13 : var_11)))) ? (max((!var_7), var_14)) : (!6942928231749295711)));
    #pragma endscop
}
