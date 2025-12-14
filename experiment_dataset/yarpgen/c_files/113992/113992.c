/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~var_6) & (max(var_18, -769711795171608328)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (max(var_21, ((((((max((14301 >= var_14), 14301)))) ^ ((var_3 ? 2925978795668914052 : ((min(-14302, 0))))))))));
        var_22 = ((-((min(var_10, var_12)))));
        var_23 = (max(var_23, ((((+((-1 ? (arr_0 [i_0]) : 255)))) & (arr_0 [4])))));
        arr_2 [19] = (min(var_8, -var_3));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_24 |= (min((((0 > 255) << (((~var_12) + 13617)))), (arr_3 [i_1 - 1])));
        arr_5 [10] [i_1] = ((((((arr_4 [i_1 - 1]) << 0))) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_25 = ((0 <= 1) ? 0 : (1514 < 0));
            var_26 |= (var_10 / 1572599655082966225);
            var_27 = (min(var_27, (((var_7 ? var_5 : var_3)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [8] [8] = (0 ^ -14302);
                        arr_20 [i_4] [i_3 - 1] [4] [i_3] [12] [i_2] = ((((9128896427680249264 ? 33032 : 18446744073709551615)) <= var_19));
                    }
                }
            }
        }
        for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_24 [i_2] [i_2] = (max(((var_0 ? (var_15 % var_6) : (arr_3 [i_6 + 2]))), (5653377053244681650 + 2147483647)));
            arr_25 [8] [i_2] [i_2] = ((7676378530609015413 ? var_17 : (((((var_18 ? 127 : var_13))) ? (min((arr_0 [i_2]), var_11)) : (var_7 || 24)))));
            var_28 ^= ((((((min(65535, 232832561))) ? 2803031876069068874 : var_5)) + (arr_18 [i_6] [1] [1] [1])));
        }
        for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_29 += ((((~(arr_23 [i_7 + 2] [i_7 - 3] [i_7 - 2]))) < ((-(arr_23 [i_7 - 1] [i_7 - 1] [i_7 + 1])))));

            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                var_30 |= (-8191461206582098868 + 8337);
                var_31 = (((((((((var_18 ? var_1 : var_17))) || var_14)))) + ((min(0, 1)))));
                var_32 = ((((max(0, 1))) ? -2368435693858948107 : 138));
            }
        }
        arr_31 [i_2] = (((((~(var_17 << 1)))) ? (1 ^ var_10) : 447090174));
    }
    var_33 = ((min((((57199 ? 14302 : var_8))), -40)));
    #pragma endscop
}
