/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((!var_8), ((-857376394 ? ((max(var_3, var_3))) : ((857376393 ? var_0 : var_0))))));
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((-(((857376395 > (arr_4 [i_0] [i_0] [i_2 - 1]))))))))));
                    arr_6 [i_2] [i_1] [i_0 + 1] [i_0 + 1] = (-var_1 <= (((((857376377 ? var_8 : (arr_0 [i_2])))) ? (((arr_4 [i_0] [i_1] [i_2 + 1]) % var_4)) : var_2)));
                    arr_7 [i_0] [i_0] [i_1 + 1] [4] = (max(4, 103));
                }
            }
        }
    }
    var_13 = (max(var_7, 92));
    var_14 = (~((var_9 + (var_8 - var_9))));
    #pragma endscop
}
