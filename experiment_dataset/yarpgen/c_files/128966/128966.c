/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max((var_4 / var_2), (max(16, var_1))));
    var_13 += (((((!var_2) <= var_11)) || var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] &= (arr_3 [i_0] [i_2]);
                    arr_8 [13] [0] [i_2] = ((!(!56384)));
                    arr_9 [i_0] [14] [9] [i_0] = var_4;
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
