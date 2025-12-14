/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (var_13 | var_8);

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_19 = ((~(arr_3 [i_2] [i_1] [i_0])));
                    arr_8 [i_2 - 1] [i_0] [i_0] [10] = var_17;
                }
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_20 -= (~3141822615002811568);
                        arr_15 [i_0] [i_0] [11] [i_4] = (((!var_10) << (((min(var_15, (min(var_14, var_17)))) + 754607021978169385))));
                        var_21 = (max(var_21, (((-((((126 % 8184) != var_5))))))));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_3] |= -2014980213157024022;
                        var_22 *= (arr_10 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_0] = max(var_5, 8163);
                                var_23 -= (arr_16 [i_7] [i_7] [15] [i_0] [i_0] [i_0]);
                                arr_27 [i_7] [i_0] [i_3] [i_1] [i_0] [i_0] = ((~(((((var_0 ? var_14 : var_4))) / 18446744073709551615))));
                            }
                        }
                    }
                    arr_28 [i_0] [i_0] [4] = ((1347828512 ? var_8 : (arr_13 [i_0] [i_3 + 1] [i_3 - 1] [i_3])));
                }
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_24 -= (((arr_9 [i_8]) ? 5561159679929141917 : (((((arr_21 [2] [i_8] [2] [i_8 - 2] [i_8 - 1] [i_8 - 1]) >= ((((arr_2 [i_1] [i_8]) ? 226197490 : var_11)))))))));
                    var_25 = ((-6566668161835325885 ? (4 > 3313992807916087002) : var_4));
                    var_26 = ((((var_3 ? 3313992807916087002 : -23293)) ^ var_4));
                    var_27 = (max(var_27, ((min(3313992807916087014, 9223372036854775807)))));
                }
                arr_31 [i_0] = (~var_14);
                arr_32 [19] [i_0] [19] = var_2;
            }
        }
    }
    #pragma endscop
}
