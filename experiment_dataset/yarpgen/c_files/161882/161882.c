/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 << (var_6 + 103)));
    var_11 = (max(var_11, (((!((((-423929818 / -506170583108252396) ? ((1 ? var_6 : 3652)) : ((var_4 ? var_5 : 61883))))))))));
    var_12 = -var_7;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (~((((var_3 < var_0) <= var_2))));
        var_13 = ((min(18446744073709551607, 88)));
        var_14 = 241;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = (((min((max(8527557933124715595, -26)), 40222)) * (((+(((arr_7 [13] [i_1] [i_1] [i_1]) ? 44083 : -87)))))));
                    var_15 = (min(var_15, var_7));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((((arr_11 [i_3] [i_3]) * (arr_12 [i_3]))) | (arr_12 [i_3]));
        arr_14 [i_3] = ((((1 >= 845842451) ^ (arr_12 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_16 = 15777;
                                arr_28 [i_6] [i_8] = (var_0 ? (var_5 - 178487640) : (max((arr_3 [i_4] [i_5]), 45397)));
                                arr_29 [9] [i_5] [i_6] [i_5] [i_8] = ((-((35 & (((arr_15 [i_4] [i_4]) | 3865859246))))));
                                arr_30 [i_6] [i_7] [i_6] [i_6] [i_5] [7] [i_4] |= (((-9223372036854775807 - 1) ? ((114 ? 0 : 5217)) : (((max(110, 0))))));
                            }
                        }
                    }
                    arr_31 [i_6] [i_5] [i_4] [i_4] = 32767;
                }
            }
        }
        var_17 = (min((((arr_23 [i_4] [i_4] [i_4] [2]) == var_4)), ((((min(var_5, 255))) && (arr_22 [i_4] [i_4] [i_4] [15])))));
    }
    #pragma endscop
}
