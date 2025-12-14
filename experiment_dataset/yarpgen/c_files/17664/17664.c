/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((!(7 < var_14))))));
                var_19 = (min(var_19, ((((((arr_0 [i_0 + 3]) ? 1 : (arr_2 [i_0 + 3]))) != 741489908)))));
            }
        }
    }
    var_20 = (max(var_20, (((var_14 ? ((~((var_6 ? 9673 : 12300)))) : (((((var_5 ? var_6 : var_3)) < ((var_4 ? -103 : 125535290))))))))));
    #pragma endscop
}
