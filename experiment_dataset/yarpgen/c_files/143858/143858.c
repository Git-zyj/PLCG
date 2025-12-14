/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (arr_5 [1]);
                arr_6 [i_1] |= ((-(((!(arr_2 [i_1]))))));
            }
        }
    }
    var_19 = ((max((((245 ? var_13 : 220))), (198 / 9274026542821381847))));
    #pragma endscop
}
