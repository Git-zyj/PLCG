/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 |= (!7);
                        var_16 = (max(var_16, (arr_10 [i_0] [i_3] [i_2])));
                        arr_12 [i_2] = (((!-6042772780353456809) ? ((((!(arr_3 [i_0] [i_0] [i_2]))))) : 7190490564457294596));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_17 = (((~5785318537420611692) << (4633971219738487366 - 4633971219738487305)));
                        var_18 = ((((0 && (arr_11 [i_0] [i_4 + 2] [i_4 + 2] [7] [i_1])))));
                        var_19 *= ((((((arr_6 [i_4] [i_4] [16] [i_4]) / (arr_6 [i_4] [i_4 - 2] [i_2] [i_4])))) / (max(7190490564457294596, (arr_13 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))));
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        var_20 = (max(var_20, (((((3620701443572130988 >= (min((arr_13 [i_0] [i_1] [i_2] [i_0] [i_0]), -1127745413)))) ? ((max((arr_10 [i_5 + 1] [4] [i_5 + 1]), 188))) : (-2354 & 1787779967))))));
                        var_21 = ((~(arr_7 [i_5 + 1] [17] [i_5 - 1] [i_1])));
                        var_22 ^= (arr_17 [i_5]);
                        arr_19 [i_5 - 1] [i_2] [i_1] [i_2] [i_0] = ((((((((arr_7 [i_0] [i_1] [17] [1]) && -2347)) && ((min(15872, 1)))))) | (~112)));
                    }
                    var_23 = (((((arr_3 [i_0] [i_1] [i_1]) | (arr_3 [i_0] [i_1] [i_2]))) | (~-70438481)));
                    var_24 = (max(var_24, ((((~1) ^ (max(-4110960575924966764, ((((arr_13 [i_2] [9] [13] [i_1] [i_0]) <= 72))))))))));
                }
            }
        }
    }
    var_25 = ((-(((!((min(123145302310912, var_3))))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                {
                    var_26 += (((arr_4 [i_8 + 2]) > ((((((arr_13 [i_7] [i_7] [i_6] [i_8 + 2] [i_7]) || (arr_2 [i_6])))) / (arr_16 [i_8] [10] [i_6] [i_6])))));
                    var_27 *= (110 <= 4173522845123993539);
                }
            }
        }
    }
    #pragma endscop
}
