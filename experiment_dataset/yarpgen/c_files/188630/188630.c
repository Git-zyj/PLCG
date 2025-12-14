/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (!8191);
                    arr_7 [i_2] [i_1 - 2] [i_0] [i_0 + 1] = ((var_1 ? (min((arr_1 [i_0 - 1]), (arr_3 [i_1 - 3] [i_1 + 2] [i_0 - 3]))) : (((min((arr_5 [17] [i_1 + 1] [i_1 - 2] [i_1 + 1]), (arr_5 [i_2 + 1] [i_1] [i_0 - 3] [i_0 - 3])))))));
                    arr_8 [i_2 + 1] [6] [6] [6] = ((max((min((arr_2 [i_1] [i_1]), 9004502284072893316)), (arr_6 [i_0 + 1] [13]))));
                }
            }
        }
    }
    var_20 += var_11;
    var_21 = (max(var_21, var_13));
    #pragma endscop
}
