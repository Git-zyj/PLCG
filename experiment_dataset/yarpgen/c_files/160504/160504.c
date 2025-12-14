/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 &= var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [9] [i_0] = (min((((arr_1 [i_0]) / (arr_2 [4] [i_0]))), ((-(arr_1 [i_0])))));
        var_15 = ((~((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_5 [i_0] = (((((arr_1 [i_0]) ? 8247662259957234094 : var_8)) << (((arr_1 [i_0]) - 70))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (max(var_16, var_11));
        var_17 -= (min(3, 12359));
        var_18 |= (arr_6 [i_1]);
        arr_8 [i_1] = ((1874012713 == ((((var_12 > (arr_6 [i_1])))))));
        var_19 = (((~1) > (((1 == (arr_6 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 -= min(((min(52189, (arr_11 [i_2])))), (((!(arr_9 [i_2] [14])))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_14 [1] [2] [2] = 1;
            arr_15 [1] [22] = var_2;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_21 *= (((var_6 <= var_7) > (arr_12 [i_4] [i_4])));
            var_22 *= (arr_11 [13]);
            var_23 -= ((-(arr_9 [i_2] [i_4])));
            var_24 -= ((~(arr_13 [i_2] [i_4])));
            var_25 = (44064 || var_5);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_26 = var_4;
            arr_20 [i_5] [5] = ((((max(1, 1))) < 65533));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_27 = (-4669312585889034418 / 1);
            var_28 -= var_9;
            var_29 -= (((var_4 > var_12) > (min(var_3, -12370))));
        }
        arr_24 [i_2] = (!var_1);
    }
    #pragma endscop
}
