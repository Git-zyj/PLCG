/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] &= (arr_5 [i_0] [i_0] [i_0]);
                    var_11 = 255;
                }
            }
        }
    }
    var_12 = ((((max(3, 47388)))) / 431640495);
    #pragma endscop
}
