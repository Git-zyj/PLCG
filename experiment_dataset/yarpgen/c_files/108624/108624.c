/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((5505925203080715909 ? (((var_14 ? var_14 : var_4))) : (max(((min(4916, 32767))), ((79 ? 5119891688590549958 : 7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = var_16;
        var_22 = 6771864792728080553;
        var_23 = 11444434675430853913;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_24 &= 7;
            arr_8 [i_1] [i_1] = ((max(9223372036854775807, 252)) - ((((232 ? 65508 : 89)))));
            var_25 = 1152921229728940032;
        }
        var_26 |= (max((arr_4 [i_1] [i_1] [0]), ((var_0 ? (arr_4 [i_1] [4] [6]) : (arr_4 [i_1] [i_1] [6])))));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_27 ^= var_0;
        arr_12 [i_3] [i_3] = ((((min(6771864792728080553, -7480354707274971885))) ? -29 : (2878817548205524413 == 1)));

        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            var_28 = -671671139;
            var_29 = (max(((~(arr_0 [i_3 + 2]))), ((var_11 ? 31959 : var_12))));
            var_30 = (min(var_30, ((((((14865562334187940208 ? -32767 : -19909))) || (((1 ? ((min(1900242780, 0))) : ((var_18 ? 9223372036854775807 : 6771864792728080553))))))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_31 = (max(var_31, (~var_19)));
            arr_17 [i_3] [i_3] [i_5] = ((3386466586 ? 255 : 0));
        }
    }
    #pragma endscop
}
