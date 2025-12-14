/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(4294967286 | var_14)));
        var_20 |= (((arr_0 [i_0]) ? var_3 : 128));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] |= max(1898169303, ((((arr_2 [i_1] [i_1 - 1]) ? 109 : (arr_2 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = ((+((((arr_15 [i_4 + 1] [i_3] [i_2] [i_1 - 1]) >= (arr_15 [i_1] [i_1] [i_4] [i_5 - 1]))))));
                                arr_19 [i_2] = (((var_16 <= var_13) ? (min((~-2843), (((arr_12 [i_5] [i_1]) ? (arr_9 [i_2] [i_3] [i_2]) : 30064771072)))) : (arr_10 [i_2])));
                                arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] [i_4] = ((((min((arr_16 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]), (arr_1 [i_1 - 2])))) ? ((-((var_2 ? var_1 : (arr_17 [i_5] [i_2] [i_3] [i_2] [i_1]))))) : (((max(113, 0))))));
                            }
                        }
                    }
                    arr_21 [i_2] [i_2] = ((~(max(3263175457, 0))));
                    arr_22 [i_2] [i_2] [i_1] = (min(-var_7, 2112880714));
                    var_22 = ((465467338 >= (min(var_9, (((arr_10 [i_2]) ? var_14 : (arr_15 [i_1] [i_2] [i_3] [i_3])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((max(((((arr_16 [i_1 - 1] [i_2] [i_3] [i_6] [i_7 + 1] [5] [i_2]) ? 1 : ((-32768 ? 1 : -8136))))), (((98 & var_15) ? 1 : ((var_12 ? 7521826605729490159 : var_18)))))))));
                                arr_29 [i_6] [i_6] [i_3] = (max(((((arr_25 [i_1] [i_2] [i_3] [i_6] [i_1 - 2]) && (max(var_11, (arr_28 [i_6] [i_3] [i_6])))))), (arr_26 [i_1] [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 |= (255 ? (((((((2511670450 ? 1873998132 : 9223372036854775807))) && var_9)))) : var_5);
    #pragma endscop
}
