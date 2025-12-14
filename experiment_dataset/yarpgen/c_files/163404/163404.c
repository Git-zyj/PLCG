/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((min(var_14, var_4))) < var_8)))) == ((53283 * (((arr_0 [i_0]) / 256542859))))));
        var_16 = ((+(((arr_0 [i_0]) ? 256542862 : var_3))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_17 = var_2;
                var_18 = ((-((((arr_8 [i_1] [i_2]) != (max(-7025244770677413567, var_13)))))));
                arr_9 [i_1] [i_2] = (((var_12 ? (-7025244770677413567 && 59500) : ((var_15 << (var_0 - 856741922832642135))))));
                var_19 = (1 < -36);
            }
        }
    }
    var_20 = (((33237 <= (var_13 * var_5))));
    #pragma endscop
}
