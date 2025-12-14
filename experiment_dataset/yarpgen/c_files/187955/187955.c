/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_6));
                arr_4 [i_1] [16] = (min(((-1728164393 ? (arr_2 [i_0]) : (arr_2 [i_1]))), ((((arr_2 [i_0]) || var_4)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            {
                var_17 = (max(var_17, -1728164394));
                arr_9 [i_2] = (min((arr_2 [i_3]), (!2783327046)));
            }
        }
    }
    #pragma endscop
}
