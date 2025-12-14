/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = ((var_7 ? var_11 : (!var_6)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = ((((min((arr_5 [i_0] [i_0]), ((var_1 ? 65531 : (arr_0 [i_0])))))) ? var_2 : ((var_5 >> (arr_7 [i_1] [i_1] [i_0])))));
            var_21 += 0;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_22 = (arr_1 [i_0] [i_0]);
            var_23 &= ((var_6 ? var_11 : (arr_0 [i_2])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_24 += ((2625 >= (min((-32112 - 23), ((-55 ? 49489 : 7129664658098039236))))));
            arr_13 [i_0] = (arr_0 [i_0]);
        }
        var_25 = ((arr_5 [i_0] [i_0]) * ((min(55, -90))));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_26 += var_11;
            arr_17 [i_0] [i_4] [i_4] = (!var_17);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_22 [i_6] [i_5] [i_5] [i_0] = (((-8 ? (arr_21 [i_5]) : (!var_1))));
                var_27 -= var_10;
            }
            arr_23 [i_0] = (min(2624, 2904));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_28 ^= (min(((min((min((arr_3 [i_0] [i_0]), var_4)), (max((arr_27 [i_0] [i_0] [i_0]), 1568))))), (((arr_21 [i_7]) ? (arr_12 [i_7] [i_7] [i_0]) : var_8))));
            arr_28 [i_0] = (arr_7 [i_0] [i_0] [i_0]);
        }
        arr_29 [i_0] = (((arr_8 [i_0]) ? (arr_14 [i_0] [i_0] [i_0]) : (((arr_7 [i_0] [i_0] [i_0]) + (arr_7 [i_0] [i_0] [i_0])))));
    }
    var_29 = var_11;
    #pragma endscop
}
