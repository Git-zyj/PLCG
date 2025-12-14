/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((((var_8 ? var_0 : 10065))) ? -var_12 : (min(13004, 2697625535)))) < var_3));
    var_15 &= ((-var_2 == ((max(var_11, var_11)))));
    var_16 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] &= var_6;
                var_17 = (max(var_17, ((max((min((arr_3 [i_1]), var_3)), var_12)))));
            }
        }
    }
    #pragma endscop
}
