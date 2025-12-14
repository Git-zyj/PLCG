/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_11 = var_10;
                        arr_14 [i_0] = (arr_13 [i_3 - 2] [i_0 - 1] [i_0] [i_0]);
                        var_12 = (max(var_12, (((-(arr_11 [i_0 + 1] [i_3]))))));

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [12] [1] = (((((-16 ? -16 : var_0))) & var_8));
                            var_13 = ((218 ? 189344776 : (arr_15 [i_3] [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3 + 1] [1])));
                        }
                    }
                    arr_19 [i_0] = (((((90 && 188) - var_7)) == ((((var_0 >> (((arr_1 [i_0] [i_0]) - 3978739158138011046)))) - ((((arr_16 [i_0] [1] [i_1] [i_0] [2] [i_2]) != 24157)))))));
                    arr_20 [i_0] = -165;
                }
            }
        }
        arr_21 [i_0] = var_7;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_24 [i_5] = (((((-var_7 ? 254 : 524224))) || 607171405));
        var_14 = (min(var_14, var_4));
        arr_25 [i_5] = ((((((!148) + (arr_22 [i_5])))) ? (26 <= -3318344333255741056) : var_2));
    }
    var_15 = (min(var_5, var_7));
    #pragma endscop
}
