/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((((max(-7, var_2))) ? -7 : (6 * var_11)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0]) & (((arr_1 [i_0]) >> (((arr_1 [i_0]) - 36238))))));
        var_20 = 7;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = (arr_3 [i_0] [4]);
            var_22 += (arr_3 [i_1] [i_0]);
            var_23 = ((7 ? ((22213 ? -7 : 162330628)) : 4132636676));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_24 = (min(var_24, (((0 >> (((arr_4 [i_0]) - 2984305247)))))));
            arr_7 [i_0] [i_2] = ((103 ? 36 : 212));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_25 = (-(max((arr_4 [i_0]), (arr_5 [i_3] [14] [i_0]))));
            var_26 = 11;

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_27 = ((((max(16949, (arr_2 [i_0])))) == (((0 | (arr_8 [i_0] [i_3]))))));
                arr_12 [i_0] [i_0] [i_0] [i_4] = (max(((!(arr_2 [i_0]))), ((!(arr_2 [i_4])))));
                var_28 |= max((((~((((arr_3 [i_3] [i_4]) == (arr_0 [i_0] [i_3]))))))), 1677894406);
                arr_13 [i_4] [i_3] [i_3] [15] = (max(25301, (max((((arr_5 [i_4] [i_4] [i_4]) ? 3 : 1522708257)), 0))));
            }
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                arr_17 [i_0] [i_0] [12] [i_0] = (max((4685440263512284713 || 162330628), ((((!(arr_9 [i_0] [i_0] [i_5]))) || (((var_8 ? 2362632430105183208 : 40452)))))));
                var_29 = ((~(max(((1 ? 7 : -12)), (arr_15 [i_0] [i_3] [i_3] [i_3])))));
                var_30 = (arr_1 [i_0]);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_31 = (max(((~((max(-30140, (arr_11 [i_0] [i_0])))))), 48863));
                    arr_22 [i_0] [17] [i_7] = ((((((-8591 ? 2496470344782119768 : 4250014047995121256)) <= (((max((arr_15 [i_0] [i_0] [i_7] [i_7]), -12835)))))) ? (max((arr_5 [i_3] [i_3] [18]), (arr_10 [i_0] [i_0] [i_7] [i_0]))) : -20411));
                    arr_23 [i_7] [i_0] = (arr_21 [i_0] [i_3] [i_3] [i_6] [i_7]);
                    arr_24 [i_7] [i_6] [i_3] [i_0] = ((15950273728927431847 && (((arr_15 [i_3] [i_3] [i_3] [i_0]) >= 1))));
                }
                arr_25 [i_6] [i_6] [i_3] [i_0] = ((~(arr_0 [i_0] [i_0])));
            }
            var_32 = 14798;
        }
    }
    var_33 = var_3;
    #pragma endscop
}
