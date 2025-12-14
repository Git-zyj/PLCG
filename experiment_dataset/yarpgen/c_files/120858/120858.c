/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (156 <= 1075327780);
        arr_4 [i_0] = ((((((((1075327805 >> (((arr_0 [17] [i_0]) - 2543224371074450341))))) ? (max(var_13, (arr_1 [i_0 - 3]))) : (((max((arr_2 [i_0 - 1]), 1979))))))) ? 109 : (max(23, (arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
            {
                arr_12 [i_2] [i_2] [15] [i_2] = ((!(((~((var_11 ? var_11 : var_3)))))));
                var_15 = (((~7224150546805003035) ? (((((arr_10 [i_2]) > (arr_10 [i_2]))))) : (((arr_10 [i_2]) ? var_12 : (arr_10 [i_2])))));
            }
            for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_16 ^= (max((arr_8 [i_1 - 1] [i_4]), (((arr_14 [i_2] [i_2] [i_4]) << ((((var_9 ? var_4 : 1075327768)) + 70))))));
                arr_15 [i_4 - 1] [i_2] [i_2] [1] = (((arr_9 [i_2] [i_4 + 2]) ? var_6 : ((min((arr_9 [i_2] [i_4 - 4]), 0)))));
                var_17 = max((arr_11 [1] [i_4]), (7224150546805003031 % 507070712));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_18 [i_2] [i_2] [i_2] = -7224150546805003035;
                var_18 = (((((var_11 ? (arr_9 [i_2] [i_5]) : 536870912))) > (40 - var_0)));
                var_19 = ((~(-4 || var_5)));
            }
            arr_19 [i_1 - 2] [i_2] [4] = ((var_8 < (max((min((-32767 - 1), -7224150546805003037)), (((arr_7 [i_1 - 4]) ? var_8 : var_8))))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_20 = (max(var_20, var_3));
            var_21 -= (min(((~(var_11 / var_1))), (((~((~(arr_14 [13] [i_6] [i_6]))))))));
        }
        var_22 *= (~var_10);
    }
    #pragma endscop
}
