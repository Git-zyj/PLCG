/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10007
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
                var_12 -= (((min(15154746549695966059, (arr_4 [i_0] [i_1] [i_1]))) > ((((min(var_6, 35)))))));
                var_13 = (max((((var_11 ? (var_8 - -114) : ((max((arr_0 [i_1]), 233)))))), (max(var_10, (arr_1 [i_1] [i_0])))));
                var_14 = 18446744073709551600;
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
