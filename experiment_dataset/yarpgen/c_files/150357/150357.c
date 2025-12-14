/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((((((max((arr_2 [i_1]), var_9)) & (((arr_2 [i_0]) % (arr_1 [i_0])))))) ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_7))) : (((arr_3 [i_0]) << (var_11 - 5048123123882108556)))));
                var_15 = var_8;
            }
        }
    }
    var_16 = (min(var_12, ((((max(var_3, var_5)) <= ((-584237818 ? 2040574090 : 137682349)))))));
    var_17 = ((!(((3194244915 ? 1100722367 : 584237819)))));
    #pragma endscop
}
