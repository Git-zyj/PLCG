/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 -= var_12;
            arr_6 [i_1] [i_0] = (-2147483647 - 1);
        }
        arr_7 [15] = 2035;
        arr_8 [i_0] [1] = (((~562949953421311) ? (arr_5 [i_0]) : -657436212));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_21 ^= ((((((arr_14 [i_3 + 1] [i_4] [i_4]) ? 2029 : (arr_14 [i_3 - 1] [i_4] [i_4])))) ? 63340 : 2947487192));
                    arr_15 [i_3] [i_3] = ((0 ? var_13 : ((var_12 ? (arr_10 [i_3] [11]) : (arr_11 [i_3])))));
                    var_22 *= (((((arr_10 [i_3 - 1] [i_3 + 1]) ? var_19 : ((var_15 ? (arr_9 [3]) : var_5)))) <= (arr_10 [i_3] [i_4])));
                    arr_16 [i_3] [7] = -3;
                }
            }
        }
        var_23 = var_3;
        arr_17 [i_2] = var_18;
    }
    var_24 = (((var_0 || -var_0) && var_5));
    #pragma endscop
}
