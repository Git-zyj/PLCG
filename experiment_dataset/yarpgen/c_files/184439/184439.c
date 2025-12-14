/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(var_4, (max(var_6, var_12)))) == var_8));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 = max((min((max(17, (arr_0 [i_0]))), (arr_0 [14]))), (max((arr_0 [i_0 + 4]), -3130724844235108516)));
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = (((((((min((arr_0 [i_0 - 1]), (arr_0 [i_0]))) != (((-3130724844235108516 ? 3130724844235108516 : 0))))))) >= 16));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_17 = (max(var_17, (1 == 3130724844235108516)));
                var_18 = (max(var_18, (((!(((arr_3 [i_1 + 3]) == (arr_8 [i_1 - 1]))))))));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_19 = ((!(arr_5 [i_4] [i_4])));
                    var_20 = ((((max(6720, (min((arr_6 [i_1] [1] [1]), 1))))) != ((-(arr_2 [i_1 - 1])))));
                    arr_12 [8] [i_2] [i_1 + 3] [i_2] [i_4] = (arr_4 [i_1] [i_1]);
                }
                var_21 = (min(var_21, (((~((-(arr_5 [i_1 - 1] [i_1]))))))));
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_17 [i_2] [i_5] [i_6] = ((!((max(((min((arr_16 [i_6] [11] [i_6] [i_6]), (arr_13 [12] [11])))), (min(3130724844235108492, (arr_11 [i_1] [i_2] [i_2] [i_6]))))))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_22 = -8168476199570402541;
                        var_23 = (arr_16 [i_1 - 2] [i_5 + 1] [i_2] [0]);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_22 [i_8] = (min(((((max(1, -6264956988067587513))) ? (((max(6705, (arr_16 [i_1 + 3] [i_1 + 3] [i_1 + 3] [4]))))) : (min(1, (arr_9 [i_2] [6]))))), 28505));
                        arr_23 [i_8] [i_8] [i_5] [i_8] [i_8] = (max(((min((arr_8 [i_5 + 1]), (arr_8 [i_5 + 1])))), ((max(3130724844235108502, (arr_20 [0] [13] [9] [i_6]))))));
                        var_24 = (max((arr_20 [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 2]), 232));
                        var_25 = -1362285565;
                    }
                    var_26 = -90;
                }
                var_27 *= 7103278018943597002;
            }
            for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
            {
                var_28 = (arr_4 [i_2] [i_9 + 2]);
                var_29 = ((((((arr_3 [2]) + 2147483647)) >> (((arr_0 [i_1 - 1]) - 18007088781815441468)))));
            }
            var_30 = (max(var_30, (((+(min((arr_11 [9] [i_1 - 1] [i_2] [i_2]), (max((arr_5 [i_1 + 2] [i_2]), (arr_5 [5] [i_2]))))))))));
        }

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_28 [1] = (min((!28), (max(1, (arr_0 [i_1 - 1])))));
            arr_29 [i_1] [i_10] [2] = (arr_25 [i_1] [i_1] [i_10] [2]);
        }
        for (int i_11 = 4; i_11 < 11;i_11 += 1)
        {
            var_31 -= (max(3130724844235108500, (max((arr_1 [i_1] [i_11 - 2]), ((-(arr_0 [i_1])))))));
            var_32 = (max((arr_10 [i_1] [i_1] [i_1]), (arr_15 [i_1 + 2] [i_1 + 2] [i_11 + 1])));
        }
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_35 [18] &= (arr_34 [i_12]);
        var_33 &= (min((!146869931), (arr_1 [1] [i_12])));
        var_34 = (max(((3130724844235108500 + (((max(220, 89)))))), ((min(662781074, 0)))));
    }
    var_35 = var_0;
    #pragma endscop
}
