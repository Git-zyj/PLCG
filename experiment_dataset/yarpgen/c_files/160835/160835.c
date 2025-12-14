/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -822450565;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((var_3 ? -224966510 : (((((max((arr_0 [i_0]), (arr_2 [i_1]))))) * 8741357191129448125)))))));
                var_15 = ((-(!var_4)));
            }
        }
    }
    #pragma endscop
}
