/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 *= ((+(max((arr_1 [i_0]), var_9))));
        var_15 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (min(var_16, var_1));
            var_17 = ((!((min((arr_1 [i_0]), (arr_1 [i_1]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                var_18 |= (((((var_5 ? 5947163559398844413 : 6691))) ? (arr_2 [i_1] [i_1]) : (arr_6 [1])));
                arr_8 [i_1] [16] [i_2] = ((~((9223372036854775796 ? 9223372036854775796 : (arr_4 [14])))));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_19 = (-10 + 18446744073709551605);
                var_20 ^= -5;
            }
            var_21 = -var_1;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_13 [i_4] [i_4] = (arr_7 [i_0] [i_0] [i_0]);
            arr_14 [i_0] [i_4] [i_4] = (((var_5 ? -44 : 30)));
            var_22 = (arr_2 [11] [i_0]);
            var_23 = 9223372036854775796;
            var_24 = (max(var_24, ((((arr_1 [i_0]) ? (arr_12 [i_0] [i_4] [i_4]) : (arr_2 [i_0] [i_4]))))));
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_25 = ((0 ? 9223372036854775787 : -14840));
            arr_17 [i_5] = (19 % 16577);
        }
    }
    var_26 = (max(var_26, ((min((((((4294967295 ? var_8 : 29))) ? 4294967294 : -23)), var_0)))));
    #pragma endscop
}
