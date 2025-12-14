/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 |= (min(-14931, 24));
        arr_3 [i_0] = ((((((min(var_6, 48))) ? ((((arr_1 [i_0 + 4]) == 17322390790984802212))) : ((min((arr_2 [i_0 - 3]), (arr_0 [i_0 - 1] [i_0]))))))) * (max(var_3, (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = (min(10701930744805376581, -8416));
                    var_17 += (((((~-10) / ((min(124, (arr_6 [i_1] [i_1] [i_2]))))))) ? (min((arr_4 [i_0 + 2] [i_0 - 2]), (21580 || var_1))) : (arr_5 [i_1]));
                    var_18 = 18;
                    var_19 += ((((arr_5 [i_0 - 2]) != (arr_5 [i_0]))) ? (((((((0 ? 76 : 0))) && (arr_2 [i_0 - 2]))))) : (arr_4 [i_0 + 4] [i_0 + 4]));
                    var_20 = arr_9 [i_1] [i_1] [i_2];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [8] [i_3] = (((arr_11 [i_3]) > (arr_11 [i_3])));
        var_21 = (arr_12 [i_3] [i_3]);
    }
    var_22 ^= var_3;
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 -= ((((((((-31074 ? var_0 : 0))) ? 105 : var_5))) && ((((((arr_14 [11]) < (arr_12 [i_4] [i_8 + 1]))) ? (arr_18 [i_4]) : (var_4 & var_10))))));
                                var_24 = (min(var_24, (((7 > (((arr_21 [i_8] [i_8 + 3] [i_6] [6]) * (arr_21 [i_8 - 1] [i_8 + 3] [i_8 + 3] [i_7]))))))));
                            }
                        }
                    }
                    arr_28 [i_4] [i_5] [i_6] = (min((arr_15 [i_4] [i_4]), (255 >= var_10)));
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
