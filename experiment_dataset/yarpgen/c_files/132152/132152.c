/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [1] [i_1] [i_1] = ((1 ? (1642079028 ^ 4294967295) : 3084112917));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] = (((!65535) ? 1 : ((4064359231 % ((var_15 ? 44 : var_1))))));
                                var_16 = (((((((max(0, 1))) ? var_2 : (((arr_1 [i_1] [1]) ? 13 : (-9223372036854775807 - 1)))))) ^ (((((1642079028 ? -1 : 405824799))) ? var_6 : (252 / var_7)))));
                                var_17 = (max(var_17, (((((246 ? 0 : 1)) << (((((((var_2 ? 0 : var_7))) ? (arr_5 [i_2] [i_3]) : (~12))) - 4294967232)))))));
                                var_18 = ((~(((arr_2 [i_4] [i_2]) ? 1519711932 : (arr_2 [i_0] [i_0])))));
                                arr_17 [i_1] [i_1] = 2135035821;
                            }
                        }
                    }
                }
                var_19 = (((1 ? 3700007580 : 246)));
            }
        }
    }
    var_20 = ((~((var_11 ? ((max(226, 5284968671433287137))) : (18446744073709551615 - var_10)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_21 = ((((var_9 ? ((30 ? 1 : var_4)) : 3)) / 1));
                var_22 = (max(-23, -25298));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_23 = ((-(((!(arr_25 [i_7]))))));
                    arr_33 [i_7] [i_7] = 3084112917;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_24 = (min(var_24, (((~(arr_34 [i_10]))))));
                    arr_41 [i_10] [i_11] [i_11] [i_11] = 6805;
                    arr_42 [i_11] [i_11] [i_11] [1] = ((((((-3794 ? 3 : 111)) < 1)) ? 18446744073709551615 : (max(4100417200, 6))));

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_45 [i_11] = ((var_10 ? 194550096 : (((arr_44 [i_10] [i_10] [16] [i_11] [i_13] [i_13]) ^ 3422812619999413750))));
                        arr_46 [i_11] [i_11] [14] [i_11] = var_12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
