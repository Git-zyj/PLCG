/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (min((0 <= var_16), 6141641520455007975));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 -= arr_1 [i_0];
        var_22 = 3560948774586334549;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_23 = (-(((((max(32767, (arr_4 [i_2] [i_2] [i_1])))) > (((arr_5 [i_2]) ? 1 : 1))))));
            arr_6 [i_1] |= (((arr_2 [i_1] [i_2]) ? (arr_1 [i_1]) : (arr_3 [i_1])));
        }
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            var_24 = 1;
            var_25 = (((((1 ? 7854769220070080798 : 0)) % ((((arr_1 [i_1]) - (arr_4 [i_1] [i_3] [i_1])))))));

            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_26 ^= (arr_12 [i_1] [i_3] [i_1] [i_4] [i_5] [i_5]);
                    var_27 *= (min((((arr_12 [i_1] [i_1] [i_4] [i_4 - 1] [i_5] [i_5]) ? (arr_12 [i_3] [i_3] [i_4] [i_4 - 1] [i_4] [i_4]) : (arr_12 [i_1] [i_1] [i_1] [i_4 - 1] [i_4] [i_5]))), (((arr_12 [i_3] [i_4] [i_4] [i_4 - 1] [i_4 + 3] [i_4]) ? (arr_12 [i_4] [i_4] [i_4] [i_4 + 2] [i_4] [i_5]) : (arr_12 [i_3] [i_4] [i_4] [i_4 + 2] [i_4] [i_4])))));
                    var_28 = (arr_13 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]);
                    var_29 += (arr_8 [i_1] [i_4] [i_5]);
                }
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    var_30 ^= max(((max(140, 121))), ((min((0 / 6), -4560025123960610172))));
                    var_31 = (max(var_31, -3878185485921538810));
                    var_32 = 1;
                    var_33 = (min(var_33, 1193242499375192597));
                }
                arr_19 [i_1] [i_1] [i_3 + 1] [i_4 + 1] = (min((max(((140 ? (arr_0 [i_1]) : var_3)), (arr_4 [i_3] [i_3] [i_1]))), ((max((arr_11 [i_4 + 1] [i_4] [i_4]), (arr_11 [i_4 + 1] [i_4 + 1] [i_4]))))));
                var_34 = ((~((var_6 % (arr_13 [i_4 + 1] [i_4 + 3] [i_3 - 1] [i_3 + 1] [i_1] [i_1])))));
                var_35 = 25;
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_24 [i_7] = ((~(arr_14 [i_8] [i_8 - 2] [i_7] [i_7 - 2])));
                            var_36 = (arr_12 [i_1] [i_3] [i_3 + 1] [i_4 + 3] [i_7] [i_8 + 1]);
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                var_37 &= (((((arr_0 [i_1]) ? (arr_0 [i_1]) : 12998140386958331800)) / (((((7704825407516252591 ? var_4 : 1))) ? (((~(arr_26 [i_1])))) : 38878))));

                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    var_38 = (((7854769220070080778 || -14777) * (max((arr_5 [i_3]), (arr_5 [i_1])))));
                    var_39 &= var_18;
                }
            }
        }
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            var_40 |= (max(27115, 173));
            var_41 = 4033;
            var_42 = 115;
            var_43 += (min(1, ((min(var_1, (arr_4 [i_1] [i_1] [i_1]))))));
        }
        var_44 *= (max((arr_7 [i_1]), (arr_7 [i_1])));
        var_45 = -1;
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_46 += ((7006538864056387318 ? -2713 : (arr_3 [i_12])));
        var_47 = (max((18444 ^ 66), ((28726 ? (((arr_8 [i_12] [i_12] [i_12]) ? 27115 : (arr_30 [i_12] [i_12] [i_12] [i_12]))) : var_10))));
    }
    #pragma endscop
}
