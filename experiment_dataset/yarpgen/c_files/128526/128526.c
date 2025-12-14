/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = -939038025;
                    var_13 -= (arr_1 [11]);
                }
            }
        }
        arr_8 [i_0] = (arr_3 [i_0] [i_0]);
        arr_9 [i_0] [i_0] = (((((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])))) ? 939038024 : ((~(arr_0 [i_0 - 2]))));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_14 = -939038018;
        var_15 -= (min(939038024, var_8));
        arr_12 [1] |= (min(((min((!var_5), (arr_11 [i_3 + 2])))), ((6712193151147286475 ? (arr_11 [i_3 + 1]) : (arr_1 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] = (((((0 ? (arr_0 [i_4]) : var_10))) ? (arr_4 [9] [i_4]) : var_10));

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_16 = (max((min(5115160598011473639, (arr_19 [i_5 - 1]))), (arr_1 [17])));
            var_17 = (arr_14 [i_4] [1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] = ((((((-var_11 || ((((((arr_7 [i_5] [i_6] [i_7]) + 9223372036854775807)) >> (arr_0 [i_4])))))))) & (((arr_7 [i_5 + 1] [i_5 + 2] [i_5 + 1]) ? ((min(var_0, (arr_24 [i_7])))) : (((arr_10 [i_4] [18]) ? var_11 : 1987220920))))));
                        arr_27 [i_4] [13] [13] [i_6] [9] = ((((((min((arr_20 [i_4] [i_4] [12] [1]), var_1))) || var_8)) ? (min(3077531285, (arr_17 [i_5 - 1] [i_6]))) : (((+(((arr_3 [i_7] [6]) ? 939038017 : 18760)))))));
                        var_18 = (((((arr_11 [i_5 - 1]) < (arr_24 [i_5 - 1]))) ? (((1 || (arr_16 [i_5 - 1] [i_5 - 1])))) : (arr_11 [i_5 + 1])));
                        arr_28 [i_4] [i_4] [i_6] [10] [i_5 + 2] [i_4] = (arr_4 [i_5] [i_4]);
                    }
                }
            }
            var_19 = ((255 / (arr_5 [i_5 - 1] [i_5 + 2] [i_4])));
        }
    }
    var_20 = ((((min(-var_4, var_1))) ? var_11 : var_1));
    #pragma endscop
}
