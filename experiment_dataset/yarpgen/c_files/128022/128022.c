/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_6 * var_16) > var_12));
    var_21 = (!var_9);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = ((~(max((var_4 % var_5), (~var_19)))));
        var_23 = ((((max(var_5, (var_18 * var_16)))) ? (arr_1 [i_0]) : (min(((max(32760, (arr_0 [i_0])))), var_18))));
        var_24 = ((!(0 - 1027747890)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_25 ^= var_5;
            var_26 = (((((var_9 >= (arr_3 [i_1])))) >> (((~141) + 162))));
            arr_7 [i_1] [i_1] = var_8;
            var_27 ^= var_19;
        }
        arr_8 [i_1] = (max((((!(var_18 - var_1)))), (arr_1 [i_1])));
        var_28 -= (arr_0 [i_1]);
        arr_9 [i_1] [2] &= var_4;
        var_29 -= ((~((((max(142, 216))) - (min(var_1, (arr_4 [i_1])))))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_30 = (((((var_10 ? var_19 : (((arr_11 [i_3]) << (var_17 + 1535225302547846356)))))) ? (arr_1 [8]) : (arr_1 [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_31 = -14;
                        var_32 = (((!var_11) ? -22 : 120));
                        arr_18 [i_4] [i_6] [i_6] [i_6] = (((-2147483647 - 1) < -1156809573));
                        var_33 = (arr_16 [i_6]);
                        var_34 = (arr_17 [i_3] [i_3]);
                    }
                }
            }
        }
        var_35 &= ((!((((~var_5) | -615654337)))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_36 = (~150);
            var_37 = (min((((var_7 & (arr_0 [i_3 - 1])))), ((var_19 ^ (arr_0 [i_3 + 2])))));
            var_38 = var_16;
            arr_22 [i_7] = var_11;
            var_39 *= ((-(127 - var_17)));
        }
    }
    var_40 -= (var_11 % var_10);
    #pragma endscop
}
