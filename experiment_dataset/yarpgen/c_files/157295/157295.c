/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = 8388592;
                var_14 *= (max(((var_2 ? 57928784 : 0)), var_1));
            }
        }
    }
    var_15 = (min(var_15, ((((((var_0 + 1) ? (min(18082511643947797099, 1)) : (1 - 1125899906834432))) % var_0)))));

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = 5088670956676953203;
        var_17 = (min(var_17, var_3));
        arr_8 [i_2] [i_2] = (var_2 % (13358073117032598413 % 5088670956676953203));
        var_18 -= 1;
        arr_9 [5] = ((((((var_7 / var_10) / var_0))) || ((!(((0 ? var_7 : var_4)))))));
    }
    var_19 = var_12;
    #pragma endscop
}
