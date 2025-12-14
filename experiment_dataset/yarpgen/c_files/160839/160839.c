/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_0 [i_1]);
                var_20 = ((1 ? (arr_3 [i_0] [i_1] [i_0]) : ((min(1, (arr_2 [i_0 + 2]))))));
            }
        }
    }
    var_21 = (max(var_21, (((-((((((1 ? 8873 : var_2))) || (((395844534 ? var_4 : var_10)))))))))));
    var_22 = (max(var_22, var_11));
    #pragma endscop
}
