/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, (((var_6 < (((min(var_18, 65507)))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_20 ^= (1071644672 | (255 << 0));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_21 -= (26707 - 32741);
                var_22 ^= ((-(arr_3 [i_0] [i_0] [i_1 - 1])));
                var_23 = ((2147483647 >> (((-127 - 1) + 156))));
                arr_8 [i_0] &= -32767;
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = (min(var_24, (((((min((min(1071644659, var_11)), ((1071644674 ? -32751 : 18))))) && 17523466567680)))));
            var_25 += var_13;
            var_26 = (min(86, (arr_10 [i_3])));
            arr_11 [i_3] [i_3] = (((((255 ? 1 : 46384)) * var_3)));
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_27 += (-10261 != -1071644674);
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_28 = (min((~125018387), ((var_7 / (min(1, var_6))))));
                            var_29 &= (min(((((min(var_10, var_1))) ? var_2 : (var_15 || 138))), (arr_19 [i_0] [i_4] [i_0] [i_6] [i_7])));
                            arr_24 [i_7] [i_4] [i_5] [i_6] [i_7] = ((!((((-32767 - 1) ? var_2 : 20795)))));
                        }
                    }
                }
            }
            arr_25 [i_0] = (((1071644684 % 3) >> (((arr_23 [2] [i_4] [i_4] [2] [2]) - 96))));
        }
        var_30 += 6419452724966746802;
        arr_26 [i_0] [i_0] = (var_5 && (((var_9 ? ((8191 ? 9234 : 12939015608061601791)) : (((min(9656, -30815))))))));
    }

    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        var_31 += (((((32753 & ((min(var_13, -1)))))) ? ((((arr_27 [i_8 + 3]) ? -34 : 4140003308))) : (((var_0 <= 1) ? (arr_29 [i_8]) : var_17))));
        var_32 = ((min(((1071644649 ? var_2 : (arr_29 [i_8]))), ((min(-6419452724966746802, var_8))))));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            arr_37 [i_9] = ((((~(arr_36 [i_9 - 1] [i_10 - 1] [i_10 + 1]))) == (arr_28 [i_9] [i_10])));
            var_33 *= ((((min((arr_31 [i_9 - 1] [i_9 - 1]), (arr_31 [7] [i_10 + 1])))) ? ((min(127, var_1))) : (((arr_32 [i_9 - 1]) - 13627))));
            var_34 ^= ((255 ? 1 : 18446744073709551611));
            arr_38 [i_9 - 1] [i_10] = (min(var_5, ((~((max(-21220, (-32767 - 1))))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_35 |= (((arr_34 [i_9] [i_9 - 1]) ? var_2 : -var_5));
            arr_42 [i_11] = (((((4221484368476742893 ? 32767 : (arr_28 [i_9] [i_9])))) > 12939015608061601791));
            var_36 += (((arr_39 [18]) <= 32767));
            var_37 ^= var_13;
        }
        var_38 = ((((!(arr_36 [i_9] [i_9] [i_9 - 1]))) || ((((arr_36 [i_9] [i_9] [i_9 - 1]) | var_8)))));
    }
    #pragma endscop
}
