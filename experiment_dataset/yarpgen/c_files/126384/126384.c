/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))) == (min((arr_4 [i_0] [i_1]), var_2))));
                var_18 = (min(var_18, (((((~(min(var_17, -157730265)))) | ((min(var_0, var_14))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_11 [i_2] [i_1] [i_2] [i_1] = var_0;
                    var_19 *= -22524;
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_20 = ((12065358236528986777 ? 4099269970836760373 : (arr_4 [i_1] [i_1])));
                    var_21 = (min(var_21, (((6381385837180564838 ? (arr_13 [i_3 + 1]) : (arr_13 [i_3 - 1]))))));
                    var_22 = ((var_15 ? var_14 : 12065358236528986777));
                    var_23 = ((((arr_5 [i_1] [i_1]) ? -26526 : 663808335)));
                }
                for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_24 *= ((((((arr_15 [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4 - 3]) << (((arr_14 [i_0] [i_4 - 1] [i_4 - 3]) + 12270))))) ? ((var_13 ? (arr_15 [i_4 - 2] [i_4 + 2] [i_4 - 1] [0]) : 2305843009211596800)) : ((((arr_10 [i_4 + 2] [i_4 + 3] [i_4 - 2]) | (arr_15 [i_4 - 3] [i_4 - 1] [i_4 - 1] [i_4]))))));
                    arr_18 [i_4] [i_1] [i_1] [i_4] = 6381385837180564838;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_25 ^= ((((max((arr_15 [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 1]), -6397757899115427119))) && -14347474102872791242));
                            var_26 = (max(((-(arr_12 [i_0] [i_1] [i_6 + 1] [i_6]))), ((max(var_7, (arr_12 [i_0] [i_1] [i_5] [i_6]))))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        arr_27 [i_7] = ((var_6 ? 14347474102872791228 : ((((arr_23 [i_7]) <= var_3)))));
        var_27 = var_10;
        var_28 = -var_0;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_29 &= ((12065358236528986784 ? (-8778332787706345091 && 4099269970836760350) : (arr_0 [i_8] [i_8])));
        var_30 = ((~(((arr_1 [i_8]) ? (arr_8 [i_8] [i_8] [i_8] [i_8]) : ((65535 ? var_16 : (arr_13 [i_8])))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] [i_9] = (((39 % var_8) != var_9));
        var_31 = 6381385837180564854;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        var_32 = ((var_10 * (arr_32 [i_10])));
        arr_36 [i_10] = (4099269970836760350 ? var_6 : var_17);
    }
    #pragma endscop
}
