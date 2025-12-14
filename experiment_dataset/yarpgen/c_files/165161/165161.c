/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] [11] = 1;
                    var_21 = 21608;
                    var_22 |= (min(((((arr_2 [i_0] [i_1] [i_2]) == -27171))), (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_2] [i_1] [i_0]) : 1))));
                }
            }
        }
    }
    #pragma endscop
}
