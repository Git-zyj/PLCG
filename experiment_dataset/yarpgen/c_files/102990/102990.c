/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((22266 % var_13), var_11));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((-22280 ? 59900 : -32566));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_17 = (min(var_17, (!-6856853986014023082)));
            var_18 = (((~170) >= (((var_3 >= (arr_1 [i_1] [i_0]))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [8] [14] [i_3] |= (arr_1 [i_0] [i_2]);
                var_19 = 22285;
                var_20 = (arr_1 [i_2 - 1] [i_2]);
            }
            var_21 = (var_7 <= 5635);
        }
        arr_13 [i_0] = ((max((arr_5 [i_0]), (arr_5 [i_0]))));
        var_22 = -1;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        arr_16 [i_4] = ((~(arr_5 [i_4 + 1])));
        arr_17 [i_4] = ((-26424 + 2147483647) >> (-18522 + 18527));
        var_23 = (var_15 || var_3);
        var_24 = 176;
    }
    var_25 = var_10;
    var_26 = var_14;
    var_27 = (((var_8 <= var_6) ? (((var_0 < 4194303) ? (59908 % var_15) : var_8)) : (((((~21385) + 2147483647)) >> (var_2 - 11581326503737296236)))));
    #pragma endscop
}
