/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_11;
    var_20 = (((60613 * 4922) ? ((((~15246096209075160048) ? (~var_14) : (~var_18)))) : ((4923 ? 1 : 18446744073709551615))));
    var_21 = (((1 >= 18446744073709551615) ^ (min((~113), var_14))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [9] [i_0] = ((1 ? (4257978850 + 21463) : ((-(arr_1 [i_0 + 4])))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_0 - 1] = (arr_3 [i_0] [10]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [2] [7] [i_0] = 7;
                            var_22 = (((((((var_12 ? 253 : 16383))) / var_0)) % (((var_7 ? 1 : 71)))));
                            var_23 ^= (min(((-((min(78, 211))))), var_15));
                            var_24 = (min(var_11, (-9223372036854775807 - 1)));
                            var_25 = (arr_0 [i_0]);
                        }
                    }
                }
            }
            var_26 = 127;

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_27 = ((((((!(arr_17 [8] [i_1] [i_1])) || (var_13 * 4951))))));
                var_28 = (min(var_28, (-1 * -44)));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {
                var_29 = (181 * 175);
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_30 ^= ((((((arr_18 [i_0] [3] [i_7] [i_8 - 2]) <= var_0))) % (arr_16 [6] [8])));
                            var_31 = (arr_25 [i_0] [i_1] [i_6] [i_6] [i_7] [i_8 + 1] [i_8]);
                            arr_26 [i_0] [10] [i_6] [i_7] [10] = (((~var_8) < -10706));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {
                arr_29 [i_0] [i_1] [i_1] = ((+(max((3200647864634391559 / 18), -1))));
                var_32 *= (15 >= 60585);
                var_33 = (((4294967289 <= -683759850) ? (((((65530 & (arr_27 [i_0 - 1])))) ? ((((var_13 == (arr_22 [i_0] [i_0] [i_0]))))) : (min(9223372036854775807, (arr_11 [i_0]))))) : (arr_20 [i_0 + 4])));
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            arr_32 [i_10] = max(65535, (5133174619038152558 & 1));
            var_34 -= ((114 ? -42638 : (min((arr_14 [i_0] [i_10] [i_0 + 3]), (arr_14 [i_0] [i_0] [i_0 + 4])))));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_35 = (max((arr_4 [i_0 + 2]), ((24067 << (24067 - 24061)))));
            /* LoopNest 2 */
            for (int i_12 = 4; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        var_36 *= 2215067205;
                        var_37 = ((~(((-112 | -1) / 16))));
                        var_38 -= ((122 ? (-9223372036854775807 - 1) : 249));
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
    {
        arr_45 [2] &= (!-32741);
        var_39 = (min(var_39, ((((((22 ? ((1 ? 49747 : 112)) : var_17))) && (arr_28 [i_14] [i_14] [i_14]))))));
        arr_46 [i_14] = 18446744073709551593;
    }
    #pragma endscop
}
