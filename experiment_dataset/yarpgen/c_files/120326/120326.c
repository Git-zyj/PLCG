/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = var_6;
                arr_5 [i_0] [i_1] = (((((16764729695215301122 ? var_14 : -11992))) ? (30204 - -8112286919940243685) : var_13));
                var_16 &= (max(((1 >> (2147483647 - 2147483618))), ((((253 ? 2147483640 : -2147483647)) ^ var_12))));
            }
        }
    }
    var_17 = (((((var_2 ^ (max(-544418534134822222, var_10))))) ? (15 / var_0) : -7935839090167688000));
    var_18 = (max(var_18, (((var_7 >> (var_9 - 11360))))));
    var_19 = -2147483641;
    #pragma endscop
}
