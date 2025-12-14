/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!var_6) > ((((~var_5) || (!var_3)))));
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_14 [i_3] [i_3] [i_0] [i_1] [i_0] = ((-(-32767 - 1)));
                    arr_15 [i_0] [i_1] [i_1] [i_0] [i_3] = ((!(((0 / (arr_0 [i_0]))))));
                    arr_16 [i_0] [i_0] [i_0] [i_2] [i_3] = (i_0 % 2 == zero) ? ((((((arr_7 [9] [9] [i_0] [i_3]) << (((arr_7 [i_0] [i_1] [i_0] [i_3]) - 14246947347284186643)))) ^ 32745))) : ((((((arr_7 [9] [9] [i_0] [i_3]) << (((((arr_7 [i_0] [i_1] [i_0] [i_3]) - 14246947347284186643)) - 11688918240655141545)))) ^ 32745)));
                }
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    var_13 = ((((((arr_12 [i_4 - 1] [i_4 - 1] [i_0] [i_4 + 1]) == 15487682160412214553)))) % (((arr_6 [i_0] [i_1] [i_2] [11]) * (arr_19 [i_4] [i_4 - 3] [i_4] [i_0] [i_4 - 4] [i_4 - 2]))));
                    arr_20 [i_0] [i_1] [i_2] [i_0] = ((-(((arr_18 [i_0] [10] [i_4] [i_0]) & var_8))));
                }
                arr_21 [i_0] [11] [i_0] = ((-10769905418932567082 == ((-(arr_3 [i_0])))));
                var_14 = ((!(10769905418932567082 + -32764)));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_0] = (((17179868160 != 54885) & ((-(arr_3 [i_0])))));
                var_15 = (0 || 7340032);
                arr_25 [i_0] = (((var_7 ^ var_4) | (~-70)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_31 [4] [12] [i_1] [5] [i_0] = ((-(var_6 == var_10)));
                            arr_32 [i_0] [i_6] [i_5] [i_1] [i_0] = -var_0;
                        }
                    }
                }
            }
            var_16 = ((-(arr_9 [i_1] [i_0] [i_1])));
        }
        var_17 = ((((3 >> (var_7 - 3327440498388732171))) >> (((~var_5) + 10593))));
    }

    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_18 = (((64 == 113) & ((var_1 * (arr_35 [i_8 - 1])))));
        arr_37 [i_8] = (((((arr_5 [12]) + 2147483647)) >> (((~var_4) + 62))));
        var_19 = (((((!(arr_7 [i_8] [10] [4] [i_8 + 2]))))) * (((arr_7 [i_8] [i_8] [12] [12]) * var_6)));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_41 [i_9] [i_9] = -32763;
        arr_42 [i_9] = (!-1939309419505285469);
    }
    #pragma endscop
}
