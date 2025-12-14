/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((8363763917546744246 > (var_5 / 8363763917546744246)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [2] [i_0] = ((!(var_6 < var_1)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = var_7;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_14 = -var_4;

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_15 = (min(var_15, (((var_1 || (var_10 & var_10))))));
                    var_16 = (!var_2);
                }
            }
            arr_11 [i_1] = ((var_4 ^ (var_4 | var_11)));
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            arr_15 [i_0] = (var_1 || var_5);
            arr_16 [i_4] = (var_11 & var_3);
        }
        var_17 = ((var_11 <= (var_10 * var_5)));
    }
    var_18 = (((((!(var_2 <= var_7)))) | (((-var_1 + 2147483647) << (((var_4 % var_11) - 11119))))));
    #pragma endscop
}
