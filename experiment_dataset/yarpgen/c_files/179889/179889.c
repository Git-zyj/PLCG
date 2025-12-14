/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_0] [i_1]);
                    arr_9 [i_0] [i_1] [i_2] = var_2;
                }
            }
        }
    }
    var_16 = ((((((((86 ? 56 : 1612228440))) ? (var_5 && var_4) : -127))) && var_0));
    var_17 = ((~((((!var_3) && var_14)))));
    var_18 = ((!(~56272)));
    #pragma endscop
}
