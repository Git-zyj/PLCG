/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = ((9693173178961470356 ? 9693173178961470356 : (((arr_0 [i_1 + 3]) & (arr_3 [i_0 - 1] [i_0 - 3] [i_1])))));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_15 = 4745351823801283290;
                    var_16 = (((arr_4 [i_1 - 1] [i_0 - 4]) < (arr_1 [i_1 + 2])));
                    var_17 = (max(var_17, (((((arr_2 [i_0]) ? -3252 : var_11))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_18 = 2777452917921032872;

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_19 ^= (arr_8 [i_0] [i_0] [i_1]);
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((var_11 ? (min(((-3251 ? 9693173178961470343 : 9693173178961470346)), ((((arr_9 [i_0] [4] [i_0] [4]) * var_7))))) : (((814265371 ? (arr_3 [i_0] [i_0] [i_3]) : (arr_0 [i_0]))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_14 [i_5] [i_0] [i_0] [i_1] [4] = (8753570894748081272 >> 2);
                        var_20 = (min(var_20, ((((arr_1 [i_0 - 1]) % (((arr_10 [i_0] [i_1] [i_1 + 1] [i_5]) - var_4)))))));
                        var_21 = ((!((((arr_9 [i_0 - 4] [i_1] [i_3] [5]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0]))))));
                    }
                    var_22 = ((((-109 ^ (arr_1 [i_1 + 1]))) - (min(15586, (arr_1 [i_0 - 1])))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_23 = ((((arr_15 [i_0] [i_1] [i_6] [i_0]) ? (arr_13 [i_0 - 4]) : (min(1, (arr_8 [i_0] [i_1] [i_0]))))));
                    var_24 = (arr_3 [i_0] [11] [i_0]);
                }
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    var_25 = ((((-(arr_4 [i_1 - 1] [i_0 + 1]))) + (arr_4 [i_1 - 2] [i_0 - 3])));
                    var_26 += (arr_12 [i_0] [i_0] [i_0 + 1]);
                    var_27 = ((min((arr_0 [i_0 - 4]), (arr_2 [i_0 + 1]))));
                }

                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    var_28 *= 18;
                    var_29 = ((54183 ? var_5 : (arr_12 [i_8] [i_1] [2])));
                    arr_21 [i_0] [i_0] [i_0] = 8753570894748081259;

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            var_30 = (!var_2);
                            var_31 = (11356 ? (arr_8 [i_0 - 3] [i_0] [i_0]) : 3395031204);
                            var_32 = ((0 - (arr_10 [10] [i_8 + 1] [i_8 + 1] [i_8])));
                        }
                        var_33 = (arr_20 [i_0]);
                        var_34 = (min((arr_9 [i_0] [i_0] [7] [i_1 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_1 + 2])));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_35 = (min(var_35, (arr_30 [i_1 - 2] [i_1] [i_1] [i_11] [6])));
                            arr_31 [i_1] [i_0] [i_1] [i_1 + 2] [i_1] = (arr_12 [i_1] [i_1] [i_1]);
                        }
                        var_36 = ((!(((((min((arr_16 [i_8] [i_1] [i_1]), var_6))) ? (arr_18 [i_0] [i_0] [i_0] [i_9]) : (((!(arr_6 [i_0] [4] [i_8] [4])))))))));
                    }
                    var_37 = ((((min((arr_25 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_1 + 1] [i_8 + 1] [i_8]), 3251))) ? ((-1761370567 ? (-10779 <= 969639673) : 969639673)) : (arr_24 [i_0 - 1])));
                }
                for (int i_12 = 1; i_12 < 8;i_12 += 1)
                {
                    var_38 = (max((arr_6 [6] [i_1 + 3] [i_12 + 4] [i_12 + 2]), (((((!(arr_1 [i_1 + 3]))) && ((9693173178961470356 && (arr_2 [i_0 - 1]))))))));
                    var_39 = ((((((-125 ? (arr_27 [0] [i_1 + 1] [i_1] [11] [8] [i_1] [i_1]) : var_12))) ? ((((arr_9 [1] [i_1] [i_1 - 1] [i_12]) ? var_8 : 53029))) : ((9693173178961470331 ? 37838 : (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                    var_40 *= 3251;
                }
                var_41 = (min(var_41, (((max((arr_22 [i_1 + 2] [7] [i_1] [i_0 - 2]), 4294967292))))));
            }
        }
    }
    #pragma endscop
}
