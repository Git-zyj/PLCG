/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [12] [i_0] = ((((arr_1 [i_0]) ^ (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((var_3 ? (arr_0 [i_0] [i_0]) : ((min((arr_1 [9]), -21)))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = ((var_2 % (arr_6 [i_1])));
            arr_12 [i_1] [i_1] = (((57129 >> (var_11 - 1670587718))) << (var_3 + 30292));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] = 3565461065183810541;
                        arr_20 [i_1] [i_3] [i_1] [i_5] [i_1] = (max((((-7723575729453780522 < (arr_18 [i_1 + 2] [i_1 + 2] [i_1 - 2])))), (arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 1])));
                        arr_21 [i_1] [i_4] = ((min(429070663, (arr_16 [i_1] [i_3] [i_4] [i_5]))));
                        arr_22 [i_1] = (arr_6 [i_1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_30 [i_1] [i_1] = var_4;

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_33 [i_1] [i_6] [i_7] [i_6] = ((!((((1337825968 ? var_4 : 134217727))))));
                        arr_34 [i_1] = ((((((arr_26 [i_1] [i_1 + 1] [i_8 - 1]) + var_10))) ? var_10 : ((((arr_29 [i_1 + 1]) ? (arr_26 [i_1] [i_1 - 1] [i_8 - 1]) : (arr_29 [i_1 - 2]))))));
                        arr_35 [i_1 - 1] [i_6] [i_1] [i_8 - 1] [i_1 + 2] = (arr_26 [i_1] [i_1 + 2] [i_8 - 1]);
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        arr_38 [i_9 - 1] [i_1] [i_7] [i_1] [i_1 - 2] = (arr_29 [i_9 - 3]);
                        arr_39 [i_1] [i_1] [i_1] = var_4;
                        arr_40 [i_7] [1] [i_9 - 3] [i_9] = ((-118909842 ? (max(var_9, (min(var_3, var_7)))) : (((~(65535 ^ -1))))));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_43 [i_1 + 1] [i_6] [i_1] [i_10] = (max((((((((arr_6 [i_1]) ? var_0 : var_0))) < (arr_42 [9])))), var_5));
                        arr_44 [i_1] = ((~(((var_6 / var_1) ? var_3 : (-2147483647 - 1)))));
                    }
                    arr_45 [i_1] [i_1] [i_1] = (min(((772 ? (arr_15 [i_1] [i_6] [14] [i_7]) : var_10)), ((((((var_4 ? -5956335366528121401 : (arr_16 [0] [i_6] [i_6] [i_6])))) && (var_2 ^ var_1))))));
                    arr_46 [i_1] [i_6] [i_1] [i_7] = (arr_7 [i_1] [i_6]);
                }
            }
        }
        arr_47 [i_1] [i_1] = (((((((min(var_2, var_2))) ? (var_1 <= -30) : (arr_31 [i_1] [9] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? (max(32754, var_11)) : 30302));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_55 [i_11] [i_11] &= var_1;
                        arr_56 [i_1] [i_11] = ((-var_6 ? (arr_41 [i_13] [i_12] [i_11] [i_11] [i_1]) : ((var_2 ? (arr_28 [i_1]) : var_7))));
                        arr_57 [i_1 - 2] [i_1] [i_1] [i_13] = (min(((var_6 ? 1 : (max(1725656568238460577, (arr_52 [i_1 - 2] [i_1 - 2]))))), ((max(((((arr_53 [i_1] [i_1]) <= var_0))), (max(var_9, 2147483647)))))));
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        arr_60 [i_14] |= 7277747862274154626;
        arr_61 [i_14 + 2] = (((3 ? (((min((arr_59 [i_14] [i_14 + 3]), (arr_59 [i_14] [i_14]))))) : (min(var_6, 0)))));
        arr_62 [i_14] [i_14] = (arr_59 [i_14] [i_14]);
        arr_63 [13] [18] = (arr_59 [i_14] [i_14 + 4]);
    }
    var_13 = var_11;
    #pragma endscop
}
