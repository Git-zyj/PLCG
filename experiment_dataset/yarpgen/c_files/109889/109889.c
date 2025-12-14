/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min(var_10, (((-57 + 2147483647) << (7715336164436660042 == 81))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((var_3 ? (arr_3 [i_1 - 4] [i_1 - 3]) : var_11))));
                var_13 = (((!-var_3) << (((min(-1, 1023)) - 994))));
            }
        }
    }
    #pragma endscop
}
