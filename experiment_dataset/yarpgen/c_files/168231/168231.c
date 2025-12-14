/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (min((((var_2 | 20301) / ((var_8 ? var_17 : var_7)))), ((((((var_17 ? var_9 : 20301))) && var_16)))));
    var_20 = 1;
    var_21 = (min(var_21, ((((!-11795) == (var_8 ^ var_16))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (5385764039017934770 ? 127 : (min((var_7 | 20301), (!1250048762))));
        var_23 = (max(var_23, ((min(-28704, 1)))));
        var_24 ^= -1152921487426977792;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = ((~(((arr_3 [i_1]) - var_15))));
        arr_5 [i_1] [i_1] &= (~1);
        var_25 = ((192 << (-1 + 6)));
        var_26 = (((((~(arr_1 [i_1])))) ? ((~(arr_1 [i_1]))) : (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_27 ^= ((arr_12 [i_2] [i_3] [i_4]) * (((1125899839733760 & 204) / (arr_11 [i_2] [i_2] [i_4] [i_4]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_28 -= (!-14803);
                                var_29 &= ((159 ? 1016568372 : 1));
                            }
                        }
                    }
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((18445618173869817856 ? 709967553050329041 : 74));
                }
            }
        }
        var_30 -= ((!(((~(arr_13 [i_2]))))));

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_31 = (((((((arr_14 [i_2]) ? var_13 : var_0))) ? var_6 : (((((arr_12 [i_2] [i_2] [i_7]) != var_7)))))) != 2687);
            var_32 = (-20302 + -1360230784);

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_28 [i_2] [i_7] [i_7] [i_8] = (arr_24 [i_7] [i_7] [i_7]);
                var_33 = (min((!5), (arr_17 [i_2] [i_7] [i_8] [i_8] [i_8])));
                var_34 = ((~(arr_23 [i_7])));
                var_35 = 63;
            }
            var_36 = var_3;
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_31 [i_2] [i_2] = -5746416504465003395;
            arr_32 [i_2] = (((3918380590 > -11140) ? (((((!(arr_16 [i_2] [i_2] [i_2])))))) : (((arr_6 [i_2]) & (arr_10 [i_2] [i_2])))));
            var_37 = ((((min(4, 6073740120360916213))) ? ((min((arr_12 [i_2] [i_2] [i_9]), (max((arr_16 [i_2] [i_2] [i_9]), (arr_29 [i_2] [1])))))) : (((arr_8 [i_2] [i_9] [i_9]) ? var_7 : (arr_0 [i_2] [i_9])))));
        }
        arr_33 [i_2] |= var_6;
        var_38 |= (((~55960) ? (223 || 15360) : (min(-28834, 12252273938722078503))));
    }
    #pragma endscop
}
