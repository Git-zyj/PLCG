/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (max((~var_17), 3812100228));
    var_22 -= ((((-((-14 ? 482867068 : var_15)))) < ((max(((1530186648 ? var_0 : var_13)), var_0)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_23 &= (min(((((max(-23523, (arr_2 [i_0] [11]))) >> (((var_18 ^ 16777215) - 2493289914))))), var_14));
        var_24 = 1;
        var_25 -= (arr_1 [i_0 + 4]);
        arr_3 [i_0] [i_0 - 1] &= ((((var_5 >= (arr_1 [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_26 -= (max((arr_0 [i_1]), (((arr_7 [i_0 + 1]) | 16777200))));
                    var_27 = (max(var_27, (((-(1547858897 / 268435448))))));
                    var_28 = (max((min((~16777215), ((((arr_8 [i_0]) != (arr_4 [i_0])))))), var_7));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_29 = ((+((-214877113709203751 / (max((arr_5 [i_3] [i_3]), 1124800395214848))))));
        arr_12 [i_3] [i_3] = var_11;
    }
    #pragma endscop
}
