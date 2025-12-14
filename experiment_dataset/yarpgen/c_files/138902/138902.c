/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_0, (min(-var_10, var_7))));
    var_20 = (--3182239864081563497);
    var_21 = -var_4;
    var_22 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((-(max(var_10, var_5)))), var_9));
                arr_7 [i_0] [6] [6] = (max(var_5, (!var_2)));
                arr_8 [i_0] [i_1] = var_7;
                arr_9 [8] = max((max(-var_4, var_10)), var_10);
            }
        }
    }
    #pragma endscop
}
