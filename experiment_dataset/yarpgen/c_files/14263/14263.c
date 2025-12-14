/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_14;
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [8] = max(-26, ((~((((arr_5 [i_0]) <= var_2))))));
                arr_7 [i_0] [i_0] [i_1] = (max((((((var_14 == (arr_0 [i_1])))))), 6064788033664405099));
            }
        }
    }
    var_20 -= (min((!var_9), (((max(26997, 116))))));
    #pragma endscop
}
