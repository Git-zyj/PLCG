/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [1] [i_1] = ((((arr_0 [11] [i_1 - 1]) <= 223051085)));
                arr_8 [i_0] [i_1] [i_1] = ((+((((arr_5 [i_0] [i_1 - 1]) ? 19112 : 1572864)))));
                arr_9 [i_1] = ((12383196376954362312 ? ((((arr_3 [i_1 - 3] [i_1 - 1]) <= 49425))) : ((max((!1230480989), (!4293394437))))));
            }
        }
    }
    #pragma endscop
}
