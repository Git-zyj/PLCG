/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_19 = ((((((217 >= 40) ^ (arr_1 [i_0 + 2])))) ? (max((arr_1 [i_0 + 2]), 247)) : (((((189 ? 10965 : 40)))))));
        arr_2 [i_0] = (((((((var_12 << (var_9 - 7927550015351594730)))) ? ((var_11 ? 31 : var_14)) : (arr_0 [i_0])))) * ((min(5981, -22872))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_20 = ((((max((arr_4 [i_1]), (max((arr_4 [i_1]), (arr_3 [i_1] [i_1])))))) * (min(((((arr_3 [i_1] [i_1]) / (arr_5 [i_1])))), (((arr_5 [i_1]) ? 229 : var_8))))));
        var_21 = ((min((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1]))));
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_22 = (min(var_22, var_1));
        arr_8 [i_2] [i_2] = (((((arr_5 [i_2]) >= (arr_5 [i_2]))) ? ((min((arr_5 [i_2]), -27572))) : (arr_5 [i_2])));
        var_23 = (((arr_1 [i_2]) || ((((arr_4 [i_2]) - (arr_4 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (((((var_2 >= (arr_9 [i_3])))) < 373353892991100483));
        arr_12 [i_3] = arr_10 [i_3];
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_24 &= ((+((((((arr_9 [i_4]) ? (arr_13 [i_4]) : -31803))) ? (arr_14 [i_4]) : (var_8 - var_12)))));
        arr_16 [i_4] [i_4] = var_0;
        arr_17 [i_4] [i_4] &= (144115188075855872 + 49152);
        arr_18 [i_4] = (~14339288924555525943);
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_25 = ((0 ? 49152 : 18027));
                        var_26 = ((var_13 ? ((~(-29 | 65525))) : ((max((var_7 < var_13), var_18)))));
                        var_27 = (min(-29, ((((35 ? -3734514999639135335 : 242)) % (min(144115188075855872, (arr_27 [i_5] [i_5] [i_5] [i_5])))))));
                        var_28 = (((((((0 ^ (arr_15 [i_8])))) ? (((((arr_15 [i_6]) == (arr_19 [i_5]))))) : (max(var_12, 13629289195994702216)))) ^ ((-((var_7 ? var_10 : var_5))))));
                    }
                    var_29 = (~-742229315);
                }
            }
        }
        arr_28 [i_5] [i_5] = var_9;
    }
    var_30 = (min(((var_13 * (14662 <= var_1))), var_6));

    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_31 = ((((((1 ^ 27679) ^ var_16))) ? (arr_29 [i_9] [i_9]) : ((54570 ? 1 : var_10))));
            arr_35 [i_9] = (arr_31 [i_9 - 1]);
        }
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        var_32 ^= 63;
                        var_33 = ((var_18 ? (((((min(var_12, (arr_41 [i_9] [i_12] [i_11] [i_11] [i_9]))))) - (((var_8 + 9223372036854775807) << (((arr_31 [i_13]) - 1494038173277077478)))))) : -var_16));
                        var_34 -= (arr_37 [i_9 - 1] [i_9 - 1] [i_12]);
                        var_35 = ((((((arr_32 [i_9] [i_9 + 1]) & (arr_38 [i_9 - 1] [i_9])))) ? (~var_8) : (((max(31, 224))))));
                    }
                }
            }
        }
    }
    var_36 = 10;
    #pragma endscop
}
