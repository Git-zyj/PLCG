/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_6, var_16))) >> ((((min(120, var_13))) & 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 += ((((max((arr_6 [i_2 - 3]), (arr_6 [i_2 - 2])))) ? (arr_6 [i_2 - 2]) : (((arr_6 [i_2 + 1]) ? 1 : (arr_6 [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_10 [i_4 - 1] [3] [i_2] [i_1] [14]);
                                var_21 = (~1);
                                var_22 = var_14;
                                var_23 = (min(var_23, ((((((-(arr_7 [i_1] [8])))) ? (arr_3 [i_4 - 1] [i_3 + 3] [i_2 - 1]) : (arr_9 [0] [2] [1] [i_1] [6] [16] [0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_24 = (min(var_24, ((!((max(var_16, (((arr_11 [1]) ? var_12 : (arr_14 [12]))))))))));
                arr_15 [i_6] = (!((((arr_13 [i_6]) ? (arr_13 [i_6]) : (arr_13 [i_6])))));
                var_25 = (min(var_25, (((((((-(arr_14 [1]))) == ((var_7 >> (var_0 + 20))))) ? ((max((arr_11 [1]), (arr_14 [4])))) : -102)))));
                var_26 *= (((((!(arr_13 [2]))) ? var_5 : var_1)));
            }
        }
    }
    var_27 += ((-var_3 ? var_1 : var_2));

    for (int i_7 = 4; i_7 < 19;i_7 += 1)
    {
        arr_18 [1] = ((~(arr_12 [17] [1])));
        var_28 = (min(var_28, (((((arr_12 [8] [i_7 - 2]) == (arr_12 [1] [i_7 + 1])))))));
    }
    #pragma endscop
}
