/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (32760 & -5812456636658621137);
        var_18 += (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = var_1;
        arr_6 [i_1] = (arr_3 [i_1]);
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_20 = ((((min(127, var_1))) - (arr_4 [i_2])));
                arr_17 [i_2] [i_3] = (max((arr_0 [i_2]), (arr_16 [i_3])));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_21 += arr_20 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 2];
                    var_22 = (max(var_22, (((((max(98, 0))) ? 42275 : var_2)))));
                }
                var_23 -= -98;
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_24 -= (((arr_11 [i_2] [i_2]) >> (((arr_12 [i_2] [12] [i_3]) - 85))));
                var_25 += ((((min((((-3356923875691685564 ? 105 : -14043))), (var_7 + 151)))) ? ((-32766 ? ((min(108, 89))) : (arr_18 [i_3] [i_3 + 2] [i_6]))) : 0));
            }
            arr_24 [i_2] [i_3] = ((-(((arr_12 [i_3 + 4] [i_3] [i_3 + 4]) ? 196 : 45575))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_26 = (arr_18 [i_2] [i_2] [i_2]);
            var_27 += ((-(((((-111 ? -101 : -8792006109883947175)) >= 255)))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_28 *= (arr_3 [i_7]);
                            var_29 -= (+(((arr_13 [i_2] [i_2] [i_2]) ? (arr_13 [i_2] [i_7] [i_9]) : -5892)));
                        }
                    }
                }
            }
            var_30 &= (((((42 ? 101 : -102))) ? ((min((arr_5 [i_7] [i_7]), -86))) : 1623535010));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_31 = ((-(arr_4 [i_11])));
            arr_40 [2] [i_11] [i_2] = ((33 ? (((15412 > -32749) ? 192 : (45567 - -86))) : -10073));
        }
        arr_41 [i_2] = ((((min(1, (min(var_8, var_0))))) ? 17507 : 105));
        arr_42 [5] = ((-((2525565819 ? var_0 : 185))));
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_32 = ((-(var_8 <= 2040445997)));
        arr_45 [i_12] [4] = (((min((arr_3 [1]), var_4)) > -1160));
        var_33 |= ((~(arr_5 [i_12] [i_12])));
    }
    #pragma endscop
}
