/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(((max(var_4, var_5))), (max(7586668829724560631, 11391)))), ((max(((max(var_5, -27678))), (min(var_10, var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (min((max((max(var_7, var_5)), ((min(var_3, (arr_0 [i_2])))))), ((min(((max(-1641198642, var_10))), (min(var_6, 1)))))));
                    var_12 = (min(((max((min(1, (arr_1 [8] [i_1]))), (min(253, var_0))))), (min((max(2, var_7)), ((max(3661993879, 1641198632)))))));
                }
            }
        }
    }
    var_13 = (max(((min((min(0, 1641198640)), ((min(var_0, 1)))))), (max(((max(32747, var_0))), (max(var_8, var_7))))));
    #pragma endscop
}
