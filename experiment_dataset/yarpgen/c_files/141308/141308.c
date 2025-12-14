/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((((((arr_3 [i_0]) ? var_9 : var_2)) >= (((~(arr_4 [i_0])))))) ? (max((((arr_3 [i_0]) - var_3)), var_4)) : (((-((var_8 ? -4397 : var_10))))))))));
                arr_8 [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                var_13 = (max(var_13, ((((arr_0 [4]) | ((0 << (((arr_4 [i_0]) - 30260)))))))));
            }
        }
    }
    var_14 &= ((262016 ? 1073737728 : 4294967295));
    var_15 = (max(var_15, (15584693302193423044 << 0)));
    #pragma endscop
}
