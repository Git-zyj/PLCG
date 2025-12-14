/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? 255 : (arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? var_10 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_1 [i_1]);
        arr_6 [i_1] [i_1] = (min(var_3, (((((248 >> (-2058751798 + 2058751801)))) ? var_2 : (((arr_4 [i_1] [i_1]) + (arr_0 [i_1])))))));
        arr_7 [i_1] = ((~(((0 > var_4) ? (min((arr_0 [i_1]), 252)) : var_18))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((arr_9 [i_2] [i_2]) ? 0 : (arr_9 [i_2] [i_2]));
        var_20 = (((arr_9 [i_2] [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2])));
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 = (arr_14 [i_3] [i_3]);
        arr_15 [i_3] = ((255 ? 1792825523 : (((arr_0 [i_3]) ? (arr_0 [i_3]) : (arr_0 [i_3])))));
        var_22 = ((((((var_14 ? var_7 : var_16)))) && (arr_12 [i_3])));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
    {
        var_23 ^= (-((0 ? var_1 : 238)));
        var_24 |= (((((var_16 | (arr_4 [i_4 - 2] [8])))) ? ((min(var_0, (arr_10 [4])))) : (arr_18 [i_4] [8])));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
    {
        var_25 = (arr_19 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_26 = (!var_12);
                    var_27 = ((var_13 ? (((((arr_13 [i_6] [i_5]) != var_1)))) : var_17));
                }
            }
        }
    }
    var_28 = ((!(246 != 55)));
    var_29 = ((var_3 ? var_14 : var_17));
    #pragma endscop
}
