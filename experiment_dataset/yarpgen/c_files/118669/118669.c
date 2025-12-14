/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((!(!32761)));
                arr_7 [i_0 + 1] = 16378760293618885520;
            }
        }
    }
    var_14 = var_9;
    var_15 = var_7;
    #pragma endscop
}
