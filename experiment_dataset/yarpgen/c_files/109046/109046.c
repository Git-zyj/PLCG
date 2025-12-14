/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1319;
    var_18 = var_6;
    var_19 = ((((max(var_7, (max(28387, 25154))))) ? var_10 : (((var_7 && (var_10 >= var_9))))));
    var_20 = (!var_3);

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_21 = (max(var_21, var_14));
        arr_2 [i_0] = ((((((var_6 || (arr_1 [i_0 - 3]))) ? (var_3 || var_3) : (((arr_1 [i_0 - 4]) ? (arr_0 [i_0]) : -8)))) == (((((min(var_9, (-32767 - 1)))) < var_1)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_2] = ((((((min(var_14, -25182))) + ((min((arr_5 [i_1]), (arr_0 [i_1])))))) == var_10));
            arr_9 [10] [i_2] &= (max((((!var_4) + var_15)), (((arr_0 [i_1]) ? var_12 : (~var_8)))));
        }
        var_22 -= (((~15796) ? ((~(arr_5 [i_1]))) : (min((var_1 && var_10), (((arr_7 [i_1]) ? -25165 : (arr_5 [i_1])))))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        var_23 = -10706;
                        var_24 *= min((max((min(var_7, (arr_12 [i_3] [i_3] [i_3]))), (!var_0))), var_1);
                        arr_16 [i_5 - 3] [i_1] [i_4] [i_1] [i_1] = ((var_0 ? ((var_15 ? 32759 : 32760)) : (arr_11 [i_3] [i_3] [i_3 + 1])));
                        var_25 -= (min((arr_6 [i_4] [i_4]), var_9));
                        arr_17 [i_1] [i_1] = (arr_15 [i_3 - 4] [i_3] [i_3 - 4] [i_5] [i_1] [i_3]);
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_20 [i_6] [i_1] = (~var_6);
            var_26 = ((var_16 ? 10602 : (((arr_15 [i_6] [i_6] [7] [i_6] [i_1] [i_1]) ? (arr_15 [i_1] [4] [i_1] [i_1] [i_1] [i_6]) : var_4))));
            var_27 = max(var_15, (((!((min(var_10, (arr_5 [i_6]))))))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_28 = (((!var_0) ? (((var_13 + 2147483647) << (((arr_7 [i_1]) - 27152)))) : (((!(~var_5))))));
            var_29 += var_5;
            var_30 = (min((max(((min(28549, 5206))), (((arr_0 [i_1]) | (arr_6 [i_1] [i_7]))))), ((((((arr_13 [0] [0] [i_7]) ? 28549 : var_6))) ? ((var_10 ? 28549 : -1941)) : (((arr_14 [i_7] [i_7] [i_1] [i_1]) ? var_10 : (arr_4 [i_1] [i_7])))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_31 -= (min(-var_13, (arr_15 [i_1] [i_1] [i_1] [i_1] [8] [i_1])));
            arr_26 [i_1] [i_8] = (max(((var_6 ? 19380 : var_8)), (((arr_7 [i_1]) ? 19373 : var_4))));
            var_32 = ((-((-(arr_21 [i_1])))));
            var_33 = (min(var_33, (((((min(-15881, (min(19380, -12885))))) ? ((-24181 ? 19353 : -12819)) : ((112 ? ((-6024 ? -25165 : 27301)) : -9518)))))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_34 *= ((+(((-14343 ^ var_11) ? (~9625) : var_8))));
            arr_29 [2] [0] |= var_5;
            var_35 = ((-((-(arr_28 [i_9])))));
            arr_30 [i_1] [i_9] [i_1] = (((((-((-29150 ? -19381 : -27302))))) ? (((arr_23 [i_1]) % (arr_14 [i_1] [i_1] [i_1] [i_9]))) : (((arr_3 [i_1]) ? (((arr_0 [i_9]) ? var_14 : var_2)) : var_10))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_36 = (((((0 ? var_0 : -9626))) || (((var_13 ? 16123 : var_15)))));
        arr_33 [i_10] [i_10] = (((arr_0 [i_10]) & (arr_0 [i_10])));
        arr_34 [i_10] [i_10] = ((-9960 ? (((arr_32 [i_10]) ? -21175 : var_16)) : (~13983)));
        var_37 = (((-32767 - 1) ? 16170 : ((var_4 ? var_13 : -19381))));
    }
    #pragma endscop
}
