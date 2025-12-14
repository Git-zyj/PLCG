/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [4] = ((~(((arr_2 [i_0]) | (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = (((((((arr_0 [i_0]) / 1)) + (arr_2 [1]))) * ((max(13459568129284634367, 1)))));
        var_18 -= 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((((arr_5 [i_1]) | ((1 ? (arr_6 [i_1]) : var_15))))) == 5);
        var_19 = (max(var_19, (((~((min((arr_5 [8]), (arr_5 [2])))))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [i_4 + 3] [i_4 + 3] [i_1] [i_4 - 1] [4] [i_4 + 3] = var_5;
                        var_20 = ((var_12 ? var_9 : (((((~(arr_11 [i_4 + 3] [i_1] [i_1])))) & ((~(arr_10 [i_1] [i_1] [i_3])))))));
                        var_21 = (max(var_21, (arr_12 [i_1])));
                        arr_18 [i_1] = (((arr_6 [i_4 + 1]) % 21084));
                    }
                }
            }
        }
        var_22 = (max(var_22, ((((((arr_8 [2]) ^ (arr_8 [10]))) & var_1)))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_6] [i_6] [12] = (arr_29 [i_5] [i_6] [i_7] [i_8]);
                        arr_31 [i_6] [i_6] [i_6] [i_6] = (max(var_5, -13));
                    }
                }
            }
        }
        var_23 ^= (min((arr_20 [i_5] [i_5]), 1));
        var_24 *= (((((-1 ? 1 : var_4))) ? (((arr_19 [i_5]) | (arr_19 [i_5]))) : ((1253899722 ? (arr_19 [i_5]) : (arr_19 [i_5])))));
        arr_32 [i_5] [i_5] = var_0;
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 18;i_10 += 1)
            {
                {
                    arr_39 [i_10] [i_9 - 1] [i_5] = (((((arr_37 [i_5] [i_9] [i_5]) ? ((-996216125238504718 ? (arr_38 [i_10 + 2] [i_5]) : var_9)) : (((237 ? 1 : 0))))) / (((((min(1, 11))) ? 1671507006 : ((19 ? (arr_23 [i_5] [i_9 - 1] [i_10 - 4]) : 858527174237566070)))))));
                    arr_40 [i_5] [i_5] [i_5] = (max((min((((arr_35 [i_5] [i_10 - 3]) ? 14690250186026747641 : var_7)), ((max(var_0, var_2))))), (((-((44 ? 1 : 44462)))))));
                    var_25 = ((((((((var_15 ? 1 : 51))) % 9759482108805082397))) ? (1 == var_2) : 1));
                }
            }
        }
    }
    var_26 *= var_14;
    var_27 = (max(var_27, (247 > 858527174237566070)));
    #pragma endscop
}
