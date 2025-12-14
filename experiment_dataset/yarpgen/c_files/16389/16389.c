/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((var_7 ? -4759404940520491554 : var_0))) ? var_9 : -7517080396434092955)) * (((max(-44, 1))))));
    var_11 = (((!var_7) - var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = 3;
                var_12 = (((((arr_0 [i_1]) - var_2)) * (!-65)));
                var_13 -= ((((((((var_5 ? (arr_3 [i_1] [i_1]) : var_6))) && (((var_1 ? -2143842338 : var_5)))))) < var_5));
                arr_6 [i_0] [i_0] = var_9;
            }
        }
    }
    #pragma endscop
}
