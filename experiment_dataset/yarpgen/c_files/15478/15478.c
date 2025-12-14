/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min(131, ((var_18 ? (~131) : (var_3 <= var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [10] [i_0] = (((arr_0 [7] [i_0]) % (var_2 ^ -15160)));
            var_21 = (((arr_3 [i_0] [i_1] [i_0]) ? var_8 : 10537));
            arr_6 [i_0] [i_0] = (arr_4 [i_0] [i_1]);
            arr_7 [i_0] [i_0] = var_2;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_2] [i_3] [i_4] [i_0] [i_2] = ((-10538 ? -2354 : 0));
                            var_22 = (142 | -32763);
                        }
                    }
                }
            }
            arr_21 [i_0] [i_2] [i_0] = var_9;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_25 [i_0] = (((((8751735491414245786 <= (arr_15 [i_6] [6] [i_6] [1] [i_0])))) * (arr_13 [i_6] [i_6] [i_0])));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_30 [i_0] = (var_0 ? 4696064166944770304 : 29261);
                arr_31 [0] [i_0] [i_7] = (-10538 - 132);
                var_23 *= var_6;
                arr_32 [i_0] = ((214 ? (((202 > (arr_8 [i_0])))) : ((32 >> (31191 - 31175)))));
                arr_33 [11] [i_6] [i_0] [i_6] = (arr_9 [1] [i_6]);
            }
        }
        var_24 = ((~(arr_1 [10])));
        arr_34 [i_0] = (202 ? (2152054708 | 54) : var_4);

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_37 [i_0] [i_0] [3] = (arr_0 [i_0] [i_8]);
            var_25 = 60;
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            var_26 += var_11;
            arr_40 [i_0] [i_0] [i_0] = (((var_15 != 20977) & ((((arr_1 [i_0]) == 129)))));
            arr_41 [i_0] [i_0] = (((arr_39 [i_9 + 3] [i_0]) ? (((1 ? 16 : 133))) : (arr_18 [i_0] [i_9 + 2] [i_9 - 2] [i_0] [i_9 + 2])));
            arr_42 [i_0] [i_9] [i_9] = (((arr_0 [i_9 + 1] [i_9 + 3]) ? (arr_26 [i_0] [i_9 + 1] [i_9]) : 0));
        }
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            arr_45 [6] [i_10] [1] |= (((arr_0 [i_0] [5]) ? var_0 : -8027286106584244509));
            var_27 = (min(var_27, 8027286106584244512));
        }
    }
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        var_28 = (min((arr_46 [i_11 + 3] [i_11 + 4]), ((-(arr_46 [i_11 + 3] [i_11 + 1])))));
        var_29 = (min(var_29, (((var_9 << (61 - 32))))));
        arr_48 [i_11 + 1] = (((max(((var_12 % (arr_47 [i_11]))), (arr_47 [i_11 + 1]))) * ((0 ? (1 - -2147483638) : 2441470244))));
    }
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        arr_52 [i_12] = ((var_15 ? ((min(1, 1))) : ((~(arr_10 [i_12] [i_12] [i_12] [i_12])))));
        var_30 = (max(var_30, 142));
    }
    var_31 = 146;
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {
                var_32 -= (-84 < 2147483637);
                var_33 = ((~(4294950912 & 223)));
                arr_59 [i_13] = -1236774562;
                var_34 |= (arr_18 [12] [i_13] [7] [i_13] [i_13]);
                arr_60 [i_13] [i_13] = ((((~(arr_27 [i_13 - 3] [i_13 + 1] [i_13 - 3]))) > (min((!4188026830085510108), var_16))));
            }
        }
    }
    #pragma endscop
}
