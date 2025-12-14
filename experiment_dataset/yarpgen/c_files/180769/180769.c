/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] |= 8;
        var_11 &= (((((9223372036854775807 >> (((-127 - 1) + 145))))) ? (arr_0 [i_0 + 3]) : var_3));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_12 = (-(min((arr_5 [i_1]), (arr_6 [i_1]))));
        var_13 = (i_1 % 2 == 0) ? ((((((((arr_5 [i_1]) + 2147483647)) << (13996572301845279738 - 13996572301845279738))) >> (((arr_5 [i_1]) + 925868734))))) : ((((((((arr_5 [i_1]) + 2147483647)) << (13996572301845279738 - 13996572301845279738))) >> (((((arr_5 [i_1]) + 925868734)) + 127364590)))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 = var_10;
                    var_15 ^= (!5992009606547658922);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                {
                    arr_22 [10] [i_5] = ((~(((!((min((arr_12 [i_2 + 1] [16] [i_6]), var_5))))))));

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_16 = (min(var_16, ((((((((min(11459988138619274484, -113))) ? (max((arr_8 [i_5]), 9003739106563065597)) : (((arr_9 [i_7]) & 10880097814805018933))))) ? 7566646258904532685 : (min(((max(var_8, var_6))), (~2569397711299569095))))))));
                        arr_26 [i_2] [i_5] [i_2] [i_7 - 1] [i_5] &= (arr_10 [i_6]);
                        arr_27 [i_7] [i_7] [i_5] [17] [7] = arr_15 [i_2] [9] [i_6 + 2];
                    }
                    var_17 = (arr_12 [i_2 + 1] [i_2] [i_6 - 2]);
                    arr_28 [i_2] [i_2] [10] [7] |= (max(var_8, ((-(arr_11 [i_2] [i_2] [i_2 + 1])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_18 = arr_24 [i_8];
        var_19 |= (arr_20 [i_8] [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_37 [i_8] [i_10] [i_8] = (arr_25 [i_9] [i_9 + 1] [i_8] [18]);
                    arr_38 [8] [i_8] [3] [2] = 9443004967146486019;
                }
            }
        }
        var_20 = -801064805;
    }
    var_21 = (max(((min(var_2, (var_7 == var_9)))), 12898085600074407649));
    var_22 = (5548658473635143966 > var_1);
    #pragma endscop
}
