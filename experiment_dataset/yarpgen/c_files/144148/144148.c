/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (max((max(16086301636495811976, var_4)), ((min(-102, 0)))));
                arr_5 [i_0] [i_1] [i_0] = (max(((min((arr_1 [i_0 + 2] [i_0 + 2]), ((max(-6, 80)))))), (max(var_2, 4294967295))));
                arr_6 [0] [i_1] [i_1] = (max(((max((arr_4 [i_0] [i_0] [i_0 + 2]), (arr_4 [9] [9] [i_0 + 2])))), (min(var_1, var_8))));
                var_15 = (max((min(var_6, var_12)), ((max(10, -101)))));
            }
        }
    }
    #pragma endscop
}
