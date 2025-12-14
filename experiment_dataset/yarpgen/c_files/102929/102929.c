/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 ^= (!(((-(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 *= ((~(arr_1 [6])));
            var_14 = (max(var_14, (((!(((18446744073709551609 ? 35139 : 18446744073709551609))))))));

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                var_15 *= (6 / 13378);
                var_16 *= (((arr_4 [i_2 - 1] [i_2 - 3]) || (arr_4 [i_2 - 3] [i_2 - 3])));
                var_17 |= (((var_10 + 1) ? (arr_2 [1] [i_1]) : (arr_7 [i_0])));
            }
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_18 += ((-var_8 - (arr_6 [i_4] [i_0] [i_0])));
                    var_19 += (~var_3);
                }
                var_20 |= 35139;
            }
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                var_21 *= var_2;
                var_22 |= (arr_13 [i_0] [i_1] [i_1] [i_5] [i_5]);
                arr_18 [i_0] [i_0] [i_5] |= (((((arr_16 [6] [6]) ^ var_0)) << (((~var_5) + 46081))));
                var_23 += var_0;
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_22 [i_0] [i_0] |= (arr_1 [i_6]);
            var_24 *= -7;
        }
        var_25 *= (arr_12 [7]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_26 = (max(var_26, (((var_9 * (((3 ? (arr_23 [6] [i_7]) : (arr_24 [i_7] [i_7])))))))));
        var_27 -= ((((13332 ? (arr_24 [12] [i_7]) : 1)) / (arr_25 [i_7] [i_7])));
    }
    #pragma endscop
}
