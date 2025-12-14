/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? (-var_8 ^ var_0) : var_0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] &= (((((((min(64862, 64))) ? (var_6 * var_2) : var_6))) || ((min(-121, -29634)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (+(((((arr_2 [i_0]) ^ var_4)) / 679)));
                    arr_8 [i_0] [i_0] = -125;
                }
            }
        }
        var_12 -= (min(((min(0, (!0)))), ((-(arr_6 [i_0])))));
        var_13 = (((((~4294967295) ? ((max(var_0, (arr_2 [i_0])))) : (((!(arr_2 [i_0]))))))) ? var_4 : ((-126 ? 46 : -46)));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_12 [0] |= (((((((arr_7 [i_3] [i_3] [i_3 + 2]) ? 48 : 4405393411383136731)))) ? (min(((var_6 ? (arr_0 [i_3]) : 2876013279)), 673)) : (827439707 > 2027807874)));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_17 [4] [i_3] [i_4] = ((((~((-88 ? var_3 : (arr_1 [i_4]))))) == ((var_6 ? (arr_14 [i_3 - 1] [i_3 + 3] [i_3 + 1]) : (min(var_4, var_8))))));
            var_14 -= (arr_13 [i_4] [i_4] [i_3 + 4]);
            var_15 = (max(var_15, 96));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_16 ^= var_7;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_17 += (!22896);
                        var_18 = (!var_9);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_19 = (max(var_19, (((~(min((arr_31 [i_5] [10] [i_8] [i_9] [i_8]), ((min(2027807874, var_6))))))))));
                        var_20 = var_0;
                        arr_32 [i_3] [i_5] [i_3] [i_8] [i_3] = ((((min((((arr_11 [i_5] [i_8]) | var_1)), var_0))) ? ((((138 ? 64862 : 1486774980)))) : ((0 ? (arr_27 [i_3] [i_8 + 2] [1] [i_8 + 2] [i_9]) : (((-126 ? var_8 : var_9)))))));
                        var_21 *= ((~(((13407847505458701295 > -74) ? (arr_9 [i_3]) : (~var_8)))));

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_35 [i_3] [i_3] [i_8] [13] [i_10] = var_5;
                            var_22 = (max(var_22, ((min((((min((arr_11 [i_5] [i_3]), var_1)) / var_4)), (((((arr_0 [i_10]) ? (arr_29 [i_3 + 4] [i_5] [i_8]) : var_8)))))))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_39 [i_3 + 2] [i_3] = (((((arr_28 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 3]) + (arr_28 [i_3 + 4] [i_3] [i_3 + 4] [i_3 - 1]))) > (arr_13 [i_11] [i_11] [i_3 + 3])));
            arr_40 [6] [i_3 + 4] [6] &= (arr_14 [i_3 + 4] [i_11] [i_11]);
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    arr_47 [i_13] [i_3] [i_13] = ((((((arr_11 [i_3 + 2] [i_3 + 4]) ? 0 : var_5))) ? ((min((arr_2 [i_3 - 1]), (arr_2 [i_3 + 3])))) : (((arr_2 [i_3 + 1]) + (arr_11 [i_3 - 1] [i_3 - 1])))));
                    var_23 = (min(var_23, ((((((((arr_4 [i_3]) ? 0 : var_7))) ? (arr_42 [i_3 - 1] [i_12 + 2]) : (max((arr_34 [i_3] [0] [i_13]), var_5))))))));
                    var_24 = (max(var_24, ((min((((~var_0) ? 126 : (min((arr_19 [1] [i_13]), var_9)))), (min((arr_45 [i_3]), (max(0, (arr_41 [10] [i_3] [i_3 + 3]))))))))));
                }
            }
        }
    }
    var_25 = (min(var_25, var_5));
    #pragma endscop
}
