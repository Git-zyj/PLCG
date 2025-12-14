/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((min((arr_2 [i_0 - 2] [i_0]), (arr_1 [i_0] [i_0]))) - ((var_12 ? (arr_1 [i_0] [i_0]) : var_7)))) - (((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))))));
        arr_4 [i_0] = (max((min(-2507025154770365906, 1849643167)), ((min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_0] [i_2] = ((2507025154770365919 ? 2507025154770365886 : -116));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [8] [i_1] [i_3] [i_1] [i_4] |= (((arr_8 [i_0 - 2]) ? 2507025154770365893 : (arr_13 [i_0 + 2] [10] [i_3] [i_3] [i_1])));
                                var_14 = (((((-2507025154770365910 ? 325080592 : 2507025154770365905))) ? (((arr_5 [i_0 + 1] [i_1] [i_2]) ? (arr_13 [i_0] [i_0 + 3] [i_3] [6] [i_0]) : (((~(arr_7 [i_0] [15])))))) : ((~(max((arr_9 [i_0] [9] [1] [i_4]), (arr_12 [i_0 + 3])))))));
                                arr_17 [i_0 + 1] [i_3] [i_1] [i_3] [i_0] = (((max(4074935902685511826, (arr_2 [i_0 + 2] [i_0])))) ? (-2507025154770365904 ^ 2507025154770365905) : ((((arr_2 [i_0 + 1] [i_0]) ? (arr_2 [i_0 + 3] [i_0]) : (arr_2 [i_0 + 1] [i_0])))));
                                arr_18 [i_0] [i_1] [i_4] = (min((arr_7 [i_0 + 3] [i_0 - 1]), ((((-(arr_10 [i_0] [i_2] [i_2]))) / (arr_5 [i_0 + 3] [i_0 + 1] [i_2])))));
                                var_15 = (min((arr_14 [3] [i_0 - 2]), (arr_15 [17] [i_0 + 1] [i_0 - 2] [i_3])));
                            }
                        }
                    }
                    arr_19 [i_0] = (((((~var_12) < 3)) ? var_11 : (arr_1 [i_0] [i_1])));
                    var_16 ^= (arr_2 [i_0] [i_1]);
                    arr_20 [i_0 + 2] [1] [11] [i_0] = 1;
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 - 2] = ((((-2507025154770365898 ? (((1 ? 120 : 5575675264638032923))) : 2251799813685120)) == (((min(23708, 1))))));
        var_17 = (arr_10 [8] [i_5] [i_5]);
        var_18 = 18444492273895866463;
        arr_24 [i_5] = (max(64224, (((((((arr_9 [10] [i_5 - 2] [0] [14]) ? (arr_12 [i_5 + 3]) : (arr_0 [i_5])))) ? (arr_14 [i_5 + 3] [i_5]) : var_11)))));
        var_19 = ((((min(68, (((arr_12 [12]) * var_4))))) && 4092203854));
    }
    var_20 = (~63);
    var_21 = (min((((var_1 | (var_11 * 1)))), var_6));
    #pragma endscop
}
