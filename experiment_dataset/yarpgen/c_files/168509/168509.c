/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((!((min(1451168240221322865, -11)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] [i_0] = ((!(arr_8 [i_3] [i_1] [i_3 + 1] [i_3] [19] [i_2])));
                        var_14 = (max((max(-11, -177974403804676974)), -var_4));
                        var_15 = (min(((min(var_1, 177974403804676985))), (min((arr_10 [i_0] [i_2] [i_0] [i_3 + 1]), var_11))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                {
                    var_16 = (max((~9223372036854775807), ((~(min(9223372036854775807, 18446744073709551615))))));
                    var_17 &= (~(~344723875282097005));
                }
            }
        }
        var_18 -= (max(13768754942149979134, 5643459652317411306));
        var_19 |= max(-var_4, -13768754942149979134);
        arr_19 [i_0] [i_0] = max((min(-1, -177974403804676960)), -60);
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_20 &= (max((max((arr_8 [i_6] [i_6] [7] [15] [i_6] [i_6 - 1]), (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_6]))), (max(var_6, var_4))));
        arr_23 [i_6] = max((((!(arr_6 [i_6 + 2] [i_6 + 2])))), (arr_8 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] [i_6]));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_21 = (min(var_21, -var_4));
            var_22 += -var_6;
            var_23 = (min(var_23, (~2154550401738330776)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_24 = (min(var_24, (~3114518168630344734)));
            var_25 = (!var_8);
        }
    }
    #pragma endscop
}
