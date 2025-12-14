/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(var_12, (~248))))));
    var_21 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = (min(((!((max((arr_4 [i_0]), 3473618266))))), (((((arr_2 [i_0] [i_0]) || 219)) || (!2077393829)))));
                    arr_8 [i_0] [i_0] [i_0 + 1] [8] = (max((!var_4), (arr_4 [i_0 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
