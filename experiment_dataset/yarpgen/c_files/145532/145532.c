/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = (-(((-(arr_2 [i_0] [i_0] [i_1])))));
                var_14 = (min((max((((arr_3 [i_0] [i_1] [i_1 - 1]) ? var_7 : 10547)), (max(19823, var_12)))), (arr_0 [i_0] [i_0 + 2])));
                var_15 = (((~65522) ? (((((var_10 ? 19823 : 1165476207))) ? var_12 : var_1)) : ((((((33237 ? (arr_3 [i_0 + 2] [i_1] [i_1]) : var_2)) < (((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_1 + 1] [i_1 + 3]) : (arr_2 [i_0 + 1] [i_0 + 1] [i_1 + 1])))))))));
            }
        }
    }
    #pragma endscop
}
