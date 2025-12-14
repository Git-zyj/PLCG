/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(var_10, (var_11 < var_6))), ((197 ? ((max(var_7, var_9))) : (max(var_5, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 *= ((-(max((arr_1 [i_1 - 1] [i_1 - 1]), var_9))));
                arr_6 [2] [i_1] &= (max((((var_10 >= 24) ? (~var_7) : (min(-3352196844212335072, -3352196844212335072)))), (-3352196844212335054 <= 250)));
                arr_7 [i_1] [i_1] = var_12;
            }
        }
    }
    #pragma endscop
}
