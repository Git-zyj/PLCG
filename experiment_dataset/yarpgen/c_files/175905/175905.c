/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((var_0 / 43588) >= ((((arr_1 [i_0]) >= var_8))))) ? (arr_1 [i_0]) : (max(0, 125)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_16 = var_3;
                    var_17 = 1;
                    var_18 = var_5;
                }
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_19 = (min(var_19, 21935));
                        var_20 = var_7;
                        var_21 = (max(var_21, (var_5 % var_2)));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_22 = (29043 || 104835203);
                        var_23 = ((var_8 - (max(18446744073709551606, (arr_0 [i_0 - 2] [i_4 + 3])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 9;i_7 += 1)
                    {
                        var_24 = 30;
                        var_25 = var_15;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_26 = (max(((var_1 >> (var_5 + 101))), ((max(13, 218)))));
                        var_27 = (((((arr_20 [i_0] [i_1] [i_8] [i_4] [i_4]) ? (((var_6 + 2147483647) << (var_9 - 37))) : ((min(var_4, var_2))))) ^ ((((arr_4 [i_0 + 2] [i_4 + 2] [i_0 + 2]) < (arr_23 [i_4] [i_4 + 4] [i_2]))))));
                        var_28 *= var_14;
                    }
                    var_29 = 12640069884781421365;
                    var_30 *= var_13;
                }
                arr_24 [i_0 - 2] = (((((max((arr_22 [i_0]), var_13)))) <= (min(var_11, (var_1 * var_10)))));
            }
            var_31 = (((((-5 - (var_3 % var_9)))) ? (((var_4 ? (arr_11 [i_0]) : (arr_11 [i_0])))) : ((var_6 / (arr_9 [i_0])))));
            var_32 ^= arr_7 [i_0];
            arr_25 [i_1] = var_15;
            var_33 = ((((arr_4 [i_0] [i_1] [i_1]) << (1543907353 - 1543907339))) | 22007);
        }
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            var_34 += 1543907348;
            arr_28 [i_0 + 2] [i_9] [i_9] = (min(84, 1));
            var_35 = (min(var_35, ((min((((((2751059943 * (arr_10 [i_0] [i_9] [i_9] [i_9] [i_0] [i_9])))) ? 1543907370 : (2751059948 + var_2))), var_11)))));
            arr_29 [i_9] = (-1556395423432780462 | 12);
        }
        var_36 = -7165809578559555285;
    }
    var_37 = (max(var_37, ((max(var_2, var_10)))));
    #pragma endscop
}
