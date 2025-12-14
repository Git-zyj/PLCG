/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((~((var_4 ? (~25279) : (((arr_9 [i_0] [7] [i_0]) ? var_5 : (arr_2 [i_2]))))))))));
                    var_14 = (var_1 << (((!((max((arr_9 [i_0] [i_0] [i_2]), 40256)))))));
                }
            }
        }
    }
    var_15 = 25279;
    #pragma endscop
}
