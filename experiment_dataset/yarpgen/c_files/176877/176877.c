/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 |= ((19597 / (arr_2 [12] [12])));
        var_16 = (max(var_16, 19585));
        var_17 *= (min((arr_0 [12]), var_4));
    }
    var_18 = ((var_14 ? (max(19585, var_7)) : ((min(var_10, ((45944 ? var_13 : var_10)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            {
                var_19 *= (min((45963 / var_11), (((19617 < ((max(-7074293715641380746, var_13))))))));
                arr_8 [i_1] [i_2 - 1] [i_2] = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                var_20 = (((((var_12 - var_14) | ((max(50, var_5))))) > (((!var_0) ? 19597 : (arr_13 [i_4])))));
                var_21 = ((((((arr_11 [i_4 + 1] [i_3 - 2] [i_3 - 1]) * var_4))) ? ((var_12 ? -45940 : 45930)) : var_12));
                arr_14 [i_4 - 1] [i_3 + 1] = (arr_10 [i_3 + 1]);
            }
        }
    }
    #pragma endscop
}
