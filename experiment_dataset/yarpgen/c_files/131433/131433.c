/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((49 ? ((-(var_7 != var_5))) : (((!(((var_12 ? var_7 : var_19)))))))))));
    var_21 = (max(var_18, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((-((-(arr_2 [20] [i_1] [18]))))))));
                    arr_7 [i_2] [i_2] [11] [18] = (min(var_0, (((-13 + 2147483647) >> (-50 + 60)))));
                }
            }
        }
    }
    #pragma endscop
}
