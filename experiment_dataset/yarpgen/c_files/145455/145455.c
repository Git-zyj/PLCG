/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((-659642585 ? var_6 : (((min((arr_2 [i_0]), (arr_2 [i_1])))))));
                var_17 = (((~137438953468) < (max(((-4898396404985063868 / (arr_0 [i_0]))), 2109001478))));
            }
        }
    }
    var_18 = var_1;
    var_19 -= (4408785495042490604 ? var_7 : ((((((0 ? 1 : 134217727))) ? var_8 : 119))));
    #pragma endscop
}
