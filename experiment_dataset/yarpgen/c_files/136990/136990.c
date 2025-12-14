/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2409054627;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))));
                var_20 = (max(var_20, ((min((((((arr_3 [6]) + (arr_0 [i_1] [i_0]))) + (arr_1 [10]))), var_13)))));
                arr_4 [i_0] = (-(+-36028797018963967));
            }
        }
    }
    var_21 = ((((min(-36028797018963973, 1))) ? var_11 : 36028797018963980));
    var_22 = max(((min(1, ((var_4 ? var_4 : var_7))))), -36028797018963977);
    #pragma endscop
}
