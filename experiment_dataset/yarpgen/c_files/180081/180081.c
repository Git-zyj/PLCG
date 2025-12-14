/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((~var_9) ? 30 : (~7215573286148424254))))));
    var_12 = var_7;
    var_13 = (((((var_10 ? var_10 : (max(var_2, var_2))))) ? ((((13528 | 15550) ? var_3 : ((7215573286148424231 ? var_4 : var_5))))) : (min(var_2, var_2))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = ((((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? ((((max(11231170787561127362, (arr_5 [i_0] [i_0 + 2] [i_0])))) ? ((max(15550, (arr_1 [i_0] [i_2])))) : ((max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_2])))))) : (((!((!(arr_4 [i_0 + 2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min((arr_9 [i_4 + 2] [18] [i_2] [i_3] [i_4 - 1]), (arr_9 [i_1] [i_1] [i_1] [17] [3]))), (((!((((arr_0 [i_0]) ? 454709724 : (arr_6 [i_0 - 1] [i_0 - 1] [10])))))))));
                                var_15 = (max(var_15, ((min((((min(var_1, (arr_0 [16]))))), (max((arr_8 [i_3] [i_3] [i_3] [i_2]), (arr_8 [i_3] [i_3] [i_3] [i_2]))))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0 - 1] = ((!(arr_8 [i_0] [i_0] [i_0] [i_0])));
                    var_16 = 86;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            {
                var_17 = (((((arr_14 [i_6 - 3]) ? (max(11231170787561127379, 49985)) : (((~(arr_15 [i_5] [i_6])))))) & ((max((((arr_16 [i_5] [i_5] [22]) ? 1604634410 : 17)), ((55044 ? (arr_16 [i_5] [i_5] [i_5]) : (arr_15 [i_5] [i_6 - 1]))))))));
                var_18 -= (min(23, (min(((((arr_17 [i_6]) != 49965))), ((var_10 ? (arr_15 [i_5] [i_5]) : 22))))));
                var_19 = (min((((arr_15 [i_6 + 3] [i_6 - 2]) ? (arr_15 [i_6] [i_6 + 1]) : -2147483646)), ((((arr_15 [i_6] [i_6 - 1]) && (arr_15 [i_6 - 1] [i_6 + 1]))))));
                arr_18 [i_5] [0] &= (!((min((~1), (min(7215573286148424247, (arr_14 [i_6])))))));
            }
        }
    }
    #pragma endscop
}
