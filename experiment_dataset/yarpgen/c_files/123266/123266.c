/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_1 [i_0 + 2])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((((-(arr_4 [i_1] [i_0 + 2] [i_0]))) + 2147483647)) << ((((((!(arr_0 [i_0]))) ? (arr_3 [i_1] [i_0]) : ((((arr_1 [i_0]) != 2130706432))))) - 1)));
            var_19 = (min(var_19, (arr_0 [i_0])));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_2] = 255;

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_20 = (max(var_20, (((!((min(2147483643, 4))))))));
                var_21 *= (arr_11 [i_2] [i_0] [i_0] [12]);
                arr_12 [i_0] [i_3] [i_3] [i_3] = var_18;
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_15 [16] [i_2] = ((+((((arr_0 [i_2]) + var_11)))));
                var_22 = (2147483643 ? var_9 : (2147483636 != 65535));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_23 ^= ((-2147483643 > (((-106 <= (arr_14 [11]))))));
                var_24 = (min(var_24, (((((((arr_1 [i_2 + 2]) ? 65535 : var_4))) > ((0 ? 18446744073709551608 : (arr_3 [i_5] [i_5]))))))));
                arr_18 [1] [i_2] [i_5] [i_5] = (arr_1 [i_0]);
                arr_19 [i_0] [i_5] [i_5] = (((((94 << (((-6005321840810891483 + 6005321840810891514) - 15)))) <= (((var_2 && (arr_17 [i_0] [i_2 - 1] [18])))))));
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = (((min(0, 32739))));
        var_25 ^= -93;
    }
    var_26 = var_3;
    var_27 = var_18;
    #pragma endscop
}
