/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (max(2147483647, (((arr_3 [i_1] [i_1 + 1]) ? (max(658225028, -2147483647)) : (!var_7)))));
                arr_5 [i_1] = (max((min(-2147483647, 1)), (((arr_3 [i_1 + 3] [i_1 + 4]) ? -25 : (arr_3 [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    var_14 = var_10;
    var_15 = (min(var_15, var_0));
    var_16 &= ((!((!(!-1459299865112527188)))));
    var_17 &= (!2147483642);
    #pragma endscop
}
