/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 += 128;
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (((13603 + -13603) % var_3));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [11] = (((!273804165120) <= (min(((128 ? -12720 : 17506568590514310437)), ((min(1, (arr_12 [i_2]))))))));
                        var_16 = (min(var_16, var_4));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_17 = 1048575;

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_18 = (min(var_18, 128));
                            var_19 = (!var_9);
                            var_20 = var_0;
                            var_21 = (max(var_21, (((~((max(105, -5743))))))));
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_1] [1] = (((((((min(1892357947, var_3))) / (2685857481 * 1391144067)))) ? (arr_18 [i_6 - 1] [9] [9] [i_0]) : ((var_1 ? (arr_17 [i_0 - 1] [i_1] [i_0] [i_0] [i_6 + 1] [i_4] [i_0]) : 9097))));
                            arr_22 [i_0 - 2] [i_0] [i_0] [7] [i_0] = ((((~((1792 ? -51 : 65535)))) | 32));
                            arr_23 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] = (8582267460587335509 && 64);
                            var_22 *= ((~((64 ? (((min(0, 0)))) : 4))));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_23 += ((((max((max(31, var_3)), -1))) ? var_8 : 0));
                            var_24 = (((3143821563 ? -1792 : (arr_26 [i_0 - 1] [i_1]))));
                            arr_27 [i_2] = (((arr_3 [i_0 + 1] [10]) ? ((min((arr_3 [i_0 - 2] [i_0 - 2]), 60276))) : (((!(arr_3 [i_0 - 1] [i_0]))))));
                            arr_28 [i_2] = ((((min(((min(var_8, 3239593632))), (min(var_13, var_9))))) ? (arr_6 [i_1]) : (((!((min(var_14, var_3))))))));
                            arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [8] [11] = (!var_8);
                        }
                        var_25 = ((~((((min(var_4, (arr_3 [i_4] [i_2])))) ? (var_0 * 10) : var_13))));
                    }
                }
            }
        }
    }
    var_26 = 0;
    var_27 = var_5;
    #pragma endscop
}
