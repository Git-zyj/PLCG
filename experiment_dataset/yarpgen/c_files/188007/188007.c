/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_5 [i_0] [1] [13] [i_0])));
                    var_18 = (max(var_18, ((((((min(56, var_11)) > 2503436364087298251)) ? var_13 : (((3 ? (((-31175 != (arr_5 [i_2] [i_2] [i_0] [i_0])))) : (arr_2 [i_0] [i_0])))))))));
                }
            }
        }
    }
    var_19 = ((((max(var_5, var_16))) * var_16));
    #pragma endscop
}
