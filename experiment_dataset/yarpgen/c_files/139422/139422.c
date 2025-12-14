/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_2 [i_0] [i_0] [i_1])));
                arr_5 [i_0] = ((!(arr_2 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_13 = ((!((((var_10 + 2147483647) << ((((((var_2 ? var_3 : 374220823)) + 5833078393963835212)) - 23)))))));
    #pragma endscop
}
