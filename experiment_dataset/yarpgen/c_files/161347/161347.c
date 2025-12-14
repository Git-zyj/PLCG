/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (((var_17 ? var_15 : (max((arr_3 [i_0]), var_1)))));
                var_20 &= (max((arr_0 [i_0] [13]), ((var_12 ? (arr_6 [i_0] [6]) : ((((arr_1 [i_0] [10]) && 2147483647)))))));
            }
        }
    }
    var_21 = (((~var_3) ^ var_12));
    #pragma endscop
}
