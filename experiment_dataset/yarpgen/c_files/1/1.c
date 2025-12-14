/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 407612426;
    var_15 = ((var_0 % (((-1320130936 * 0) ? ((min(var_11, var_10))) : ((min(var_11, var_9)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max(99, 157);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [i_0] = (((arr_0 [i_0 + 3]) + 99));
                arr_9 [i_1] [i_2] = 166;
                arr_10 [16] [i_1] [i_1] [21] = 175;
                arr_11 [i_2] [i_1] |= (197 ? 166 : 166);
                arr_12 [i_2] [i_1] [i_0] [i_0] = ((!var_4) << ((((166 ? 98 : var_9)) - 85)));
            }
            arr_13 [i_1] [i_0 - 1] = (arr_6 [i_0 + 2] [i_0 + 3] [i_1]);
            arr_14 [i_0] [i_1] = (((arr_6 [i_0 + 3] [i_0 - 2] [i_0 - 1]) < (arr_3 [i_0 - 2])));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_17 [i_3] = (min((min((((arr_7 [19]) ? 189 : (arr_4 [i_0 - 2]))), (arr_1 [i_0] [i_0 + 3]))), (197 - 58)));
            arr_18 [i_0 + 2] [i_0 + 2] = (((min(99, 197))) ? ((min((arr_1 [i_0 - 1] [i_3]), (arr_15 [i_0 + 1])))) : (~57));
        }
        arr_19 [i_0] = 95;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_22 [i_4] = (((arr_21 [4] [i_0 + 1] [i_0 - 2]) <= (arr_21 [18] [i_0 + 1] [i_0 - 2])));
            arr_23 [12] [i_0] = (var_13 + var_11);
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            arr_28 [0] [i_5 - 2] = ((!((min(171, var_4)))));
            arr_29 [i_0] [i_0 + 3] [i_5] = (max((((((199 ? 89 : 201))) ? ((min(175, 197))) : ((86 ? 58 : var_0)))), (((var_12 ? 198 : var_6)))));
            arr_30 [i_0 + 1] = (max(((198 ? 184 : (var_3 / var_5))), (!71)));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_33 [i_0] [i_6] [i_6] = var_3;
            arr_34 [i_0] [i_6] [6] = ((min((arr_31 [i_0 + 1] [i_0] [i_6]), (arr_31 [i_0] [i_6] [i_6]))));
            arr_35 [16] [7] = (((((var_2 * (145 / var_6)))) ? (((var_5 / 86) ? (81 * 198) : -var_2)) : ((min(156, 54)))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_38 [i_0] = (169 - 72);

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_42 [2] = ((((((arr_31 [i_8] [3] [21]) || (198 <= var_9)))) != (((57 != 209) + ((176 ? 180 : 141))))));
                    arr_43 [i_6] [i_6] [i_6] [i_6] = ((((183 << (90 - 60))) != ((((!(144 || 80)))))));

                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        arr_48 [18] [i_6] [18] = ((184 ? (74 != -72) : (80 < 183)));
                        arr_49 [i_0] [i_7] = (81 > 79);
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_52 [i_0 + 1] [i_6] [i_7] [i_8] = min(197, 81);
                        arr_53 [i_10] [i_8] [i_0 - 1] [i_6] [i_0 - 1] = (174 ? 94 : (((~81) ? (~var_11) : 81)));
                    }
                }
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    arr_56 [i_6] [i_7] [i_11] &= (((min((arr_27 [i_11] [i_11 + 2] [i_11]), 182)) ^ (((((max(80, 198))) ? (94 | 40) : 81)))));
                    arr_57 [i_7] [i_6] [i_7] = (min(((((197 ? 81 : 176)))), ((175 ? (arr_45 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 - 2]) : ((var_12 % (arr_39 [i_11] [10] [i_6] [i_6] [10])))))));
                }
            }
        }
        arr_58 [i_0 - 1] [11] = (max((175 / 81), 196));
    }
    #pragma endscop
}
