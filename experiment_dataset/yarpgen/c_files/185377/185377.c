/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18113;
    var_14 = ((~(min(((-79 ? 18102 : var_3)), var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (arr_8 [i_0] [i_0] [i_0]);
                    arr_11 [i_0] [i_1] [i_1] = ((min((arr_0 [i_2 - 2] [i_1 - 1]), (((arr_3 [i_0] [i_0]) * (arr_0 [i_0] [9]))))));
                    var_16 = (min(var_16, ((((((max(var_4, (arr_5 [i_1 - 1] [i_1 - 1]))))) | (((~var_3) & (((var_9 ? (arr_2 [i_0] [i_1]) : -18095))))))))));
                }
            }
        }
    }
    #pragma endscop
}
