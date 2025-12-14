/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = -176494103;
        var_19 = (min(var_19, (0 & 9223372036854775807)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_20 = (~0);
            var_21 = ((9223372036854775807 << (5912289243917994462 - 5912289243917994462)));
            var_22 += 5912289243917994462;
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_23 |= 8257536;
            var_24 = -9223372036854775807;
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_25 = (max(var_25, -1708309394));
            var_26 = (~0);
            var_27 = (min(var_27, (32744 | 13041)));
        }
        var_28 = ((-7792149646044098778 & (-6939 | -85)));

        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                var_29 -= (12534454829791557154 * 0);
                var_30 = (min(var_30, (7792149646044098778 ^ -30)));
            }
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                var_31 = -1;
                var_32 += 212;
                var_33 = (141 - 1);
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    {
                        var_34 = (max(var_34, (~-1151732719)));
                        var_35 ^= (!166);
                    }
                }
            }
            var_36 = (-41 ^ 1);
        }
    }
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_37 += (~18446744073709551615);

        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            var_38 = (((64032 % 811144044) & -1844947570));
            var_39 = 1151732718;
        }
        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                var_40 = -765409862;
                var_41 = (min(var_41, ((((1 + 65523) % -6)))));
            }
            var_42 &= (((1708309395 && 3813487418504792536) || 7792149646044098778));
            var_43 = 1;
        }
        var_44 = (1 & -1774335789);
        var_45 ^= (((1 * 15) * 27144));
    }
    for (int i_14 = 4; i_14 < 11;i_14 += 1)
    {
        var_46 = 1;
        var_47 ^= 99;
    }
    var_48 = 6748139947060767508;
    #pragma endscop
}
