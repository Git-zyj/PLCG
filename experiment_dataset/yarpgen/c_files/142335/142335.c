/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = var_0;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = ((((((((var_10 ? 34541 : (arr_5 [i_0] [i_1] [i_0])))) ? (((30984 >> (30984 - 30979)))) : (min(-1541993725, 8663984364166751672))))) ? (((var_11 <= (arr_6 [i_0] [i_1] [i_1])))) : ((min(var_8, 875898367)))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_14 = ((7253 >> (4160489527 - 4160489522)));
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [10] [i_2] = (((((14010090604253562666 || (arr_0 [i_0]))))) > ((max(9782759709542799944, 8372224))));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_25 [21] [i_5] = (((((~(arr_23 [i_6 + 2] [i_6] [i_6 + 3] [i_6 + 3])))) ? ((1 ? (arr_23 [i_6] [i_6 - 2] [i_6 + 1] [i_6]) : 94)) : (((!(arr_22 [i_5] [i_6 - 2]))))));
                    arr_26 [i_5] [i_5] [i_7] [i_7] = ((!((max(1, 95)))));
                    var_15 = (max(var_15, (((var_6 <= (!1792))))));
                    var_16 = (max(var_16, (((((((-4605354350972927584 == -18995) << (6248 - 6221)))) ? ((max((3419068938 <= 18446744073709551615), var_5))) : (arr_24 [i_6] [i_5]))))));
                }
            }
        }
        var_17 *= 19818;
        arr_27 [i_5] = -60;
        arr_28 [i_5] &= (((!var_2) + ((((max(var_9, var_8))) ? ((var_9 ? (arr_18 [i_5]) : -7253)) : ((((4497 >= (arr_24 [i_5] [i_5])))))))));
    }
    var_18 = (((max(var_2, var_11)) << (max(var_9, ((21202 ? var_5 : 57))))));
    var_19 = (max(var_19, (((8663984364166751672 ? 2523049761 : 0)))));
    #pragma endscop
}
