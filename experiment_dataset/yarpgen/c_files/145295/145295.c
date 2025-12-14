/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (var_10 + var_10);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((var_12 >= (max(9889540256438481220, (arr_2 [i_0 + 1] [i_0 + 2])))));
                    var_20 = (max(var_20, ((min(9889540256438481220, 8751669544119619925)))));
                }
            }
        }
    }
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
