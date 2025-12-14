/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_1;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 ^= (((((((((arr_0 [i_0]) | 5613269188406439409))) || (arr_1 [i_0 + 2] [i_0 + 2]))))) > 243);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0 + 1] [i_1] &= ((!(((3 ? 18446744073709551605 : 4431)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_16 [i_0 - 1] [i_4] [i_0 - 1] [i_3] [1] = ((var_7 ? 1816626987 : var_16));
                            var_21 = ((((-5613269188406439409 + 9223372036854775807) >> (253 - 215))));
                            var_22 = ((252 ? 2629408465873059360 : (arr_7 [i_0 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_20 [i_0] [10] = ((-((4294967285 ? (min((arr_17 [i_5]), 3)) : 65535))));
            var_23 = (~-17297);
            var_24 = -2629408465873059361;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_25 = (1 ? 11 : (arr_2 [i_0 + 2]));
            arr_23 [i_0] = (((arr_21 [i_0 - 1] [i_0 + 2] [i_0 - 1]) ? ((51517 ? -307388701 : var_11)) : var_5));
            var_26 = (arr_21 [i_0 + 1] [i_0 + 1] [i_6]);
        }
        var_27 *= (max(-var_2, (((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - (arr_10 [i_0 - 1])))));
        var_28 = 4194176;
        var_29 = (max(var_29, ((min((((arr_5 [i_0 + 1]) ? var_0 : 3108422783)), ((((max(var_5, 480462041))) / -var_8)))))));
    }
    #pragma endscop
}
