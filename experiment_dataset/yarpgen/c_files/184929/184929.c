/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 43947;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_0 [1])));
        var_13 -= 64180;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_14 = var_10;
            arr_6 [i_0] [i_1] = (((((-(arr_4 [i_0 - 2] [i_1])))) ? ((1355 ? (arr_1 [i_1] [i_0]) : 19664)) : (~var_6)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((arr_2 [i_2]) ? ((((arr_1 [i_2] [i_0]) == 64316))) : (((!(arr_5 [i_2])))));
            var_15 ^= 1337;
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_16 &= ((!(!2844937703082414827)));
            arr_13 [i_0] = -45872;
        }
        var_17 -= ((!(arr_11 [i_0] [i_0 + 1] [i_0 - 1])));
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [i_4] = ((~(max((arr_11 [i_4] [i_4] [i_4]), (arr_11 [1] [i_4] [i_4])))));
        arr_19 [i_4] [i_4] = ((((((((-(arr_5 [i_4])))) ? 2480062019 : (((-(arr_4 [i_4] [3]))))))) ? ((min((arr_17 [6] [6]), (arr_7 [i_4] [i_4] [i_4])))) : (arr_4 [i_4] [i_4])));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_18 ^= (arr_10 [8]);
                            var_19 = ((~((-(arr_4 [i_8] [3])))));
                            var_20 *= -106;
                            arr_29 [i_7] = (!(((arr_2 [i_4]) || (arr_2 [i_4]))));
                        }
                        for (int i_9 = 2; i_9 < 7;i_9 += 1)
                        {
                            arr_33 [i_4] [i_5] [8] [1] [i_9] = (((arr_20 [i_7] [i_5]) & (((((((!(arr_3 [i_4])))) == var_4))))));
                            var_21 = (min(var_21, 0));
                            arr_34 [i_4] [i_5] [i_6] [i_7] [i_9] [7] = ((!(arr_7 [i_4] [9] [i_9 + 2])));
                            arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((!(((-(arr_7 [i_9 - 2] [i_6] [i_4]))))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_39 [i_10] [i_10] = (((arr_17 [i_4] [1]) ? (min(((0 ? 536870912 : 251)), ((11859 ? (arr_12 [i_10]) : 3758096383)))) : ((max((19677 + 1), (arr_38 [i_4] [1] [i_4] [i_4] [i_4] [i_4]))))));
                            var_22 = (min(var_22, ((((((-((max(19672, var_10)))))) * (((arr_32 [i_4] [i_4] [i_5] [i_7] [i_10] [i_7]) * 2480062011)))))));
                            arr_40 [i_10] [1] [i_6] [i_5] [i_4] [9] [i_10] = (((((-(arr_26 [i_10] [i_10] [i_6] [i_6] [i_5] [i_4])))) ? (((arr_20 [i_4] [i_4]) + ((((arr_14 [i_6] [i_5]) & 7883499264777802623))))) : 64180));
                        }
                        arr_41 [i_4] [i_4] [i_4] [2] = (min((((arr_2 [i_6]) * ((((arr_0 [i_4]) ? var_1 : (arr_30 [i_4] [i_5] [i_5] [i_7] [1] [3])))))), ((var_0 / (arr_20 [i_7] [i_5])))));
                        arr_42 [i_7] [i_7] [i_6] [i_5] [i_4] [i_4] = (arr_12 [i_5]);
                    }
                }
            }
            arr_43 [i_4] [i_5] = (((1111915951 * 1814905277) / ((-(arr_27 [i_5] [0] [i_5] [1] [i_4])))));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_46 [i_11] = ((arr_44 [i_11] [i_11]) ? ((((arr_44 [i_11] [i_11]) ? (arr_44 [i_11] [i_11]) : (arr_44 [i_11] [i_11])))) : (65522 + 8609575169837331953));
        arr_47 [i_11] [i_11] = (arr_44 [i_11] [i_11]);
    }
    #pragma endscop
}
