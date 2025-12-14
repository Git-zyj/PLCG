/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_5 / var_0);

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_14 = (max(var_1, ((max(1, var_12)))));
                        var_15 |= ((((max(52142, (min(1365, var_12))))) == (arr_10 [i_2])));
                        var_16 = (var_0 > ((~(!-1))));
                        arr_12 [i_0] [i_0] [i_1] [i_0 + 2] [i_0] [1] = ((((4964259202123425615 * var_0) == (((max(var_2, var_2)))))));
                        var_17 = (var_12 > var_9);
                    }
                }
            }
        }
        arr_13 [i_0] = (max((((arr_5 [i_0] [i_0 - 2]) >> (((arr_5 [i_0] [i_0 + 1]) - 5972)))), (var_0 && var_5)));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (max(((max(var_7, (arr_17 [i_4] [i_4])))), ((var_9 / (max(-2127690920, -1))))));
        var_18 ^= (!var_7);
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = 9223372036854775807;
        arr_23 [i_5] = ((var_2 <= (((arr_17 [i_5 - 1] [1]) / (((arr_21 [i_5]) + 1725578590))))));
        var_19 *= ((((max((arr_15 [i_5] [i_5 + 1]), (arr_15 [i_5] [i_5 - 2])))) < (max((var_7 || var_12), 8))));
        arr_24 [i_5] = 1;
    }
    var_20 = 18820;
    #pragma endscop
}
