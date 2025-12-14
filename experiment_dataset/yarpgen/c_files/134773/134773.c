/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(var_1, (min(var_0, ((var_5 >> (var_1 - 2767)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (65535 - 56);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = 545620356;
                    var_17 = (max(var_17, ((min((min(-var_9, var_10)), ((((!-27078) & ((min((arr_2 [10] [i_1]), 35266)))))))))));
                }
            }
        }
        var_18 = (-2147483647 - 1);
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_10 [i_3] [i_4])));
                    var_20 = (min((-8 * 59), var_7));
                    var_21 = var_8;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (min((((((min(var_4, (arr_10 [i_3] [i_4])))) || (((arr_14 [i_3] [i_3] [i_5] [i_6]) || var_2))))), (min((min(6612100174065272650, -2034816015)), (((!(arr_12 [i_7]))))))));
                                var_23 += ((var_11 ? ((53712 ? 65535 : 27)) : (min((!var_11), (((arr_19 [i_3 + 1] [i_4] [i_5] [i_6] [i_7]) ^ -545620357))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    var_24 = 15;
                    arr_27 [i_3 - 1] [1] [i_8] [i_3] = (min(((-((~(arr_24 [i_3] [4] [i_8] [i_9]))))), (min(((min(1, (arr_19 [i_9] [i_8 - 3] [i_8] [5] [i_3])))), var_1))));
                }
            }
        }
        var_25 = (((~var_0) * ((min(var_11, 189)))));
        var_26 = (min(var_26, (min((arr_11 [i_3] [22] [i_3 - 1]), -1))));
        var_27 = ((min((arr_24 [i_3] [i_3] [i_3] [i_3 - 1]), var_8)));
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        arr_31 [i_10] [i_10] = (((~-var_1) ? (min((!53711), -65535)) : -var_5));
        var_28 = (max(var_28, 50745));
    }
    #pragma endscop
}
