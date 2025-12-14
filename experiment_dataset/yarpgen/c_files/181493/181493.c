/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_8, var_5))) & (max((max(var_8, var_7)), (max(3799722571956660059, 935793684))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] = var_9;
                    var_11 = (min(var_11, ((max(var_6, ((min((arr_2 [i_2] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
