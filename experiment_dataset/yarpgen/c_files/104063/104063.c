/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = ((((min(79, 1069455995))) ? (((((min(1069455995, 1069455995))) > (arr_1 [i_0 - 3] [i_1])))) : 3225511301));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (arr_14 [i_1] [i_1] [i_1] [i_4]);
                                arr_15 [i_2] = ((((((arr_8 [i_3] [i_3 - 2] [i_4] [i_0 - 2]) / (arr_8 [i_1] [i_3 + 1] [i_2] [i_0 - 3])))) >= ((65535 ? 1069455995 : 9118376283450900735))));
                            }
                        }
                    }
                }
            }
        }
        var_12 = (arr_4 [i_0] [3] [5]);
        var_13 = (((((1344733979394522332 ? 65 : -1424417169))) ? ((((arr_5 [i_0] [i_0] [i_0] [1]) | (arr_0 [i_0 - 4])))) : 281406257233920));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_14 = (((((((min(var_5, (arr_8 [i_6] [i_5] [1] [i_0])))) ? (!17102010094315029293) : -801058490))) ? (((var_7 ? var_0 : (arr_10 [i_6] [i_6] [i_5] [i_5] [i_0])))) : ((((((var_5 ? var_6 : var_8)) > (min(var_9, 17102010094315029284))))))));
                    var_15 = var_5;
                }
            }
        }
        var_16 = ((~((~(~127)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_17 = 740549504;
        var_18 = ((((min((arr_22 [i_7]), 3225511319))) ? 0 : 252));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_19 = ((-3325591327782796335 ? (arr_24 [i_8 - 2]) : var_4));
        var_20 = (((!252) << (-3325591327782796335 + 3325591327782796344)));
        arr_26 [i_8] = 9132439034008939162;
        arr_27 [i_8] = ((((((-2147483647 - 1) / (arr_24 [i_8])))) ? var_3 : (3225511281 || var_8)));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_21 = (-8807025894419554936 * 0);
        var_22 = (~(arr_23 [i_9 + 2]));

        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            arr_33 [i_9 + 1] = (!var_8);
            var_23 = 10203269054633442469;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_24 = (~0);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 17;i_13 += 1)
                {
                    {
                        var_25 = -105;
                        var_26 = ((var_2 ? var_0 : var_5));
                        var_27 = (1424417169 != (-9223372036854775807 - 1));
                    }
                }
            }
        }
        var_28 = ((15541853802577136785 ? 10203269054633442469 : 4024147485));
    }
    var_29 = -127;
    #pragma endscop
}
