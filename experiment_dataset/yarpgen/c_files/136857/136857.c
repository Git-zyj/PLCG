/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 += ((-var_13 != ((var_1 % (~var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = ((((((min(730312648, 3564654647)) >> (var_3 - 565740547)))) ? (((max(var_5, var_5)) % ((min(var_1, 38259))))) : (((((730312649 ? var_0 : (arr_0 [i_0]))) % var_7)))));
                        var_17 = (max(var_17, ((min(var_6, ((((((arr_3 [i_1] [12] [12]) ? 531 : (arr_0 [0])))) ? (max((arr_5 [i_0] [i_1] [i_2] [i_3]), var_8)) : (arr_3 [i_0 - 3] [3] [i_1 + 1]))))))));
                    }
                    var_18 |= ((35221 + ((max(128, 12304)))));
                    arr_8 [10] [i_2] [i_2] = ((max(((((arr_2 [i_0]) != 9223372036854775789))), (min(var_13, 0)))));
                }
            }
        }
    }
    var_19 = (!var_11);

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_20 = -35225;
        var_21 = 832967235;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = var_8;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    var_23 &= (((98359719 < 288230376150663168) << (-1 + 29)));
                    arr_18 [i_6] [i_6] [i_6] [15] = ((var_4 == (((((((arr_14 [18] [i_6] [i_7]) ? (arr_14 [i_5] [i_7] [21]) : var_3))) ? 0 : (arr_10 [i_7 + 1]))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_22 [i_8] [i_8] = 67108862;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    arr_28 [i_8] [i_9] [3] = ((((((min(1, 65518))) ? ((1 ? 219433461 : 3330138817958052984)) : (13347836638950704824 || 12))) / var_4));
                    var_24 = ((((max(var_1, (arr_25 [8] [8] [8])))) ? (max(var_9, (1 ^ 40))) : (((((((((arr_21 [i_9]) + 2147483647)) << (((arr_24 [i_10]) - 4061594920))))) != (((arr_25 [i_10] [i_10] [i_10]) ? 4294967295 : var_1)))))));
                    arr_29 [i_9] [i_9] [i_10] = (((!(arr_17 [23] [i_9] [i_9] [i_9 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
