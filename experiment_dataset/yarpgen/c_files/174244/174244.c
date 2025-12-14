/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_8));
    var_13 = (((!((min(8301139975630046255, -8301139975630046256))))));
    var_14 = -26472;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [i_1] = (min((((max(-8301139975630046255, 175)) - var_2)), ((min(511, -26472)))));
                        var_15 = 4294967290;
                        var_16 = ((((((-9223372036854775807 - 1) == 0))) == ((60145 - ((max(26498, 116)))))));
                        var_17 = (min(var_17, ((((-9223372036854775807 - 1) ^ ((31744 | (var_6 ^ 9223372036854775782))))))));
                    }
                }
            }
        }
        var_18 = 1;
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_19 |= (max(((max((2012 / 254), 31763))), (min((((511 ? 93 : var_1))), 8301139975630046256))));
        var_20 = ((-8301139975630046237 == (((max(169, 132))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_21 = (max(var_21, ((min((~-1358756328301037044), -10757)))));
                    var_22 ^= (((193 - 9223372036854775782) && ((((max(var_3, -123))) == ((max(44, 41983)))))));
                    var_23 |= ((-7133959246708575176 % ((-(max(3468, var_10))))));
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        arr_19 [i_7] &= 108;
        var_24 = (min(var_24, 3290792839796578690));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_24 [0] = ((176 ? ((75276484 ? 48 : -2149954089153626230)) : 32));

        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            var_25 = 6;
            var_26 = 35332;
            var_27 = -8699;
        }
        arr_27 [i_8] [i_8] = (110 + var_1);
    }
    #pragma endscop
}
