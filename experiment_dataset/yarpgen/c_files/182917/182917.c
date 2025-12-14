/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(-7710403048695775882, var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min(var_12, -var_4));
                arr_7 [i_1] [7] [i_0 - 1] = (+(((arr_4 [i_1] [i_1] [i_0]) ? ((((-2147483647 - 1) | var_3))) : ((var_10 ? 1406364798 : (arr_3 [4]))))));
            }
        }
    }
    var_13 = ((4072 ? var_10 : (max(var_8, -var_3))));
    var_14 = (max(var_14, var_8));
    var_15 = var_5;
    #pragma endscop
}
