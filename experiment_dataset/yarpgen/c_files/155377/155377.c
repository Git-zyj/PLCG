/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1 - 1] [i_1 - 1] = ((((((arr_7 [i_1]) >= ((var_1 ? (arr_1 [i_0]) : var_8)))))) < (max((min((arr_3 [i_0]), (arr_4 [5] [i_0] [i_1]))), (min(1073479680, (arr_2 [i_0] [9]))))));
                var_10 = (max(var_10, (arr_1 [i_0])));
            }
        }
    }
    var_11 = var_5;
    var_12 = (max(var_12, var_5));
    #pragma endscop
}
