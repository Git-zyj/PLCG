/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (295484027 != var_10)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = max((((295484027 ? 1 : (arr_4 [i_2] [i_2] [i_2])))), (min((((arr_5 [i_2]) ^ (arr_1 [i_0] [i_1]))), var_3)));
                    var_15 = var_6;
                    arr_10 [i_0] [i_0] = ((max(295484052, ((var_7 ? (arr_0 [i_1]) : (arr_9 [i_0 - 1] [i_0 - 1]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_16 = 0;
        arr_14 [i_3] = -295484032;
    }
    var_17 = (!((max((max(var_5, var_5)), (((295484052 ? var_11 : var_10)))))));
    #pragma endscop
}
