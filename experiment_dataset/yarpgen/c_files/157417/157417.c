/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((max((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 1]))), 115)))));
                    var_20 = (max((((!(!var_6)))), (min(((max((arr_6 [i_0 - 3] [3] [i_2]), (arr_4 [i_1] [i_2])))), (arr_6 [i_0] [i_1] [i_2])))));
                    arr_8 [i_0 - 3] [i_1] [i_2] = -113;
                    arr_9 [i_2] = var_12;
                }
            }
        }
    }
    var_21 = (min(((max(var_11, var_3))), var_5));
    #pragma endscop
}
