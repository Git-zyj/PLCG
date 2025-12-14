/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (!-62);
        var_21 = (min(var_21, (!-13035)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = min((min((arr_1 [i_1]), (arr_1 [i_1]))), (arr_1 [i_1]));
        arr_6 [i_1] = (arr_4 [i_1]);
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_23 = (max((-9223372036854775807 - 1), 221701375));
        arr_9 [i_2] = arr_7 [4] [i_2];

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_24 *= (((arr_10 [i_2] [i_2] [i_2]) ? (arr_7 [i_2] [i_3]) : (arr_8 [i_2])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((!(-1 / 4073265921))))));
                            arr_21 [i_2] [i_3] [i_3] = (arr_10 [i_2] [i_2] [i_3]);
                            var_26 = ((+(((arr_10 [i_2] [i_3] [i_3]) ? 511 : (arr_16 [i_2] [i_3] [i_5] [i_6])))));
                        }
                    }
                }
            }
            var_27 ^= (0 + 2341105414);
        }
        arr_22 [i_2] = 0;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_28 = (max((((!(arr_23 [i_7] [i_7])))), 1));
        arr_25 [i_7] = (-9223372036854775807 - 1);
        var_29 = (((((((var_4 - (arr_24 [i_7])))) ? ((214 ? (arr_23 [9] [9]) : (arr_24 [i_7]))) : -117)) <= (+-0)));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_28 [i_8] [8] = (((max((~0), (max(199, 18446744073709551615))))) ? (((arr_1 [i_8]) ? (((114688 ? 4073265921 : var_3))) : (arr_14 [6] [16] [i_8] [i_8]))) : ((((!(arr_2 [i_8]))))));
        var_30 = (max(var_30, (((((-117 ? (arr_27 [i_8] [i_8]) : (~32767))) ^ (!138))))));
        arr_29 [i_8] [i_8] = (-(((arr_20 [i_8] [i_8]) * (arr_20 [i_8] [i_8]))));
        arr_30 [i_8] = ((-(!112)));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_34 [i_9] = ((((arr_33 [8] [i_9]) ? 32766 : ((-(arr_33 [i_9] [i_9]))))));

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_37 [i_9] [i_10] = (((-9223372036854775807 - 1) > 13259));
            arr_38 [i_9] [i_10] = ((((139 > (arr_31 [2] [i_10]))) ? (((-(arr_32 [14] [i_10])))) : (arr_36 [i_9])));
            arr_39 [i_9] = (221701375 <= var_2);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_31 = ((arr_41 [i_9]) ? var_5 : 39);
            arr_42 [i_9] [i_11] = (arr_36 [i_9]);
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_32 = (~-114688);
            arr_45 [i_12] [i_12] [i_12] = (arr_31 [i_9] [i_12]);
            var_33 = (((((!(arr_44 [21] [i_12] [i_12])))) + 524287));
            var_34 = (min(var_34, (((-((-(159 / 139))))))));
        }
    }
    #pragma endscop
}
