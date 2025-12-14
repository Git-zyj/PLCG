/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_10 = (((min(1, 58830))));
        var_11 = (0 + 4151457879756908286);

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            var_12 |= 84;
            var_13 = (min(var_13, (65535 >= 8760681174576802706)));
            var_14 = (65526 == 65527);
            var_15 = 0;
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_16 |= ((64512 / (33898 * 9)));
            var_17 *= 7;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_18 = (46747 + 65527);
                var_19 = 90;
                var_20 = (((1271982381356268949 <= 1271982381356268943) <= 65526));
                var_21 -= (65535 <= 34357641216);
                var_22 ^= ((112 >= (224 + 43096)));
            }
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                var_23 ^= ((1535 * (-126 ^ 1535)));
                var_24 -= (((31394 + 176) >> (712279927 - 712279897)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_25 = (0 % 28);
                            var_26 = (min(var_26, 1));
                            var_27 = (((34194 && -123) ^ ((0 >> (7367 - 7349)))));
                            var_28 |= (8184 + 8);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_29 ^= 65535;
                            var_30 = (min(var_30, ((((-1 != 65535) ^ 41)))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_31 ^= 254;
            var_32 |= (-1 ^ 20);
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
    {
        var_33 = 34357641190;
        var_34 = 176;
        var_35 = (4093 * 31394);
    }
    for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
    {
        var_36 ^= 13829;
        var_37 = ((((-80 + 2147483647) << (((5 ^ 18142874036780551223) - 18142874036780551218)))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_38 = ((min(225, (max(224, 224)))));
                    var_39 = (65522 >> (((min(23711, 9114045424442885769)) >> (((min(11834, 18142874036780551238)) - 11800)))));
                    var_40 = 18142874036780551223;
                }
            }
        }
    }
    var_41 |= 0;
    #pragma endscop
}
