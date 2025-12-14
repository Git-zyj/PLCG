/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (~-437444394);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = 437444363;
        var_13 = (min((min((arr_0 [i_0]), -53)), (+-1)));
        arr_5 [i_0] [0] = (min((max(((0 ? -53 : -437444391)), (arr_3 [i_0]))), (((18446744073709551586 > (arr_0 [i_0]))))));
    }
    var_14 = (((max(239, -44))));
    var_15 = min((((1169773599757064334 ? var_5 : (min(-53, 437444394))))), (var_5 / var_1));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((+((((-9223372036854775807 - 1) == (arr_6 [i_1])))))))));
        var_17 = 1242861478;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_18 = (min((arr_7 [i_2] [i_2]), ((~(arr_9 [18] [i_2 + 1])))));

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_19 = (30 ^ 7932631997715327378);
            var_20 = (min(var_20, (min(244, 156))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 ^= (((((-(arr_15 [i_2 + 1] [i_2] [i_2])))) ? (-127 - 1) : ((((arr_11 [i_2 + 1]) == (arr_15 [i_2 + 1] [i_2] [i_2 + 1]))))));
            var_22 = (((-9223372036854775807 - 1) ? (-127 - 1) : 1242861462));
            var_23 = (arr_11 [13]);
        }
        arr_17 [i_2] = ((61318 == ((61327 ? (arr_6 [i_2 + 1]) : 2712161777))));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (max((((!(arr_6 [i_5 + 1])))), (max(((-(arr_11 [i_5]))), (arr_18 [i_5])))));
        var_24 = (max(var_24, 18446744073709551595));
    }
    #pragma endscop
}
