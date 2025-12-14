/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [5] = (((~701413903) ? ((4241877764 ? ((max(212, (arr_3 [i_0] [i_1] [i_0])))) : (-22395 * 12473759153309419465))) : ((max((701413903 - 2625481128), (-2147483647 - 1))))));
                var_19 = 2147483647;
            }
        }
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_20 = (((((((max(3593553398, (arr_7 [i_2])))) ? ((max((arr_6 [i_2]), -8567))) : 2147483647))) >= 2710160225));
        arr_8 [i_2] [i_2] = (((((arr_7 [i_2]) ? 2625481128 : (arr_6 [i_2]))) % (-30355 != 2147483647)));
        var_21 = (max(((max(-110, (-9223372036854775807 - 1)))), ((max(4060827781, (~-22399))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = 7542;
        arr_14 [i_3] [i_3] = (((arr_10 [i_3 - 2]) | 237));

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_17 [i_3] = 22382;
            var_22 = (min(var_22, 32014));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_23 = ((215 <= (32022 != 3593553376)));
            arr_20 [13] [i_5] [i_5] |= 0;
            arr_21 [i_3 - 2] [i_5] = (((arr_6 [i_3 + 1]) ? (arr_10 [i_3 - 2]) : (arr_19 [i_3 - 2])));
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_24 = (((-32765 | 22420) ? -8327 : (arr_12 [i_6 - 2])));
        arr_25 [i_6] |= (((arr_12 [i_6]) ? (129 - 1199703003) : (arr_7 [i_6 + 1])));
        var_25 = 22420;
        var_26 ^= (((((arr_6 [i_6]) ? 37445 : 65525)) != 40692));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        arr_29 [i_7] = ((0 ? ((1 ? 53399 : (-32767 - 1))) : 149));
        arr_30 [i_7] = 32758;
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            {
                arr_35 [20] [i_9] [i_9] = ((!((((((701413920 ? 0 : 701413904))) ? 126 : 2224321895)))));
                var_27 = ((!((min((arr_11 [i_8 + 1]), ((max(-22390, 0))))))));
            }
        }
    }
    #pragma endscop
}
