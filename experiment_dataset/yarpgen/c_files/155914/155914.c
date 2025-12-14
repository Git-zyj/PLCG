/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min((min(9223372036854775807, 1)), var_5));
    var_15 = ((var_12 ? (!var_13) : var_13));
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((~1), (max((arr_0 [10] [i_0]), var_10))));
        var_18 *= ((!(!-7626)));
        arr_3 [i_0] = ((((arr_2 [i_0]) ? 37 : (~2396029563))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 |= max(-7626, var_9);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_20 = ((21063 ? 7625 : 7631));
                            arr_15 [i_5] [i_4] [i_2] [i_1] [i_2] [i_1] [i_1] = var_12;
                            var_21 = (max(var_21, (arr_13 [i_2] [i_4 + 1] [i_2] [i_4 + 1])));
                        }
                    }
                }
                var_22 = (arr_0 [14] [i_2]);
                arr_16 [i_3] [6] [i_3] [i_2] = -1;
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_23 = (min(var_23, ((max(-1, (((((max(-8250703748806104887, 1))) || ((!(arr_13 [i_6] [i_2] [i_2] [i_1])))))))))));
                var_24 = -7625;
                arr_21 [i_2] [2] [i_2] [i_2] = (max(-44, (min(((-(arr_19 [i_1] [i_1] [i_1] [4]))), ((max((arr_8 [i_2] [i_2]), 1)))))));
                var_25 = ((((!(((var_6 ? (arr_20 [i_1] [i_2] [12]) : 48))))) && 471900527));
                var_26 = -926282463;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_27 = (7625 ? 74 : 1);
                arr_26 [i_1] [i_1] [i_1] |= (min(7631, (min(((1 ? -32761 : -109)), -661081207))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_31 [3] [3] [i_2] [8] [7] = (((!(1480 && 1))));
                            var_28 = (max(var_28, ((((1813919399 ? -7618 : 3783510765))))));
                            var_29 ^= (min((((-4960943498433870726 % ((6159 ? var_0 : 5217343782412707245))))), (max((arr_9 [i_1] [5]), 7054055282520309978))));
                        }
                    }
                }
            }
            var_30 *= (((var_1 ? var_6 : (arr_7 [i_1]))));
            var_31 += 32760;
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_32 ^= (min(1631092348, 12788));
                            var_33 ^= (arr_8 [i_1] [i_2]);
                            var_34 = 18326895410869071942;
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_35 = (min(var_35, (arr_1 [i_13])));
        var_36 = (arr_0 [18] [18]);
        var_37 += var_5;
    }
    #pragma endscop
}
