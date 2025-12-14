/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_1));
    var_13 = ((var_5 != (min(var_1, (min(var_5, 15280))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min(var_14, (((-15280 ? (-9223372036854775807 - 1) : 12507942213750891999)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (~var_11)));
            var_16 = (max(var_16, var_5));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_17 = 8191;
            var_18 = (max(var_18, -15280));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_19 -= (arr_1 [i_3]);
        var_20 -= (min(((((((var_9 ? var_1 : (arr_10 [i_3])))) && (((1840440883 ? -2765956449286044188 : 4194176)))))), ((7879706058151286764 ? 247 : 4754555428703550389))));
        var_21 = ((((((arr_8 [i_3] [i_3] [i_3]) || ((min(12, -15286)))))) >> (((((250 != var_2) ? var_9 : var_0)) - 493707035))));
        var_22 -= ((!(((0 ? 202 : ((1840440883 ? 144115188075855360 : 1737640254735745971)))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_4] [i_3] &= 242;
                    var_23 = ((((((var_5 ^ var_3) + 1059806186))) ? var_0 : (((!(arr_13 [i_3] [i_3]))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_24 = (min(var_24, (((((min(var_0, 0))) ? ((((arr_0 [i_6]) || (arr_0 [i_6])))) : (((!(arr_0 [i_6])))))))));
        arr_21 [i_6] = (min(((min((arr_1 [i_6]), (arr_7 [9] [i_6])))), ((2 + (arr_18 [i_6])))));
        arr_22 [i_6] = var_10;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_30 [i_9] [i_9] [i_9] [5] = ((((((var_2 ? var_5 : 274877906943)))) * 0));
                        var_25 ^= (arr_8 [i_7] [i_8] [i_9]);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_26 = ((arr_7 [i_10] [i_10]) & (8190 & 771647209868323385));
        var_27 &= ((~((57320 + ((var_9 ? 242 : var_0))))));
        var_28 = var_9;
        var_29 = (min(0, 1));
    }
    #pragma endscop
}
