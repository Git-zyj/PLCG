/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 -= var_18;
        var_20 = (min(var_20, (arr_0 [12])));
        var_21 *= var_13;
        var_22 = (((((~(arr_2 [i_0] [1])))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (max((((arr_2 [i_0] [i_0]) ? 8801856996293293967 : -26897)), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((((var_11 + 2147483647) >> (((arr_3 [i_1]) + 677556777)))) % (45 + var_15)));
        var_23 = ((-(arr_3 [i_1])));
        var_24 = ((~((min(45, (arr_4 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_25 += ((-(var_14 - 45)));
        arr_8 [i_2] [i_2] = (var_6 & ((~(arr_3 [i_2]))));
        var_26 -= (((var_11 + var_17) ? ((((arr_7 [i_2]) ? 207 : 206))) : (min((arr_7 [i_2]), (arr_7 [i_2])))));
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_13 [19] |= (+((((((58 ? (arr_10 [i_3] [i_3]) : (arr_12 [i_3] [i_3])))) || (arr_10 [i_3] [i_3])))));
        arr_14 [i_3] [i_3] = 197;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_5] = ((!(((-16859 ? (arr_10 [i_4] [i_4]) : (arr_10 [14] [i_5]))))));
            var_27 = var_17;
            var_28 = (~(max((arr_9 [i_5 + 2] [0]), 711940984)));
            var_29 = ((var_9 ? ((-(arr_9 [i_4] [i_5 + 1]))) : var_18));
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            arr_22 [i_4] [i_6] = ((!((!(arr_12 [i_6 + 1] [i_6])))));

            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                var_30 = (max(var_6, (max(((~(arr_16 [i_4] [i_6]))), ((((arr_23 [i_4] [i_7 - 1] [i_7] [i_4]) < (arr_10 [i_6 - 1] [i_6 - 2]))))))));
                arr_25 [i_6] = (54 - -10702);
                var_31 = (arr_11 [i_4]);
                var_32 = ((var_9 || (arr_11 [i_4])));
            }
            var_33 = (!var_8);
        }
        arr_26 [i_4] = 3699249797575353113;
    }
    var_34 = var_13;
    #pragma endscop
}
