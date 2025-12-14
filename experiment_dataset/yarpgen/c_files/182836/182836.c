/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((+(((((-2147483647 - 1) ? 2147483647 : -7379502022406501732)) | (((-(arr_5 [6] [6] [i_0])))))))))));
                arr_6 [i_0] = (0 == 33179);
                arr_7 [i_0] [i_1 - 1] = ((((-32767 - 1) && 18446744073709551615)) ? ((var_9 ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : var_8)) : (!-5739));
                var_15 = (min(((max(-32759, var_13))), (((-822817269 == 770141380944043079) ? (((arr_3 [i_0] [i_0]) / 60902)) : 511))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (arr_5 [i_2] [i_2] [10]);
        arr_11 [i_2] = (arr_1 [i_2]);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((((((-2147483644 ? var_5 : var_3)) + (var_1 <= 3750888530511302319)))) ? (arr_13 [i_3]) : (((((0 ? (-32767 - 1) : 12))) ? (arr_12 [i_3]) : (arr_12 [i_3])))));
        arr_15 [i_3] [i_3] = (((((((18446744073709551615 * (arr_13 [i_3]))) * (((arr_12 [4]) ? (arr_12 [8]) : 9))))) ? ((min((min(511, 33182)), (((!(arr_13 [i_3]))))))) : (arr_12 [i_3])));
        arr_16 [i_3] = (min((((!(arr_12 [i_3])))), ((~(max((arr_12 [i_3]), (arr_12 [i_3])))))));
        arr_17 [i_3] = ((((min((arr_13 [i_3]), 0))) ? (((~(arr_13 [i_3])))) : ((2582990557 ? 133891696 : 16))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_21 [0] = ((739261719374080326 ? 14202196483889960720 : 1));
        var_16 *= (((arr_13 [18]) ? (arr_13 [12]) : (arr_13 [2])));
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_34 [i_5 - 1] [i_6] [i_5] = ((((((max(-6397588251135451681, 59237)) << (var_13 - 790541958)))) ? ((((!(arr_27 [i_5]))))) : (((((arr_25 [i_5 - 1] [i_5 - 1]) && 36028522141057024)) ? (arr_24 [i_5]) : -8347))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_17 = (max(var_17, (!var_13)));
                        var_18 = (arr_25 [i_5 + 1] [i_5 - 2]);
                        arr_37 [i_8] [i_5] [i_5] [i_5] [9] [1] = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_19 = (max(((((max(1817912454, 4294967295))) ? 9 : var_8)), (((((4066054542 ? (arr_26 [i_5] [i_5] [i_5]) : -17901)) | ((min(244, var_5))))))));
                                arr_45 [i_5] [i_5] = (~(((arr_24 [i_5]) ? ((-2147483644 & (arr_23 [i_5]))) : var_0)));
                                var_20 -= var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
