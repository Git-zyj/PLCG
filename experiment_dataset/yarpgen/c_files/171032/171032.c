/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_14;
                var_15 = (min(var_15, (((((-(~1))) * (((((var_12 ? var_0 : var_4))) ? (!917030335) : var_11)))))));
            }
        }
    }
    var_16 -= ((-var_10 ? ((min(var_9, 8191))) : ((1519408257 ? var_9 : ((max(var_0, var_11)))))));
    #pragma endscop
}
