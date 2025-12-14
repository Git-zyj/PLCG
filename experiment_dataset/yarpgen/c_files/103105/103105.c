/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = (((((-(arr_3 [i_1 + 1] [i_1 + 1] [1]))) + 2147483647)) >> ((+(((arr_6 [i_0] [i_0] [i_0]) / 3932319652)))));
                        var_19 = (max((min((arr_4 [i_0] [i_0]), var_11)), (arr_4 [i_0] [i_3])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_15 [i_4] = (((var_1 || var_12) || (((3932319652 >> (362647644 - 362647641))))));
        var_20 = 362647644;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_21 = ((~(((((var_4 + 2147483647) << (((var_2 + 145) - 17)))) / var_2))));
                        var_22 = ((!(arr_12 [i_4] [i_6])));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_28 [0] |= (3932319652 / 362647644);
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_16 [i_8] [i_4]) ? (362647667 || 27106) : ((121 ? (((min(var_15, (arr_22 [i_4] [i_7]))))) : 3932319654))));
                            var_23 = var_2;
                            arr_30 [11] [1] [i_6] [i_6] [i_8] = (((((3932319652 ? (arr_25 [i_6 + 2] [i_6 + 1]) : (arr_14 [i_6 - 3] [i_6 + 1])))) || ((((arr_25 [i_6 - 1] [i_6 - 1]) ? 27106 : (arr_25 [i_6 - 4] [i_6 - 4]))))));
                            arr_31 [i_4] [0] [i_6] [i_7] [i_4] = ((-(-27103 / 3932319651)));
                        }
                        arr_32 [i_4] [i_4] [15] [i_4] [12] = var_10;
                    }
                }
            }
        }
        var_24 = ((!((((((arr_27 [i_4] [4] [i_4] [i_4] [i_4]) + 2147483647)) << (((((arr_27 [i_4] [i_4] [i_4] [i_4] [i_4]) + 18931)) - 3)))))));
    }
    var_25 = var_14;
    var_26 = ((((((min(var_10, var_13))) + 2147483647)) << (var_3 - 9)));
    #pragma endscop
}
