/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((((var_9 ? 1 : var_0)) / ((var_7 ? -3081 : var_2))))) ? var_3 : ((((max(0, 32))) ? (~var_8) : 32)))))));
    var_14 = ((var_5 ? var_5 : (max(((253 ? 232 : 21)), (~768)))));
    var_15 = (min(32, (((1186536056 ? 31744 : var_5)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = var_6;
        var_17 = (max(var_17, (((60836 ? 19985 : -12)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, (((-var_7 ? var_0 : ((4 ? 32767 : -19986)))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 *= (((!22) && 215));
                        var_20 = (((((1 ? var_11 : -19988))) ? 60836 : (((arr_1 [0] [i_2]) ? -19984 : -19980))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_21 *= (((arr_2 [i_1] [i_1]) ? 1 : (arr_2 [i_3] [i_1])));
                            var_22 = (min(var_22, 19980));
                            var_23 = (arr_0 [i_2]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_24 *= (12 >> (-31747 + 31756));

                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            arr_17 [i_1] [9] [i_1] [i_1] [i_1] [i_1] = (((arr_12 [9] [i_2] [i_7 - 2] [i_7 - 4] [i_1] [i_7 + 1]) < 1));
                            var_25 = 126;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_26 = 25415;
                            arr_21 [6] [6] [i_1] [9] [i_8] = 2147483648;
                            var_27 = (var_8 == 32);
                            var_28 += ((12665 + (arr_5 [i_1])));
                            var_29 = (arr_6 [i_1] [i_1] [i_1]);
                        }
                        var_30 = (min(var_30, ((2147483648 | (((arr_5 [i_2]) ? (arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_6] [i_3]) : var_3))))));
                    }
                    for (int i_9 = 4; i_9 < 16;i_9 += 1)
                    {
                        var_31 = (min(var_31, (((((((arr_23 [7] [i_3] [i_1] [i_1]) ? -32766 : (arr_19 [i_9] [i_2] [16] [i_3] [i_2] [i_2] [i_1])))) ? (arr_16 [i_9] [i_9 - 3] [i_9 - 3] [1] [i_9 - 2] [i_1]) : (arr_16 [i_9 - 3] [i_9] [i_9 - 3] [i_9] [5] [i_9 - 3]))))));
                        var_32 = ((!(!1)));
                    }
                }
            }
        }
        var_33 = (+-19992);
        var_34 = (arr_23 [0] [i_1] [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            {
                var_35 = ((480091342 ? (min((min((-9223372036854775807 - 1), (arr_24 [i_11]))), (126 & var_4))) : ((max((4700 && 96), -var_10)))));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_36 = (!-32766);
                            var_37 *= (~4691);
                            var_38 += -1;
                            var_39 *= ((12687 | (min(61264, -148862926))));
                            var_40 = (((min((max(var_9, -12)), (arr_27 [i_13])))) ? (((-7 + -22285) ? (arr_33 [i_10] [i_10] [i_10] [i_10]) : 4)) : ((((1 << (((arr_24 [i_13]) + 17187)))) / (((arr_31 [i_12]) << (351335522 - 351335510))))));
                        }
                    }
                }
                var_41 -= (((0 ? ((246 >> (((arr_26 [i_10] [i_10]) - 1263531146628204581)))) : (arr_33 [i_11] [i_11] [i_11] [i_11]))));
            }
        }
    }
    #pragma endscop
}
