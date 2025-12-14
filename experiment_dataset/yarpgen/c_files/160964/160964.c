/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 &= var_7;
    var_14 = var_9;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) && -27928));
        var_16 = (max(((((var_3 * var_2) || var_1))), ((min((arr_2 [i_0]), 2147483647)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = (arr_5 [i_0] [i_1]);
            arr_7 [i_0] = (min(0, 4153916049647103638));
        }
        var_18 = (--80);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [19] [19] [i_3] = (max(-2147483647, ((-7731845403730236191 ? (arr_10 [i_0 - 1] [i_0] [i_0]) : 7731845403730236167))));
                    var_19 = (arr_3 [i_0]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 = (max(var_20, ((((((0 ? (arr_16 [i_4]) : -2147483635))) ? (arr_16 [i_4]) : (((-2147483647 - 1) % (arr_15 [i_4]))))))));
        var_21 ^= ((~((min((arr_15 [i_4]), (arr_14 [i_4]))))));
        arr_17 [i_4] [i_4] = 2147483647;
        var_22 = (1 == 23611);
        var_23 = ((((max((arr_15 [i_4]), (arr_15 [i_4])))) ? ((max((arr_15 [i_4]), (arr_15 [i_4])))) : ((~(arr_15 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((-(arr_19 [i_5])));
        arr_21 [i_5] [i_5] = (((arr_19 [i_5]) ? var_4 : (arr_19 [i_5])));
        var_24 *= ((!(arr_19 [i_5])));
        arr_22 [i_5] [i_5] = var_0;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_26 [0] &= min((((1 - (arr_0 [i_6])))), (((arr_0 [i_6]) ? (arr_0 [i_6]) : 10596424310157860391)));
        var_25 -= min((((min((arr_4 [i_6] [i_6]), var_2)))), (min((arr_6 [i_6] [0] [i_6]), (((arr_0 [i_6]) ? (arr_4 [i_6] [i_6]) : var_1)))));
        var_26 = ((-23611 ? (((!((((arr_18 [i_6] [i_6]) ? (arr_11 [i_6]) : 7731845403730236169)))))) : ((-(arr_11 [i_6])))));
    }
    #pragma endscop
}
