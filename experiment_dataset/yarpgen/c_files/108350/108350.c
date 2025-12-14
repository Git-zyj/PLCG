/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (((~8474541402799638186) | (arr_1 [i_0])));
        var_21 ^= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (-1 * 8474541402799638177);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                var_22 = arr_6 [i_1] [i_2];

                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    var_23 = (min(var_23, ((9972202670909913430 ? (((arr_7 [i_4 - 1]) >> ((((var_18 ? var_8 : 4503599623176192)) - 35532)))) : (!-1587251092)))));
                    var_24 = (((~(arr_7 [11]))));
                }
                arr_12 [i_2] [1] [4] = (min((((((0 ? 65535 : (arr_7 [16])))) ? (arr_0 [i_2]) : (arr_10 [i_2] [0] [11] [0] [0] [17]))), (((!(((var_18 ? 9972202670909913449 : (arr_3 [i_1] [1])))))))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                var_25 = (arr_10 [i_2] [i_1] [3] [i_5] [i_5] [i_5]);
                arr_16 [i_1] &= (((min((arr_14 [i_1] [2] [8]), (((var_0 ? (arr_13 [i_1] [11] [22]) : (arr_13 [21] [10] [i_1])))))) == (arr_2 [i_2])));
                var_26 = arr_10 [i_2] [9] [i_5] [7] [i_5] [24];
                var_27 = (!var_13);
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {
                arr_20 [i_1] [i_2] [i_2] = (((max((arr_14 [i_2] [i_2] [3]), var_16)) | (arr_14 [i_2] [i_2] [i_6])));
                var_28 ^= ((!(((8474541402799638169 ? -var_15 : ((min(63, var_8))))))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_29 ^= var_12;
                var_30 = (((arr_7 [i_7]) ? (arr_7 [i_1]) : (arr_7 [i_1])));
                var_31 = 14;
            }
            arr_25 [i_2] = arr_23 [i_1] [21] [22];
            arr_26 [9] [9] [i_2] = (!8474541402799638195);
        }
        arr_27 [7] [7] = (((((!(arr_2 [i_1])))) <= (arr_2 [i_1])));
    }
    #pragma endscop
}
