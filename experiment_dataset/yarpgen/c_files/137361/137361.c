/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(((((arr_0 [i_0 - 1]) | var_7))), (min(((31633 ? 15748995531805092162 : var_1)), var_2))));
        arr_2 [i_0] = ((-(((arr_1 [i_0 - 1]) + (min(2697748541904459454, 551412077))))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_12 ^= ((((min((var_0 ^ 0), var_10))) || (var_0 << 1)));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = (((min((min(var_0, 15748995531805092162)), var_5)) - ((-((15748995531805092184 ? var_0 : var_3))))));
                        arr_11 [i_0] [i_0] [i_0 - 1] [i_1] = ((((min((arr_8 [i_0] [i_2 - 3] [12] [i_3]), var_3))) ? ((var_8 - (arr_8 [i_0] [i_2 - 2] [i_0] [i_0]))) : (var_2 - var_10)));
                        var_14 = (max(var_14, ((min((((arr_5 [i_1 - 2] [i_1 - 2] [16] [i_2 - 1]) ? (arr_8 [i_1 + 2] [i_1 + 2] [i_0] [i_0]) : var_4)), ((min((min(var_5, -2448491842777382588)), 2448491842777382588))))))));
                        var_15 |= (min(65535, (min(var_6, ((var_9 ? var_10 : (arr_9 [i_0 - 1] [6])))))));
                        var_16 = -var_0;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_0 - 1] [i_0 - 1] [i_4] = var_0;
            var_17 |= (34621 ? ((var_6 ? (arr_9 [i_4] [16]) : (min(var_4, var_9)))) : (!var_5));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_25 [i_6] [19] [i_4] [i_6] [i_6] = (min((((((arr_7 [i_0] [i_4] [i_4] [i_4] [7]) ? var_10 : (arr_9 [i_4] [i_4]))))), (min((min(var_6, var_9)), ((min((arr_17 [i_4] [i_4]), (arr_7 [i_7] [i_4 + 1] [i_4] [i_7] [i_7]))))))));
                            var_18 = 1764754703;
                            var_19 = 34617;
                            var_20 &= var_0;
                            var_21 = 2438942311699813685;
                        }

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_22 = var_5;
                            var_23 = ((var_8 ^ (((896 / (min(var_1, -6581533115148671150)))))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_24 = ((11419062334613099798 ? var_10 : ((((arr_21 [i_4 - 1] [i_0 - 1]) || (arr_21 [i_4 - 1] [i_0 - 1]))))));
                            var_25 = (min(var_7, (min(var_10, (arr_31 [i_0 - 1] [i_0] [i_4 - 1] [18] [1])))));
                            var_26 = ((((min(var_2, var_6))) ? ((min(34617, 34617))) : 105));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] = ((15748995531805092162 ? (((arr_6 [i_10] [i_10] [i_10] [i_10]) ? 7419801018856944261 : var_5)) : 9223372036854775807));
        arr_36 [i_10] |= (((!(arr_21 [i_10] [i_10]))));
        arr_37 [i_10] = (((1272410480331497822 / -9223372036854775802) && (arr_3 [i_10])));
    }
    var_27 &= var_0;
    #pragma endscop
}
