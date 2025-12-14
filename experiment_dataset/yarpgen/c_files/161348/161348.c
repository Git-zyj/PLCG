/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((~var_9) ? (arr_2 [4] [4]) : ((var_3 & (arr_1 [i_0] [i_0 + 1]))))))));
        var_20 *= ((~(4294967295 | var_8)));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = ((((~(1287111017 | -2075272371))) ^ (((~(arr_1 [i_1 - 3] [i_1 + 1]))))));
        var_22 *= (((max((arr_5 [i_1] [i_1 - 2]), var_9))) ? (arr_0 [i_1 - 3]) : ((var_17 ? (arr_5 [i_1] [i_1 - 2]) : var_13)));
        arr_6 [i_1] &= ((-(((4294967279 && (arr_0 [i_1 - 1]))))));
        var_23 = ((127 ? (~3007856264) : (max((arr_2 [i_1 - 3] [6]), var_14))));
    }
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        var_24 &= (!var_18);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_25 = (max(var_25, -0));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((max((((!(((var_12 ? var_2 : -1027506999)))))), (min(39528, -2075272371)))))));
                                var_27 = ((558191564 ? ((~((-2075272371 ? var_6 : 0)))) : (-1537795005 / 197)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 *= var_12;
    var_29 = 3007856279;
    var_30 = var_8;
    #pragma endscop
}
