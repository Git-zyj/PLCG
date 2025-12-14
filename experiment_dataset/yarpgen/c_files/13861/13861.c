/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = var_6;
            var_19 = (min(var_19, (((-32767 | (((var_16 + -12158) ? 46604 : (-32767 - 1))))))));
        }
        var_20 = (((max((max((arr_3 [i_0]), var_10)), (var_14 * var_1))) % (((((-32760 ? (-2147483647 - 1) : var_6)))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_21 = (max(var_21, ((max((30296 & 2147483647), (((arr_5 [6] [i_0 - 2] [i_2]) ^ -1534499766)))))));
            var_22 = (max(var_22, 9));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_23 = ((((max(((163 ? 155 : 21)), ((3275491568 ? 73 : -1))))) ? (((var_5 + var_17) ? (1377536220988917618 == -32765) : (min(var_16, var_2)))) : -86));
            var_24 = (max(var_24, (((((((arr_12 [i_0 - 2]) ? var_1 : (arr_12 [i_0 - 1])))) ? var_0 : (((arr_12 [i_0 - 1]) % var_1)))))));
        }
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {
                    {
                        var_25 = (((((!(((arr_17 [i_6]) || var_14)))))) >= (min(((max(var_10, (-2147483647 - 1)))), var_12)));
                        var_26 += (((var_14 ? (((-63 ? var_18 : -30))) : 10753505175849081849)));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_27 += (((((!(((var_10 ? 1534499766 : var_14)))))) - 30300));
            var_28 = (var_2 || var_6);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_29 [i_4] = 13628160195567105487;

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_29 *= ((~(!101)));
                            var_30 -= var_8;
                            arr_39 [i_4] [i_4] [i_4] [i_11] [i_12] = (((var_17 * var_18) - (arr_2 [i_4 - 2])));
                            arr_40 [i_10] [i_11] [i_12] |= 5466266885252433531;
                        }
                    }
                }
                var_31 = (((121 & var_17) ? 3275491568 : (2251799811588096 * 183)));
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_32 = (arr_37 [i_14] [i_14] [i_14] [i_14] [i_14]);
                            arr_47 [i_14] = (var_2 ? 1530442741 : var_5);
                            arr_48 [i_14] [1] [i_14] [i_14] [i_13] [i_9] [i_14] = ((var_12 ? var_16 : (arr_15 [i_4 + 1])));
                        }
                    }
                }
                var_33 = (-9 | var_4);
            }
            arr_49 [16] [16] [i_9] = ((-1 ? 1614913956389773380 : 7300200008689886996));
            var_34 = (min(var_34, ((((((var_3 ? 1824968286 : var_18))) ? (arr_15 [i_9]) : (var_16 | 1))))));
        }
        var_35 = (max(var_35, (((((-(var_11 * 18446744073709551610)))) ? var_0 : (!var_5)))));
    }

    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        arr_52 [i_16] = var_18;
        var_36 = ((40240 ? -1 : (-2147483647 - 1)));
    }
    #pragma endscop
}
