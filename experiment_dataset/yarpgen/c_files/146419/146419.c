/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = ((((((-((min(30630, 1))))) + 2147483647)) >> (((max((~1269674016), (!511))) - 3025293257))));
        var_20 = ((!((min(511, (min(-24015, var_5)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (max(var_21, (((!(arr_3 [i_1] [i_1]))))));
        var_22 |= (((min(675, (~1049241994398182198))) & (((~(arr_5 [i_1]))))));
        var_23 *= 675;
        arr_6 [i_1] = (min(((((max((-9223372036854775807 - 1), 29818)) >= (var_16 % var_1)))), var_0));
        arr_7 [i_1] [i_1] &= arr_3 [i_1] [i_1];
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_9 [i_2]) | var_14));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_24 -= (arr_13 [i_2] [i_2] [i_2]);
                    var_25 -= var_8;
                    var_26 = (max(var_26, var_3));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (min(3265036902, (arr_16 [i_5] [i_5] [i_5])));
        arr_23 [i_5] = (min(-2809, (arr_14 [i_5])));
        arr_24 [i_5] [i_5] = (arr_14 [i_5]);
        arr_25 [24] &= -20861;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_27 -= (((arr_15 [i_6] [i_6] [i_6] [i_6]) > ((((arr_17 [i_6] [i_6] [i_6] [i_6]) == ((var_3 ? 3265036902 : var_18)))))));
        var_28 = var_15;
        arr_28 [i_6] = (((((var_3 != (arr_9 [i_6])) ? (max(-513, 4075582800384475530)) : (var_10 >= var_6)))));
        var_29 &= (8 == 2286406283);
    }
    #pragma endscop
}
