/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_5;
    var_21 ^= ((((((min(var_18, var_14)) || (!var_5))))));
    var_22 = 31557;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_23 = ((-((var_17 ? 1 : (arr_3 [i_0 - 3] [i_0 - 3])))));
                var_24 = -29601;
                var_25 = (min(var_25, (var_13 != -766074613)));
                var_26 = (max(var_26, ((((((var_0 ? (arr_5 [i_0 + 3] [6]) : (arr_4 [8] [8])))) ? var_0 : ((-(arr_1 [i_0 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
