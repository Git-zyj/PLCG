/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (1464902553392638793 - 578552283)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((130 * (2880123470 / -21217)));
        var_17 = 578552270;

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_18 = (((((max(1414843801, 14641)) & ((var_2 ? 3258866503 : 3716415012)))) | 0));
            arr_7 [i_0] [i_1] = (max(((((((((arr_2 [i_0]) <= (arr_4 [i_1] [i_1]))))) == (max((arr_5 [i_0] [i_0]), (arr_3 [10])))))), (~var_11)));
            var_19 = (min(var_19, var_13));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_20 = (max(((49211 ? 14641 : (max(6016553998410966209, 3716415014)))), ((((1 / var_9) + (arr_3 [i_0]))))));
            arr_12 [i_2] [10] = ((~(min(((((arr_8 [2] [i_2] [i_2]) && (arr_9 [i_0])))), (max((arr_10 [i_0] [i_0] [i_0]), (arr_9 [i_0])))))));
            var_21 = (min(64400, 578552282));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_17 [i_3] = (((((3716415031 ? var_13 : var_13))) | (arr_9 [i_0])));
            arr_18 [i_0] [i_3] [i_0] = -1;
            arr_19 [i_3] = (((arr_14 [i_3] [i_0] [i_0]) % 64386));
            arr_20 [i_3] = ((-578552284 * (arr_16 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_23 [i_4] = (((((((arr_11 [i_4] [i_4]) >= var_10)))) | ((-(arr_5 [i_4] [i_4])))));
        arr_24 [i_4] &= (((arr_2 [11]) || (arr_21 [i_4] [i_4])));
        arr_25 [i_4] = (-3258866508 >> ((((9963 << (2880123481 - 2880123481))) - 9935)));
        arr_26 [i_4] = ((2871484214 << ((((-1 ? (arr_0 [9]) : 10695931564574843490)) - 3690544542))));
        arr_27 [i_4] [i_4] = (((arr_9 [i_4]) <= (!32753)));
    }
    #pragma endscop
}
