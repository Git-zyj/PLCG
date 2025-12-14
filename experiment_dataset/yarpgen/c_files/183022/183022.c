/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max((var_11 * -var_15), (((var_17 ? var_7 : ((max(var_0, var_8))))))));
    var_19 += (max(((((var_4 && var_6) || var_1))), ((-((max(1, var_0)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [1] [i_1] [i_1] [i_1] = (((~var_6) % (arr_1 [10] [i_1])));
                    arr_11 [22] [i_1 + 1] [i_1] = ((((max(var_17, (arr_7 [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 2])))) ? ((((arr_8 [i_1 - 1] [i_1 - 2] [i_1]) / (arr_8 [i_1 + 2] [i_1 + 2] [i_1])))) : var_10));
                }
            }
        }
        var_20 = (arr_7 [i_0] [i_0] [16] [i_0]);
        var_21 -= ((var_16 + ((((var_13 <= ((~(arr_9 [7])))))))));
        var_22 = (arr_9 [i_0]);
    }
    var_23 = (!0);
    var_24 = (1 == 1);
    #pragma endscop
}
