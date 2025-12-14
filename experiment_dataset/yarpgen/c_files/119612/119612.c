/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 += ((var_5 ? -16 : 5977111604201224422));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = -97;
        arr_3 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = ((min((12452 ^ var_3), ((1 ? 4855642733569092247 : var_7)))));
        var_15 = ((+(max(var_9, (max((arr_2 [i_1]), (arr_5 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((((arr_15 [i_2] [i_2] [i_2 - 1] [i_5] [i_6]) + 2147483647)) << (((-15785 && 1399091631932203974) - 1)))))));
                            var_17 = 3276211931;
                            arr_17 [i_3] [i_5] [i_4] = ((336236076 < (arr_6 [i_4] [i_3])));
                            arr_18 [12] [i_2 + 2] = (arr_10 [1] [i_4] [i_5] [i_6]);
                        }
                    }
                }
            }

            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                var_18 = ((arr_16 [i_7] [i_7] [i_7 + 1] [i_3]) & 255);
                var_19 = (-1 & 4370540426306922344);
                var_20 = (max(var_20, var_5));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_21 = (arr_21 [i_8] [i_2 + 3] [i_2 + 1]);
                var_22 = (!16);
            }
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            arr_27 [i_2] [i_9] = var_4;
            var_23 = (arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]);

            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_24 = (((arr_9 [i_10 + 1] [i_9 + 1] [i_2 - 1]) ? (arr_9 [i_10 - 3] [i_9 + 1] [i_2 + 2]) : (arr_9 [i_10 - 1] [i_9 + 1] [i_2 + 3])));
                            var_25 = ((1082396638 >= (arr_37 [17] [1] [i_10] [i_11] [i_12])));
                        }
                    }
                }
                var_26 = ((!(arr_30 [i_9 + 1] [i_10 - 2] [i_10 - 2])));
            }
            var_27 += 8006687253021277779;
        }
        var_28 -= 0;
    }
    #pragma endscop
}
