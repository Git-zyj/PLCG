/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((3771155741 ? var_3 : (((var_1 ? var_10 : var_4)))));
    var_15 = var_12;
    var_16 *= (max(((~(~7978))), var_12));
    var_17 = (var_8 >= var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (-(((arr_3 [i_0 + 2] [i_1 - 1] [i_1 - 1]) / (arr_3 [i_0 - 2] [i_1 - 1] [i_1 - 1]))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 + 4] = ((~((((max((arr_6 [i_1] [7] [14]), (arr_1 [i_0]))) == ((((arr_2 [i_0]) & (arr_3 [i_2] [i_2] [i_1 + 1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = (((arr_6 [i_0] [i_0] [i_2]) ? ((((((arr_3 [7] [i_1] [i_1]) ? 12881 : (arr_7 [i_0 + 3] [i_0 + 3] [15] [i_0 + 3])))) ? ((((arr_2 [i_0]) ? (arr_9 [13] [i_1] [13] [7] [13]) : 2097024))) : var_3)) : -1227899446));
                                arr_14 [i_4 + 1] [10] [10] [10] [10] = var_8;
                                var_18 -= (arr_10 [i_0 - 2] [i_0 + 3] [i_0 + 4] [i_0 - 1] [i_0 + 3] [i_0 - 1]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_19 = ((-((~(arr_11 [i_7] [13])))));
                                var_20 = ((((arr_1 [i_5]) - (arr_19 [i_6]))));
                                var_21 = (max(var_21, (((((var_2 ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0]) ? 30 : 2831737538)) : var_13)) != 61424)))));
                                var_22 *= 1;
                            }
                        }
                    }
                    var_23 = (((arr_2 [i_0]) ? (min((arr_11 [i_0 + 1] [i_0]), (((var_7 ? (arr_9 [i_0] [i_1 - 1] [i_1 - 1] [5] [i_5]) : var_4))))) : (arr_3 [i_0] [i_1] [1])));
                }
                arr_22 [i_0 - 2] = (((arr_10 [i_0 + 1] [i_1] [2] [7] [i_0 + 1] [i_0]) ? ((2147483648 / (arr_19 [i_1 + 1]))) : (arr_2 [i_0 + 2])));
                var_24 |= 0;
                var_25 = (((arr_6 [i_0] [i_0] [i_0]) >= ((((!(((21867 ? (arr_4 [i_0] [i_0] [i_0]) : var_2)))))))));
            }
        }
    }
    #pragma endscop
}
