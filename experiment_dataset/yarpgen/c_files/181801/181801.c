/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((302570418223159414 ? (!0) : (~0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((-((((813106622 / var_11) > (((arr_0 [i_0]) + var_7)))))));
                var_15 = var_0;
                var_16 = ((((var_1 ? ((((arr_1 [i_0] [i_0]) ? var_6 : (arr_3 [i_0] [1] [i_1])))) : var_0)) * (((((1 ^ 109) && -1909792330))))));
            }
        }
    }
    var_17 = -2227753230453762838;
    #pragma endscop
}
