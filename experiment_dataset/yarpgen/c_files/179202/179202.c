/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((!(!var_8))))));
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [8] [5] = 40111;
                var_16 = (max(var_16, (!10746913131821067497)));
                arr_5 [i_1] [i_1] [i_0] = (!-1);
                arr_6 [i_1 - 3] [i_0] = (~132);
            }
        }
    }
    var_17 = (~12);
    #pragma endscop
}
