/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~-107);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((643 / ((var_11 ? -1937122709 : var_6)))));
        arr_3 [i_0] = ((!(((var_9 == 0) && (56213 == 1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = ((50866 != (((arr_5 [i_0] [i_1]) * var_2))));
                    var_17 &= (((((var_4 / ((max(56213, -28597)))))) ? (((((26 ? var_0 : var_4))) ? (max(9315, 281474976710654)) : (!114))) : ((((((21 ? var_3 : var_3))) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (~102))))));
                }
            }
        }
        var_18 &= -56213;
        var_19 = max(((var_13 ? var_0 : var_4)), -48);
    }
    #pragma endscop
}
