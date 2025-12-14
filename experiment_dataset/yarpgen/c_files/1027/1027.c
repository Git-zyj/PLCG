/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-32767 - 1);
        var_16 -= 32766;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 = (min(((var_2 << (!4274239429034712089))), ((+((((arr_4 [i_1]) >= (arr_4 [i_1]))))))));
        var_18 = (min(var_18, ((min(2588, (((((arr_1 [i_1]) < -2589)) ? ((((arr_1 [i_1]) || -3924926208827504764))) : -2589)))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_9 [i_3] [4] [i_3] = ((!((var_8 == (arr_0 [i_2])))));
            var_19 = 0;
            arr_10 [i_3] [i_3] = (((min(18, (arr_1 [i_2]))) * ((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [9]))))));
        }

        /* vectorizable */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_14 [i_2] [i_2] = ((102 > (arr_11 [i_4 + 2] [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 8;i_6 += 1)
                {
                    {
                        arr_20 [i_2] [i_2] [i_2] [10] = ((arr_5 [10] [10]) ? 2588 : (arr_5 [i_6 + 3] [i_4 - 1]));
                        var_20 = ((38 ? (arr_8 [i_2] [i_2] [i_5]) : 51));
                        var_21 *= (((arr_16 [i_6 - 3] [i_6 - 2] [i_4 + 1] [i_4 - 1]) ? (arr_16 [i_6 - 1] [i_6 + 3] [i_4 + 1] [i_4 + 2]) : (arr_16 [i_6 + 2] [i_6 + 2] [i_4 + 2] [i_4 + 1])));
                        var_22 = (((arr_19 [i_4] [i_4 + 2] [6] [i_4 + 1]) ? (arr_19 [i_4] [i_4 + 2] [4] [3]) : (arr_19 [i_4] [i_4 + 1] [i_4] [i_4])));
                        var_23 = (!0);
                    }
                }
            }
            var_24 ^= (arr_16 [9] [i_4] [2] [9]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    {
                        var_25 = ((917576756 ? 2 : 4294967257));
                        var_26 = var_10;
                        arr_27 [i_2] [i_4] [i_7] [i_8] = (((((26480 ? 32743 : (arr_26 [i_2])))) ? -3924926208827504764 : 3563490163708253753));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            arr_35 [i_4] [i_9 - 3] [i_4] = 4325451253805305981;
                            var_27 |= ((!(!19)));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_28 = (((((var_1 ? var_0 : var_3))) ? var_14 : 117));
                            var_29 = (3310461418 == 4294967268);
                            var_30 = (((arr_6 [i_12] [i_10]) ? (((arr_28 [i_2] [i_2] [i_9] [i_10]) ? (arr_25 [i_2] [i_4] [i_2] [i_10] [i_12] [8]) : 26762)) : var_7));
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_31 -= var_2;
                            arr_40 [7] [i_4] [i_9 + 3] [i_4] [10] = (((arr_15 [i_4 + 1] [i_4] [i_4 + 2]) & 205));
                            var_32 = ((!(arr_39 [i_2] [10] [i_9] [i_2] [i_13])));
                        }
                        arr_41 [i_2] [0] [0] [i_2] [i_2] [0] = -64;
                    }
                }
            }
        }
        arr_42 [i_2] = (((min((min(9, -11)), (arr_37 [i_2] [i_2] [i_2]))) >= (!-410038187)));
    }
    var_33 = ((var_0 && ((min(var_0, var_1)))));
    var_34 -= (((((var_2 ? (var_5 % var_15) : (min(4294967290, 32743))))) ? var_9 : var_12));
    var_35 |= (min(var_14, (((((624333059565628357 ? var_8 : var_5))) ? (min((-32767 - 1), 133693440)) : var_0))));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            {
                arr_47 [i_15] = ((!(((((((((-127 - 1) + 2147483647)) >> (-21559 + 21585)))) ? (16806 - -22611) : (min(var_2, (arr_46 [i_14] [i_15] [i_15]))))))));
                var_36 = ((((1879048192 < (arr_43 [i_14] [i_15]))) ? 3310461415 : (min(18446743936270598144, ((min(4, var_8)))))));
            }
        }
    }
    #pragma endscop
}
