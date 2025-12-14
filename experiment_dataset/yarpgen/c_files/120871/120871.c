/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 ^= ((62 && ((((min(26345, var_3))) && (((2146435072 ? var_3 : var_5)))))));
                    arr_10 [i_0] [i_0] [i_0] = -2146435078;
                    var_11 += (max((max(var_1, 2146435071)), 57083));
                    var_12 = (2146435082 < -1);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_14 [4] &= (((!var_0) || 20029));

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            arr_17 [i_3] [i_4] = ((!(-2146435062 | 18446744073709551605)));
            arr_18 [i_3] [10] [0] &= (~49700);
            var_13 &= (((var_1 ? var_2 : var_7)));
            arr_19 [i_3] = ((-2146435080 ? var_9 : var_3));
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_14 += (!var_3);
                    var_15 ^= (~2147483636);
                    var_16 = ((-2146435070 ? 3821481999 : 2146435082));
                }
            }
        }
        var_17 = 2146435072;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_18 = (~20839);
        var_19 = (((((var_4 ? 20809 : -1))) ? var_7 : (var_3 / var_5)));
        var_20 |= (max(((var_2 << (15830 - 15819))), 44696));
    }
    var_21 = var_9;
    var_22 = ((((((min(2146435072, 2146435068)) / var_0))) + var_3));
    var_23 = (min((((min(120596610239516593, -2146435079)) & var_2)), (44697 & 4294967295)));
    #pragma endscop
}
