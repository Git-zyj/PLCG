/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((1587698524 >= (min(26993, var_8)))))) <= 1909085425));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((!(~var_9)));
        var_16 += ((!(arr_3 [i_0])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_17 |= ((max((min(0, 46)), ((117 ? var_10 : (arr_6 [i_1] [i_1]))))) != ((((41 == (arr_5 [i_1]))))));
        var_18 |= (((!210) * (!var_13)));
        var_19 = 2251731094208512;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_20 = 0;
        var_21 = (((((var_5 << (((arr_7 [i_2 + 1] [i_2]) + 63))))) % ((-(min(var_8, (arr_8 [i_2])))))));
        var_22 = var_12;
        var_23 = var_10;

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_24 = (((((var_11 - (arr_8 [i_2])))) ? ((-(arr_8 [i_2]))) : (((arr_8 [i_2]) - (arr_8 [i_2])))));
            var_25 = (min(var_25, (arr_4 [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                var_26 = 38543;
                var_27 = (max(var_27, 1168453307));
            }
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                var_28 = var_4;
                var_29 = ((((((arr_19 [i_2 + 1] [i_2] [i_4] [i_6 + 3]) * var_5))) ? (((arr_5 [i_4]) ? var_6 : (arr_19 [i_4 - 1] [i_4] [15] [i_4]))) : 8323072));
                var_30 = (((-1168453307 <= 128) ? ((2044 ? (arr_8 [i_2]) : 18444492342615343104)) : var_2));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_31 = (((arr_18 [i_2 - 1]) / (arr_18 [i_2 + 2])));
                var_32 &= (((var_12 + 9223372036854775807) >> (arr_10 [i_4 - 1] [i_2 + 1])));
                var_33 |= ((((var_6 <= (arr_6 [i_2 - 1] [i_7]))) ? ((75741716 ? -2082085866 : (arr_14 [i_2] [i_7]))) : (((var_6 ? (arr_24 [i_7] [i_4] [i_2]) : var_2)))));
                var_34 = 23;
                var_35 = (((var_11 & 2298334017) & ((var_3 ? 55198 : var_5))));
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_36 = (((-8548895785775196820 & var_7) ? (arr_15 [i_2] [i_2]) : 2385881870));
                            var_37 = (arr_20 [i_2] [i_2] [i_2] [i_10]);
                        }
                    }
                }

                for (int i_11 = 4; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    var_38 = ((((((arr_18 [12]) & (arr_34 [i_2] [i_2] [i_2] [i_2])))) ? var_5 : (((((arr_26 [i_8] [i_8] [i_8]) <= 1536))))));
                    var_39 = (((arr_15 [i_2 - 1] [i_2]) - (arr_15 [i_2 + 2] [i_2])));
                }
                for (int i_12 = 4; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    var_40 = (min(var_40, (((-((27011 ? 5610 : -67)))))));
                    var_41 += (~(var_8 * 0));
                }
                var_42 &= (arr_25 [i_4 - 2] [i_8]);
                var_43 = (min(var_43, (((~var_8) ? (!var_2) : (-117 != 1168453307)))));
            }
            var_44 = (((arr_26 [i_2] [i_4 - 2] [i_4 + 1]) ? (arr_26 [i_2] [i_4 - 2] [i_4]) : (arr_26 [i_2] [i_4 - 2] [i_4 - 2])));
        }
    }
    #pragma endscop
}
