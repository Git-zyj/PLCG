/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((2171053622 - (var_4 / 2123913653)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((min((!108), (max(var_2, 2171053622))))) ? 103079215104 : (var_8 && var_9)));
                    var_12 = (var_8 - var_1);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [13] [13] [i_3] [i_4] = (max((((2123913639 >= -1843833624) ? var_7 : var_3)), (((-7630566428505125447 != 0) ? (var_6 & 55243) : (9223372036854775800 > var_4)))));
                                var_13 = (((16106127360 < -1048576) ? (max(103079215104, 0)) : (((((max(2123913673, 23)) < 816620185))))));
                                var_14 += 0;
                                var_15 *= ((((max((-24 | 342901051), var_4))) / (((2486101266 & 65535) >> ((((1048576 ? var_7 : var_7)) - 102))))));
                                arr_13 [i_0 - 1] [i_1] [14] [i_2] [i_3 - 1] [i_0] [i_3 - 1] = (((((var_0 != var_5) > var_2))) * ((-24 >> ((var_1 ? 24 : var_1)))));
                            }
                        }
                    }
                }
            }
        }
        var_16 = ((((((((var_1 ? 2171053619 : var_2))) ? (2171053614 >= 1) : var_6))) ? 2123913653 : (max(((15 ? var_5 : 536870912)), (~1048575)))));
        var_17 &= -65;
        arr_14 [i_0] [i_0] = (max((((-32 + 2147483647) << (3541350540 - 3541350540))), 1564922942));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_18 = var_2;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_26 [i_8] [i_8] [10] [10] [i_6] [i_5] &= var_8;
                        var_19 = (((var_7 ? 9223372036854775807 : (var_8 / var_8))));
                    }

                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        var_20 = ((var_7 >> ((((max(9291, 4092))) - 9281))));
                        var_21 = ((((max(1, ((var_6 ? -3493660339543000487 : var_6))))) ? (max(((4257132845311927248 ? 5605686543776306687 : var_7)), (var_1 - 64))) : ((((!((max(var_5, var_2)))))))));
                    }
                }
            }
        }
        var_22 = var_1;
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            arr_37 [12] = (var_4 / var_5);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_43 [i_10] [i_10 + 1] [i_13] [i_10] = var_8;
                        var_23 = (max(var_23, ((((var_5 > -93) < (61 & var_4))))));
                    }
                }
            }
        }
        var_24 = 9223372036854775796;
    }
    var_25 = (min(((min(var_5, -var_9))), ((var_2 / (18446743970630336512 <= var_8)))));
    #pragma endscop
}
