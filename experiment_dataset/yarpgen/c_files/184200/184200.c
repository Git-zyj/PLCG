/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(var_5, (((~3468120730) & (((52962 ? 41 : -37)))))));
    var_14 += (min((max(var_9, 13)), ((var_10 ? (-37 * -40) : (-14 / 119239263)))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 *= ((119239259 && ((max(-37, ((1 >> (110 - 98))))))));
        var_16 = (max((119239243 <= 13), (max(72057594037927935, 18446744073709551597))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (119239252 < -4175728044);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 = (((65529 == 65528) == (-51 - 187514572)));
                    arr_10 [1] [i_2] [i_1] |= ((-51 ^ ((-5828947714605077219 ? 12002814209003511003 : 119239263))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_20 [i_4] [i_5] = (63 - 119239263);
                        var_19 += ((((15612059907827070224 >> (-102 + 126))) != (13 / 34398)));
                        var_20 = (((((4294967295 ? 2800709272 : -40))) ? (((-127 - 1) ? 49933 : 18446744073709551588)) : 5832266103161604100));
                        var_21 = 87;
                        var_22 = (~7135835358377134328);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_23 = (((((-5832266103161604096 ? 27 : 17239))) ? -5832266103161604123 : (1 == 74)));
                        var_24 ^= 0;
                    }
                }
            }
        }
        var_25 -= 1;
    }
    #pragma endscop
}
