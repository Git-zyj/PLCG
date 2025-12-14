/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_8));
    var_21 = (!var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((max((max((arr_0 [i_1] [i_1]), (arr_1 [i_1]))), (((!(arr_4 [i_1] [i_1])))))))));
                var_23 = (!1);
                var_24 *= (arr_0 [i_1] [i_1]);
                var_25 = (arr_4 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
