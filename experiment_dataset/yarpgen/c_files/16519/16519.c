/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-((((max(18446744073709551605, var_4))) ? var_7 : -27247)));
    var_11 = (((~2023520250) & ((-(!27246)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((!((min(-27246, (((!(arr_1 [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                var_13 = 5822;
                var_14 = (((arr_0 [i_1 - 1]) ? (arr_7 [i_1 + 2] [i_1 - 1] [i_2 - 1]) : (arr_2 [i_1] [i_2])));
                var_15 *= (arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 1]);
                var_16 = var_7;
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_17 = 216;
                var_18 = (min(var_18, ((((arr_2 [i_1 + 2] [i_1 - 1]) ? 0 : (arr_2 [i_1 - 2] [i_1 + 2]))))));
                var_19 ^= (-33 * 5817);
            }
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    var_20 = -5810;
                    var_21 = ((-(((arr_11 [i_5 + 1]) + 5023123563656964110))));
                    var_22 ^= ((((((arr_0 [i_5]) >= var_8))) > 7));
                    arr_19 [i_5] [i_4] [i_0] = ((var_3 ? var_8 : 219));
                }
                var_23 = (82 ^ var_3);
                var_24 = var_3;
            }
            var_25 = (arr_4 [10] [7] [i_1 + 2]);
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_23 [19] = ((var_7 ? (((~var_9) ? -3133870671744894425 : var_9)) : 10));
        arr_24 [i_6] [i_6] = -8266535968122890490;
    }
    var_26 = var_2;
    var_27 += (max(((~(max(var_0, var_7)))), -var_1));
    #pragma endscop
}
