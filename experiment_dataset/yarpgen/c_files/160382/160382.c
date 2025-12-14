/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(var_6, 15)))));
    var_13 = (max(((max(((-17 ? var_11 : 0)), var_9))), (max((((var_10 ? var_4 : var_6))), (~var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((min(32767, (arr_2 [0]))))));
                    var_15 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
