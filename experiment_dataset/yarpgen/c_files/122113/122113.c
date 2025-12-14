/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((-((3480554226 ? var_6 : var_5))))))));
    var_17 = (55337 + 3480554238);
    var_18 = ((-((3480554234 >> (1479019275855856103 - 1479019275855856082)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = ((!((min(((3888817045810262437 ? (arr_0 [i_0] [i_0]) : 814413075)), (var_7 && 3480554226))))));
                arr_5 [i_0] [i_0] [i_1] = ((!(((3480554208 ? 18446744073709551603 : (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    var_20 = 3480554224;
    #pragma endscop
}
