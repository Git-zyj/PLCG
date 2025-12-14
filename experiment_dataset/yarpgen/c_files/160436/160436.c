/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-var_15);

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((!(~1930625809161025731)));
                    var_18 = (min((((~(arr_5 [i_0] [i_2] [i_0 - 4] [i_2])))), (min(-352886274706107482, (arr_5 [i_0] [i_1] [i_0 + 2] [i_1])))));
                }
            }
        }
        var_19 = 3317980838083561736;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_20 = (-1573542957844882679 >= 7996250569096974112);
        arr_11 [i_3] [i_3] = (((arr_2 [i_3]) - 8941387217889685714));
        var_21 = var_11;
    }
    #pragma endscop
}
