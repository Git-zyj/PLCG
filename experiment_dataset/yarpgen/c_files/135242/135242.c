/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = ((((((arr_1 [i_0 + 2]) ? -60 : var_11))) ? (min((arr_0 [i_0] [i_0]), 0)) : ((((var_11 > (arr_0 [i_0 - 3] [i_0 - 2])))))));
        arr_2 [i_0] = ((((((arr_1 [i_0 + 2]) ? (var_19 / var_12) : var_19))) ? ((((arr_0 [i_0] [i_0 + 2]) >= ((-(arr_0 [i_0] [i_0])))))) : ((26234 ? ((198 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0 - 3])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_21 = (max((arr_3 [i_1]), ((~(~0)))));
        var_22 += (min((((arr_3 [i_1]) ? (((-2147483647 - 1) ? (arr_4 [3]) : var_15)) : (-2147483647 - 1))), var_7));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 = (((min(224, (((arr_7 [i_2]) & 15721)))) * var_10));
        arr_8 [i_2] = (((((arr_6 [i_2]) ? (-2147483647 - 1) : 0))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_24 -= -var_17;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_25 &= (+(((arr_0 [i_6 + 1] [i_6 + 1]) ? var_5 : (arr_0 [i_6 + 1] [i_6 + 1]))));
                        arr_21 [i_3] [i_4 - 1] [i_3] [i_6] = ((((-(arr_20 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))) << ((((max((arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_20 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])))) + 25469))));
                        arr_22 [9] [i_4 - 1] [i_4] [i_4 - 1] = ((((((arr_0 [i_4 - 1] [i_6 + 1]) ? (arr_0 [i_4 + 1] [i_6 + 1]) : (arr_0 [i_4 - 1] [i_6 + 1])))) ? (((!(arr_0 [i_4 - 1] [i_6 + 1])))) : (((arr_0 [i_4 - 1] [i_6 - 1]) ? (arr_0 [i_4 + 1] [i_6 + 1]) : 114))));
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        var_26 = var_1;
                        var_27 = (min(var_27, ((((arr_11 [i_4]) - -162)))));
                    }
                    var_28 ^= var_1;
                    var_29 = ((((255 / var_19) / -1639618647)));
                }
            }
        }
        arr_25 [i_3] [i_3] = (((((~var_17) ? 112 : (arr_0 [i_3] [i_3])))) ? ((((max(var_9, -20211))) & (arr_7 [i_3]))) : (~var_5));
        var_30 = 255;
    }
    var_31 = ((-(((((-1 ? var_0 : var_0))) ? (max(var_13, var_13)) : -var_12))));
    var_32 = 6;
    var_33 -= var_0;
    var_34 = min(var_5, ((min(var_5, var_15))));
    #pragma endscop
}
