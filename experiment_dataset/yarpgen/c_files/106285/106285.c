/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_0, ((min(118, 1))))));
    var_11 += ((((((118 ? 0 : -32758)))) ? 1 : ((-3 ? -99 : 101))));
    var_12 ^= ((min(var_9, (max(var_4, var_3)))));
    var_13 ^= 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_2] = ((((max(32748, 14470))) ? (arr_1 [i_0]) : var_6));
                    arr_8 [i_0] [i_0] [i_0] [1] = (max(((min((!var_6), (arr_3 [i_2] [i_1 + 1])))), var_4));
                }
            }
        }
    }
    #pragma endscop
}
