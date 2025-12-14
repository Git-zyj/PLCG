/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((~var_3), 4309205790216084222)), 3938350865861597547));
    var_21 = (((((~(var_13 ^ var_18)))) ? var_3 : var_7));
    var_22 = ((((-(var_14 / var_2))) * var_12));
    var_23 = 10164707993867204276;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_24 = 41263;
            arr_6 [i_1 + 1] [i_0] = 50120;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_25 = (min(15429, -8192));
                            var_26 = ((var_18 - (((~var_9) ? (min(var_9, (arr_1 [i_0] [i_1]))) : (~var_4)))));
                        }
                    }
                }
            }
            arr_15 [15] [15] = (min((17377 & -632502289), (16352 ^ var_6)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_22 [i_0] [i_0] [i_5] [13] = (!var_16);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_29 [i_8 - 1] = (arr_18 [i_5] [17]);
                            var_27 = ((!(arr_11 [i_5] [i_5] [i_6] [i_5] [i_0])));
                            var_28 = ((arr_11 [11] [i_5] [11] [i_6 - 1] [i_8 + 1]) * 97851796);
                            arr_30 [i_0] [i_5] [i_6] [14] [i_8] = (-1644707067177231581 | var_5);
                            var_29 *= ((!(arr_3 [i_0])));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_30 -= var_17;
                var_31 = -742702826;
                var_32 += (((((1 & (arr_18 [i_9] [0])))) ? 1 : (((((arr_18 [20] [i_0]) + 9223372036854775807)) << (var_16 - 49759454)))));
                var_33 = (-(((arr_21 [1] [1] [i_5] [i_0]) ? 32 : (arr_33 [0] [0] [0]))));
                var_34 = (min(var_34, 3249095132278895215));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_35 ^= ((-(arr_34 [i_12] [i_5])));
                            var_36 = (min(var_36, (1480905353 && 6)));
                        }
                    }
                }
                var_37 = ((var_11 ^ (arr_37 [i_0] [i_5] [i_0] [i_5])));
            }
            var_38 += ((var_13 ? 32 : ((var_19 ? var_15 : 16123850499933601193))));
            var_39 = (min(var_39, (!21196)));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
        {
            var_40 = (((((-((-20 ? 16777200 : -16777200))))) ? var_14 : ((var_14 ? var_7 : (!-1644707067177231561)))));
            arr_44 [1] [i_0] = var_5;
            var_41 = (max((((~(arr_33 [i_13] [i_13] [i_0])))), ((24423 ? -832999859 : 3551886900))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
        {
            var_42 = (var_9 ^ (arr_17 [i_14]));
            var_43 -= var_15;
        }
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        arr_55 [i_0] [i_15] [i_15] [i_16] [i_16] [i_17] = ((!(((-((max(7684, var_18))))))));
                        var_44 = (((~62) ? ((min(var_19, var_8))) : (max(1116892707587883008, 57344))));
                    }
                }
            }
        }
        var_45 = min((((131064 >= -84) - (142989288169013248 && -10))), ((max(30, var_3))));
        var_46 = ((((var_3 ? (~var_11) : var_14)) | 2147352576));
        var_47 = (max((arr_47 [i_0] [i_0]), var_1));
    }
    #pragma endscop
}
