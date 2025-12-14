/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((~((max((min(var_13, var_1)), (arr_7 [i_0] [i_0] [i_3 - 1] [i_2 + 1])))))))));
                                arr_12 [i_2] = ((15647692577066916687 ? (((18477 ? 2005843879 : 1))) : (arr_10 [i_2] [i_2] [i_2])));
                                var_15 = (var_11 ? ((-18478 ? var_5 : 18477)) : (((~(arr_7 [i_0] [i_1] [i_2 + 2] [i_3 - 2])))));
                            }
                        }
                    }
                    var_16 = var_12;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 15;i_8 += 1)
                {
                    {
                        var_17 = ((var_8 ? ((-2005843898 ? -18492 : -1136207319)) : 29805));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_24 [i_7] [i_5] [i_7] [i_8] [i_8 + 1] [i_5] = ((((((!(!var_1))))) == (max(2143507993, var_5))));
                            arr_25 [i_8] [i_6] [i_6] [i_5] [i_5] = (((!(-12656 || var_3))) ? ((var_5 ? (arr_22 [i_8 - 4] [i_6 + 3] [i_5] [i_5] [i_6 + 3] [i_6 + 3]) : var_7)) : 381128309);
                            arr_26 [i_5] [i_5] = 5539;
                        }
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            var_18 ^= 9995837322975567910;
                            var_19 = (((arr_3 [i_6]) | var_6));
                        }
                        var_20 += ((var_4 ? var_2 : (((((arr_28 [i_8 + 1] [i_8] [16] [i_6] [i_5]) && (!319981176)))))));
                        arr_30 [i_5] [i_6 + 3] [i_6 + 3] = ((-1 ? ((max(-18478, var_6))) : (((!(((3273 ? 24999 : (arr_22 [i_6] [i_7] [i_5] [i_8] [i_5] [i_5])))))))));
                    }
                }
            }
        }
        arr_31 [i_5] = -498277117;
    }
    var_21 = -var_0;
    #pragma endscop
}
