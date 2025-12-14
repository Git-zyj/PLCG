/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-var_11 ^ (min(var_3, var_15)))) > ((((var_11 > (max(var_18, var_5))))))));
    var_21 = ((~((max(1325590677, var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = var_7;
                var_23 -= (((var_9 & var_1) > (var_5 == var_18)));
                arr_4 [i_1] = ((8046 ? -1278213098 : 1866581791));
            }
        }
    }
    #pragma endscop
}
