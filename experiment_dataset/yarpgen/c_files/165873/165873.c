/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (!var_7)));
                var_16 = (min(((((((arr_0 [i_0 - 2]) * var_9))) ? (max((arr_1 [i_0] [i_0]), var_3)) : ((max(var_7, var_4))))), (((((max(3749879998271194523, var_6))) ? (min(3749879998271194523, -3749879998271194537)) : (~var_6))))));
                var_17 = var_13;
                arr_8 [i_0] [i_1] = ((!(min((arr_7 [i_0 + 1]), (arr_7 [i_0 - 2])))));
            }
        }
    }
    var_18 *= (((var_14 && (((var_10 ? var_3 : var_13))))));
    var_19 ^= var_0;
    var_20 = (((max((((var_11 ? var_13 : var_12))), (min(-3749879998271194543, 14)))) << (((max(((var_13 ? var_0 : var_8)), -5146)) - 3624498334))));
    #pragma endscop
}
