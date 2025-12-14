/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_2 ? var_5 : -12201))) ? var_6 : ((-21 ? 12201 : -12201))))) && ((min((~var_8), var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 &= (((arr_3 [i_0 - 1] [i_0 - 2]) * -1767135713025922726));
                arr_4 [4] [i_1] [i_1] = max((arr_0 [i_0 + 1]), 4);
            }
        }
    }
    var_13 = var_5;
    var_14 = var_6;
    #pragma endscop
}
