/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_8;
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (min((max((arr_0 [i_2 + 3]), ((var_7 ? 460769261 : var_0)))), 3834198040));
                    var_14 = ((~(((((var_4 ? 1 : (arr_2 [i_2] [i_2])))) ? -4294967295 : ((var_4 ? var_5 : (arr_2 [i_0] [2])))))));
                    arr_8 [i_2] [i_1] = (min(((((min(11, var_0))) ? 3834198062 : -31172)), (((1 ? ((var_7 ? (arr_7 [i_0] [i_0] [i_2]) : (arr_1 [i_0]))) : var_9)))));
                    var_15 = 6;
                }
            }
        }
    }
    var_16 = (39386 & 27816);
    #pragma endscop
}
