/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((var_0 ? -122 : -105)), var_2))) ? ((-(var_10 + -1))) : var_1));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] = (max(126, var_13));
            arr_7 [i_1] = ((((((arr_2 [i_1] [i_1]) ? (arr_2 [i_0] [i_1]) : 1))) ? 503316480 : (~-491693038)));
        }
        var_16 = (arr_4 [i_0] [i_0] [i_0]);
        var_17 = -1117103813820416;
        arr_8 [i_0] = (min((arr_0 [i_0]), (arr_3 [i_0] [i_0] [i_0])));
        arr_9 [i_0] = arr_1 [i_0];
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_18 ^= (arr_11 [i_2]);
                        var_19 *= -18;
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_5] = ((-(((arr_10 [i_2] [i_2]) - var_8))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_20 = var_0;

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_21 = (((!2990120991387372565) > (((!28672) | (((arr_11 [i_3]) / (arr_18 [i_2] [i_2] [i_4] [4] [4] [i_7])))))));
                            arr_27 [i_2] [i_2] [i_2] [i_2] = ((((((arr_12 [i_2] [i_3] [16]) ? (arr_5 [i_4] [i_4] [i_7]) : (1 <= -2611)))) > var_12));
                        }
                        var_22 = (min(var_22, -7483));
                        var_23 = (min(var_23, -101));
                        var_24 = max((arr_0 [i_2]), 1354591044);
                    }
                    var_25 = (max(var_25, ((((arr_24 [i_2] [i_3] [i_4]) < (((arr_0 [i_2]) ? 28687 : ((((arr_12 [14] [i_3] [i_2]) == var_2))))))))));
                    var_26 |= (min((((var_0 != (((arr_3 [i_2] [5] [i_4]) ? (arr_18 [i_2] [i_2] [i_3] [i_3] [i_4] [i_4]) : (arr_23 [i_2])))))), (106398414523066097 | 901507709)));
                }
            }
        }
        var_27 = (min(var_27, ((((arr_25 [i_2]) ? (min((-15 | 6703318417262559554), 18446744073709551615)) : 2147483638)))));
        arr_28 [i_2] [i_2] = (((~(arr_11 [i_2]))));
    }
    #pragma endscop
}
