/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_1 [13])));
        var_20 += (((arr_1 [i_0]) / (((arr_1 [i_0]) ^ var_8))));
        arr_3 [i_0 + 1] [i_0] = (((arr_1 [i_0 - 2]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_0] [1] = (~(arr_9 [i_0] [i_2 - 1] [i_0]));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = -5960700133485618151;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_21 = (min(var_21, var_17));
            arr_21 [i_5] [i_5] [i_5] = (1 * (arr_18 [i_4] [14]));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [i_6] [i_4] &= (arr_15 [1]);
            arr_25 [i_4] [i_4] [i_4] = (((1763815226 / 231425267) == (!1763815226)));
            arr_26 [i_4] [i_6] [i_4] = (var_2 | var_7);
            var_22 = (min(var_22, ((((((5960700133485618151 ? -91 : var_2))) ? (((arr_17 [i_4]) ? (arr_18 [i_4] [0]) : 44633596)) : ((((!(arr_17 [i_4]))))))))));
        }
        var_23 = var_16;
    }
    #pragma endscop
}
