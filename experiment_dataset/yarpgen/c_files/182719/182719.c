/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_11 = min((!58), var_5);
        var_12 = (((((arr_1 [10] [i_0]) == 25)) ? var_6 : (min(var_4, ((var_9 ? 54553 : (arr_1 [i_0 - 1] [i_0 - 1])))))));
        var_13 += (var_1 >= -115);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    {
                        var_14 = (arr_2 [i_4 - 4]);
                        var_15 = ((875099896 ? (((arr_4 [i_4]) ? var_1 : var_9)) : (!-2)));
                        arr_17 [9] [i_2] [i_2] [i_3] [i_4] [9] = (-1454996877 ? 8589934591 : 2186549727);
                    }
                }
            }
        }
        var_16 = (max(var_16, (arr_4 [i_1])));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_17 = (max(var_17, 4294967295));
        var_18 = ((var_7 != ((((!(((-427 ? 3641483068285889667 : 258048)))))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_24 [i_6] [i_6] = ((min(0, 1056964608)));
                    arr_25 [i_7] [i_7] [i_6] = ((-(min((max(2858288066, -4194304)), (arr_6 [i_6 - 1])))));
                    var_19 = 250;
                    var_20 = var_1;
                }
            }
        }
        var_21 += ((!(((-105 | (var_5 | var_9))))));
    }
    var_22 = var_4;

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_23 = ((-((-0 ? 1378278598 : 7))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_24 = (((((((-(arr_11 [i_8] [i_9] [i_9] [i_10]))) < ((1 ? 127 : var_5)))))) * (min(((min(32704, (arr_28 [i_8] [i_8])))), ((-(arr_26 [i_9]))))));
                    var_25 += var_5;

                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_26 = max((((!9673104891489943543) ? (((-6 ? 0 : 243))) : -4294967295)), 0);
                        var_27 = (((max(((max(var_8, (arr_6 [i_8])))), -989726283)) == ((((((0 ? -1454996877 : 1122465732))) == (arr_29 [i_9 + 1] [i_8]))))));
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_28 -= var_2;
                        var_29 = 11834069036294790184;
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = (arr_40 [i_9 + 1] [i_8] [i_9]);
                        var_31 = (((max((arr_29 [i_9 + 1] [i_8]), (arr_9 [16] [16] [i_9 - 1]))) > (((((arr_3 [i_8] [1]) <= 18014394214514688))))));
                        var_32 = ((((((((arr_4 [i_8]) + var_3)) >> (-1 + 17)))) ? (!var_9) : (((!(((-9 ? 1050510120 : -112))))))));
                        arr_41 [i_8] = (((((((((arr_4 [i_8]) / var_7))) || ((min(var_4, (arr_6 [i_8]))))))) ^ ((min((arr_13 [i_8]), (min(var_8, var_5)))))));
                        arr_42 [i_8] [i_9] [i_8] [i_13] = ((-(arr_31 [i_8] [i_9 - 1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_33 = (!0);
                    arr_48 [i_8] [i_8] [i_8] = ((201 << (248 - 237)));
                }
            }
        }
        var_34 += (1331439029 / 8727096779857603822);
    }
    #pragma endscop
}
