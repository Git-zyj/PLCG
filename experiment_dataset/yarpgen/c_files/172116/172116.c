/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max((var_12 > -18526), (min(12, -158199464)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((7755862559170196128 << (3373833130789570771 - 3373833130789570771)));
                            arr_12 [i_0] [i_1] [i_2] [2] = ((~((1 ? 0 : 247))));
                            var_21 = ((var_9 ^ (min(-var_7, var_15))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_22 = (min(var_22, (((((min((((!(arr_24 [i_4])))), ((-2710921817842130838 ? (arr_16 [i_4] [i_5]) : var_0))))) || ((max(((9367399518693398909 ? var_3 : (arr_23 [i_4] [i_4] [i_4] [i_4]))), var_0))))))));
                        arr_27 [i_4] [i_4] [i_6] [i_7] |= (min(1, (~var_8)));

                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            arr_30 [i_8] = (!1);
                            arr_31 [i_8] [i_5] [i_4] [i_5] [i_8] = (((15963 ? var_16 : 2823)));
                            arr_32 [i_8] [i_8] = 4294967295;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_23 |= (min((min(0, -1175963317592841127)), ((((arr_34 [i_9] [i_4] [i_6] [i_4] [i_4]) && (arr_34 [i_4] [i_5] [i_6] [i_7] [i_9]))))));
                            arr_35 [i_4] [i_5] [i_4] [i_7] [i_9] |= min((108 < 1), (min(-2710921817842130838, 0)));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_38 [i_10] = (((1 ? (arr_17 [i_4] [i_4] [i_4]) : var_1)));
                            var_24 = min((((-(arr_16 [i_4] [i_4])))), ((var_3 ? 1 : var_11)));
                            arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_20 [i_5] [7]);
                        }
                        var_25 |= (max(((((var_10 ? 14974798505008710101 : (arr_16 [i_4] [i_6]))) ^ ((((!(arr_20 [i_5] [i_5]))))))), ((((arr_18 [i_6] [i_5]) ? var_5 : -24037)))));
                    }
                }
            }
        }
        arr_40 [i_4] |= -1027854852;
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_26 = ((((((1 >> (2021948133 - 2021948115))))) ? ((~(arr_42 [i_11] [i_11]))) : (min(1, (arr_42 [i_11] [i_11])))));
        var_27 = (((((var_2 * var_10) ? ((min(var_2, 41))) : (max(var_8, 18446744073709551615)))) * ((((((var_4 ? -1027854852 : var_3))) * 2021948106)))));
    }
    #pragma endscop
}
