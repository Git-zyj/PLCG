/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max((max(239, 1935224072)), 28911)))));
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (arr_6 [i_2] [i_1] [i_2]);
                    arr_8 [i_2] = (max(28911, (((!((max((arr_4 [i_2]), 4927699305815572469))))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = (min((min(13519044767893979143, -3320)), (((arr_3 [i_0]) ? ((((8468862603556363661 || (arr_0 [i_0]))))) : ((18446744073709551613 & (arr_3 [3])))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((arr_12 [i_3]) ? (arr_12 [i_3]) : (arr_12 [i_3])));
        var_21 = (-437637991 < ((((!(arr_2 [i_3]))))));
        arr_14 [i_3] = (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4 + 1] = ((!((0 != (arr_2 [i_4 + 1])))));

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_22 = (((!249) * (((arr_15 [i_4] [i_4]) ? 1917292743005797990 : (arr_1 [i_4])))));
            var_23 = ((!(arr_5 [i_4])));
        }
        arr_20 [i_4] [0] = 17;
    }
    var_24 = (((var_5 >> var_5) ? (min((max(var_18, 247)), var_1)) : (((-32023 ? var_0 : -9223372036854775789)))));
    #pragma endscop
}
