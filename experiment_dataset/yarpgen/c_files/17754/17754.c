/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((var_10 ? var_5 : 0)))) ? -var_10 : (min((min(-115, var_9)), ((max(-1, 0))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((var_0 ? (((!(arr_2 [i_0] [i_0])))) : (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0 + 1] = (((arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]) / (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1])));
                        var_13 ^= (((arr_10 [i_3] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_3]) <= (arr_10 [i_3] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_3])));
                    }
                }
            }
        }
    }
    var_14 = ((((((min(var_2, var_2)) | (50 ^ var_0)))) ? (((-50 ? (!var_9) : ((var_5 ? 13 : 50))))) : 1166914953777356813));
    #pragma endscop
}
