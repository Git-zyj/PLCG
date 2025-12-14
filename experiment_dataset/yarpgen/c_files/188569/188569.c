/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = var_2;
    var_17 = (1349539712 * var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 - 1] [i_0 + 1]);
        arr_4 [i_0] = (7243 ? var_6 : var_5);
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
        var_18 = 12983864641669447131;
        var_19 |= var_10;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (max((~12983864641669447131), (((((min((arr_7 [i_1] [i_1]), (-2147483647 - 1)))) ? (~-2147483634) : (min(-2147483634, 993497990)))))));
        var_20 = var_8;
        var_21 = (max(var_21, ((12983864641669447131 ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = (arr_6 [i_2]);
            var_23 = (min(var_23, (min((((arr_10 [i_1]) ? ((min(var_3, var_7))) : ((var_3 ? (arr_11 [i_1] [i_2] [i_2]) : 2147483638)))), ((((arr_10 [i_1]) ? ((((var_5 > (arr_11 [2] [i_2] [i_1]))))) : (arr_6 [i_2]))))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        var_24 = (min(var_24, ((max((max(-621335196, ((-90 ? (arr_6 [i_1]) : -1)))), -2147483634)))));
                        var_25 = ((-(arr_12 [i_1] [i_3] [i_4])));
                        var_26 ^= (((((1467920382 ? (arr_11 [i_4 + 1] [i_3 - 1] [i_3 - 2]) : (arr_15 [i_4 - 1] [i_1] [i_4 + 1] [i_4 + 1] [i_1] [i_3 - 2])))) ? (arr_15 [i_4 - 1] [i_1] [i_4 + 1] [i_4 + 1] [i_1] [i_3 - 2]) : -29883022));
                        var_27 = (((arr_15 [i_3 - 2] [i_3] [i_3 - 2] [i_4 + 1] [i_4] [i_4 + 1]) && (((24788 ? 33488896 : (arr_15 [i_3 + 3] [i_3] [i_4 - 1] [i_4 - 1] [i_3 + 3] [i_4 + 1]))))));

                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_5 + 2] [i_1] = ((((min(5462879432040104501, 8191))) ? -1349539713 : 0));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = ((75 ? ((((var_10 ? 156 : 4582373844129750661)))) : (arr_14 [i_1])));
                            arr_21 [i_2] [i_2] [i_2] [i_3] [8] = (((((-234773649 ? -1589979298 : 1))) ? ((min(-var_6, (arr_18 [i_1] [i_2] [i_3])))) : (((arr_18 [i_3 + 2] [i_3 + 2] [i_3]) ? (arr_17 [i_3 - 3] [i_4] [i_5] [i_3] [i_5] [i_5]) : 1))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_28 *= var_13;
                            var_29 ^= (var_0 % var_9);
                            arr_25 [i_3] [i_2] [i_2] [i_2] [9] [8] = -116;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_30 = -711860837;
                            var_31 ^= 12093811492695188656;
                            arr_28 [i_7] [i_2] [i_3] [i_4 + 1] [i_7] &= 32766;
                            var_32 |= (((arr_17 [i_1] [i_3 + 3] [i_1] [i_1] [i_4] [i_4]) ? (((-105 ? (arr_22 [i_3] [i_3] [i_3 + 3] [i_1] [i_1] [i_1]) : (arr_16 [i_1])))) : (((arr_16 [i_4 + 1]) & var_0))));
                        }
                    }
                }
            }
            arr_29 [i_2] = (((((~(~-2147483634)))) ? (arr_26 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1]) : (((min(var_9, var_6)) & ((max(4294967294, var_14)))))));
        }
        var_33 *= -18446744073709551615;
    }
    #pragma endscop
}
