/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = ((((((var_10 / -2106812870) ? ((1 * (arr_3 [i_0] [i_1]))) : 2106812846))) ? ((((arr_3 [i_1 - 1] [i_1]) < 1))) : var_8));
                    arr_6 [i_0] = ((!((((var_10 || var_4) ? (!var_5) : ((var_4 ? (arr_3 [i_0] [16]) : (arr_2 [4] [i_2]))))))));
                    var_12 = var_7;
                    var_13 = var_1;
                }
            }
        }
    }
    var_14 = (min(var_14, (!var_8)));
    var_15 = (!var_0);
    #pragma endscop
}
