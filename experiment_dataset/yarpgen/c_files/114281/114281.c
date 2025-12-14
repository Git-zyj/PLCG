/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((var_4 ? ((var_10 ? var_6 : var_10)) : ((min(var_0, var_7))))) + ((-var_6 + ((var_7 ? 1 : var_10))))));
    var_13 = (max(var_13, (((var_7 >= ((min((!var_1), (min(var_5, var_6))))))))));
    var_14 = (max(var_14, ((((max((4629135692362857181 & 31), var_4))) ? (min(11995844756437035413, (((var_1 ? var_0 : 6504))))) : (~var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (arr_3 [i_1] [i_1]);
                    var_16 += (min((arr_2 [i_1] [i_1]), 214));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = (((arr_0 [i_2]) ? ((((((-32767 - 1) ? 0 : var_0))) ? (((((arr_7 [i_0] [i_0] [i_2] [i_3]) && (arr_5 [i_1]))))) : (var_9 % 1))) : (((-(((arr_7 [i_0] [i_1] [i_1] [i_1]) / (arr_10 [i_0] [i_1] [i_2] [i_3]))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((1 || (arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]))) ? (((var_7 && 18446744073709551615) ? ((((arr_2 [i_0] [i_1]) >= 54))) : (-25333 >= var_8))) : ((((61 >> (var_11 - 134))) << ((((max(65535, var_4))) - 65521))))));
                    }
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        var_17 = ((1773000694324527240 ? (max((max((arr_6 [i_1] [i_1]), 25)), ((((arr_14 [i_0] [i_0] [i_2] [i_2]) - var_3))))) : ((((134217727 != (arr_1 [i_0] [i_1 + 4])))))));
                        arr_15 [i_1] [i_2] [i_1] = var_11;
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((((((((arr_10 [i_0] [i_1] [i_2] [i_4]) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2]) : (arr_6 [i_0] [i_1]))) * ((((!(arr_5 [i_1])))))))) ? -var_9 : var_11));
                    }
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        var_18 = (max(((((((14437246731714821405 ? var_0 : 21))) && (((arr_5 [i_1]) && var_0))))), ((18446744073709551615 ? 18446744073709551605 : (((((-32767 - 1) <= (arr_18 [i_1] [i_1] [i_2] [i_5] [i_2] [i_2])))))))));
                        arr_19 [i_1] [i_2] [i_1] [i_1] = arr_4 [i_1 + 2] [i_1] [i_5 - 1];
                        var_19 = ((((((min((arr_2 [i_1] [i_5]), 134217727))) || (~1))) ? (((((124 ? (arr_1 [i_0] [i_0]) : 0))) ? 0 : (arr_7 [i_5 - 2] [i_1] [i_5 - 2] [i_5 - 2]))) : (min((max(var_9, 38107)), var_6))));
                    }
                    var_20 = (max(var_20, ((max((arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [6]), 107)))));
                }
            }
        }
    }
    #pragma endscop
}
