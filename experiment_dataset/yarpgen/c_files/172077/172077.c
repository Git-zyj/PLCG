/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (~var_4)));
    var_20 = (max(((~(min(var_0, var_0)))), var_14));
    var_21 = 43;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((!(((0 ? ((min(571816655, 571816637))) : -4917795424276458556)))));
        arr_3 [i_0] = (max((((!(~var_10)))), var_2));
        var_23 = arr_1 [12];

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = -43;
            var_24 = var_13;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] = (max(((~(arr_0 [i_1 + 3]))), ((min(var_7, (arr_11 [i_0] [i_0] [i_2 - 1] [i_0]))))));
                            arr_16 [i_4] [i_0] [i_2 - 1] = (((((var_11 ? (arr_7 [i_2 + 1] [i_0] [i_0]) : var_12))) ? ((((arr_9 [i_0] [i_3] [i_0]) < (arr_9 [i_0] [i_0] [i_0])))) : (arr_4 [i_0])));
                            arr_17 [i_0] [i_0] [i_0] [i_3] = var_2;
                            var_25 = (min(var_25, (((((1 ? -32659 : 64)) & (arr_12 [i_4] [i_4]))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_26 ^= (((arr_20 [12]) * (!var_4)));
            var_27 |= var_10;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_0] [i_6] [i_0] = ((32659 < (max((arr_0 [i_0]), var_12))));
            var_28 ^= ((~1134496679) & (((arr_18 [8]) ? (arr_18 [8]) : var_16)));
            var_29 = ((0 ? ((4917795424276458556 ? 255 : 0)) : 571816637));
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_27 [i_7] = (~43);
        arr_28 [i_7] = (min(((-(arr_25 [i_7]))), ((43 - (((arr_26 [i_7] [i_7]) + var_17))))));
        arr_29 [i_7] = (arr_25 [i_7]);
    }
    for (int i_8 = 3; i_8 < 7;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_36 [i_8] = ((((min(((min((arr_32 [i_9] [i_8]), var_4))), var_1))) ? (arr_33 [i_8]) : (((!(((54669 ? var_11 : var_3))))))));
            var_30 += ((-591988149 ? (((-((max((arr_7 [i_9] [i_9] [i_9]), 0)))))) : var_17));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_31 |= (((arr_31 [0] [i_10]) ? ((42 ? var_7 : var_4)) : var_15));
            arr_40 [4] [i_8 + 1] [4] |= ((!(arr_31 [0] [i_8 + 3])));
            arr_41 [i_8] = (-8503409916507933780 + 0);
            var_32 = (arr_21 [i_8] [i_8] [i_10]);
        }
        arr_42 [i_8] = (~-0);
    }
    #pragma endscop
}
