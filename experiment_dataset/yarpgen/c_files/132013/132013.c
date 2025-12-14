/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = ((((min(-1, 1073741696))) ? ((-1073741697 ? ((min(2140511600632915929, 80))) : ((var_9 ? (arr_6 [i_0] [i_1] [i_0]) : (arr_2 [i_0] [i_1]))))) : 65280));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_11 = (max(((((arr_3 [i_2 + 1]) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 + 1])))), (max((arr_3 [i_2 + 1]), var_6))));
                    var_12 = (min(var_12, ((((arr_8 [9] [i_0]) ? ((((!((!(arr_2 [i_1] [9]))))))) : (~2140511600632915923))))));
                }
            }
        }
    }
    var_13 *= (max(var_3, (((min(9808, var_4))))));
    var_14 = ((~(~var_8)));
    #pragma endscop
}
