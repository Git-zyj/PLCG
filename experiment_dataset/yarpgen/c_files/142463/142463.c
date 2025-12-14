/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2]))) != 2198956146688));
                    var_14 = var_6;
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = ((-((var_2 ? -var_11 : var_10))));
    #pragma endscop
}
