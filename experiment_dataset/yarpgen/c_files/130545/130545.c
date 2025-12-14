/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((5482 ? ((min(1, -23))) : 1048575)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, 61519));
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4 - 1] = (arr_6 [i_0] [i_0] [i_0] [i_0 + 4]);
                            }
                        }
                    }
                    var_15 = (min(var_15, (57769 + -74)));
                }
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_1] [i_1] = ((((!var_1) | -115)) <= 9);
                        var_16 = ((((max((-2147483647 - 1), 8544013558676898842))) || ((max((arr_7 [6] [i_1] [i_5 - 2]), (arr_7 [i_5] [i_1] [i_5 + 1]))))));
                        arr_23 [i_1] [i_1] = ((74 + ((0 - ((min(92, (arr_17 [i_1] [1] [1]))))))));
                        var_17 = (arr_3 [i_0] [21]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_18 = ((~((~(-2147483647 - 1)))));
                        var_19 = max(32767, 6529619727903585687);
                        arr_26 [13] [i_1 + 1] [i_5 - 4] [i_1] = ((-(-127 - 1)));
                        var_20 &= var_0;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        arr_30 [i_0] [0] [i_1] [i_0 + 1] [i_0] = (1 / 17667173153728352582);
                        var_21 = (((32 + var_0) >> (65522 - 65513)));
                    }
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        var_22 = (max((((~(1 || 1639661841)))), (arr_10 [i_0])));
                        var_23 |= (!139637976727552);
                        var_24 ^= ((!(-2147483647 - 1)));
                        var_25 -= (arr_0 [i_1] [i_1]);
                    }
                    var_26 = (((~1) ? var_2 : ((~(15360 ^ -828838653)))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_27 = (-(arr_31 [10]));
                    var_28 = (((arr_29 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_29 [i_0 + 2] [i_1 - 1] [1] [5] [i_1 + 1] [i_10]) : var_3));
                    var_29 &= ((~(var_12 | 54620)));
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_30 &= (((((-27 & 104) != (min(828838656, -16596)))) ? (arr_28 [i_0] [i_0] [i_1] [11]) : ((min(-24361, 145)))));
                    var_31 |= (((arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_0]) ^ (123 * 150)));
                    arr_38 [i_1] [i_1] [i_11] = (min(6529619727903585687, 30442));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_32 = var_5;
                            var_33 = (max(var_33, (((((((1219725964819994079 | 1595536781) ? (((-2147483647 - 1) & 3308669203039998934)) : (arr_7 [i_0] [0] [0])))) ? 63 : ((-828838661 ? 255 : (arr_28 [14] [i_1] [i_12] [14]))))))));
                            arr_43 [i_0] [i_1] [i_12] [i_13] = var_11;
                            var_34 = (min(var_34, ((((((max(var_12, 1)))) / var_5)))));
                        }
                    }
                }
            }
        }
    }
    var_35 = var_5;
    #pragma endscop
}
