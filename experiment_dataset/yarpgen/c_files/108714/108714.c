/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 &= (arr_8 [10] [i_1] [4]);
                    var_20 = (min(var_20, (((~(((arr_6 [11] [i_1] [i_0]) ? ((~(arr_7 [i_2] [i_1] [i_0] [i_0]))) : (~var_7))))))));
                    arr_9 [10] [i_1] [i_2] |= (((((974999003 && 974999018) ? 512 : (!1))) | 235));
                }
            }
        }
    }
    var_21 = ((var_2 ? ((((max(var_5, var_1)) > var_9))) : ((((max(55905, var_4))) * (2694736578 == 4126486523)))));

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_12 [i_3 + 2] &= (((168480792 & 65533) & (((min(var_2, (arr_1 [8])))))));
        var_22 = (max(var_22, ((max((((-(arr_0 [i_3])))), ((var_13 ? (arr_2 [i_3]) : (arr_2 [i_3]))))))));
        arr_13 [1] = var_11;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_23 &= (((((var_7 != ((var_13 ? (arr_7 [i_4] [i_4] [i_4] [3]) : 18343))))) - (((arr_2 [i_4]) | ((max((arr_11 [1]), (arr_10 [i_4]))))))));
        var_24 = ((((arr_14 [i_4] [i_4]) ? (arr_14 [i_4] [i_4]) : (arr_14 [6] [i_4]))));
        arr_18 [i_4] = ((((max((arr_15 [i_4]), (arr_15 [i_4])))) ? (arr_15 [i_4]) : var_7));
        var_25 += ((-(arr_17 [i_4])));
        var_26 = (max(var_26, (((1 >> (13827943156854857686 - 13827943156854857660))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_21 [18] = (((var_10 && var_16) ? ((-7760459891134604929 ? (arr_20 [i_5]) : 2694736578)) : var_7));
        var_27 = ((((((arr_20 [i_5]) ? 73127384 : var_2))) ? ((1 >> (var_2 - 51902))) : ((var_17 & (arr_20 [i_5])))));

        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            arr_25 [i_6] = 0;

            for (int i_7 = 3; i_7 < 17;i_7 += 1)
            {
                var_28 += var_14;
                var_29 = (((var_3 ? (arr_26 [i_6]) : var_6)) != (((var_14 ? var_13 : var_13))));
            }
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_30 = ((var_16 ? var_6 : (((0 ? 1 : 1)))));
            var_31 -= (((arr_29 [i_8 - 1] [i_5] [16]) ? (arr_24 [i_8 + 2] [12] [i_8 - 1]) : (arr_29 [i_5] [i_8 - 1] [14])));
            var_32 += 71;
            var_33 ^= (((2142886169207322634 * 0) ? -var_0 : ((((arr_24 [i_8 + 3] [12] [10]) / (arr_28 [i_5] [i_8]))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_34 = (var_11 ? var_7 : (arr_29 [i_5] [i_5] [8]));

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_37 [i_5] [i_9] [i_10] [i_11] = (((arr_29 [i_5] [i_9] [i_9]) / (arr_31 [i_5] [i_11])));
                    arr_38 [i_9] = ((-7785 ? ((var_3 ? var_11 : (arr_28 [i_9] [i_10]))) : -var_15));
                }

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_35 &= (((arr_20 [i_9]) ? ((((arr_31 [i_5] [i_5]) ? var_13 : (arr_33 [i_5] [14] [14] [i_5])))) : (var_18 | 16216251547650750476)));
                    arr_41 [i_5] [i_9] [i_5] = (39855 - 26074);
                    var_36 = (((arr_29 [i_9] [i_9] [i_9]) ? (arr_34 [i_9] [i_9] [i_10]) : var_2));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_37 = (((arr_43 [i_9] [i_9]) ? var_6 : (((var_17 - (arr_26 [i_9]))))));
                    arr_44 [i_9] = ((-589995693899305786 ? 1859806401 : 1));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_38 = (-var_10 % var_6);
                        var_39 -= (((arr_22 [i_10]) ? (~var_3) : var_14));
                        var_40 += (((arr_32 [i_5] [i_9] [7]) ? (arr_32 [i_5] [i_14] [i_10]) : (arr_32 [i_5] [i_5] [i_5])));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_41 = (arr_46 [19] [i_9] [i_10] [14] [i_15]);
                        var_42 -= (arr_48 [i_5] [i_13]);
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        arr_52 [i_5] [i_5] [i_9] [i_5] = (arr_51 [i_5] [i_9] [i_10] [i_13] [i_16]);
                        var_43 -= (((arr_22 [i_9]) ? var_9 : 168480766));
                    }
                }
            }
            arr_53 [i_5] [i_9] [i_9] = ((!(arr_42 [i_5] [i_5] [i_9])));
        }
        var_44 |= ((((((arr_26 [6]) ? 2308807254 : (arr_45 [14] [i_5])))) ? -var_7 : (arr_19 [i_5])));
    }
    #pragma endscop
}
