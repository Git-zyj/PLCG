/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (arr_1 [i_0]);
                var_18 = ((((((min(var_7, 1)) - (arr_3 [i_0] [i_0] [i_0])))) ? (((arr_1 [i_0]) - (arr_5 [i_0] [i_0] [i_1]))) : (!-8384512)));
            }
        }
    }
    var_19 |= var_6;
    var_20 = (max(var_20, -664761959222599948));
    #pragma endscop
}
