/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 -= (min(var_17, (((var_9 + (arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_21 = ((-var_15 + (((((var_6 ? var_9 : var_1))) ? -59 : var_3))));
        arr_3 [6] [i_0 - 2] = ((!((((arr_2 [i_0 + 1]) ? -41 : var_16)))));
        var_22 |= ((((((var_2 ? var_4 : 102))) ? var_8 : (((min(var_3, (arr_0 [i_0] [i_0]))))))));
        var_23 = (1 / -65);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_24 = ((((!(arr_5 [i_1]))) ? var_14 : ((~(arr_5 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_25 = (arr_2 [2]);
                                arr_21 [i_4] [i_2] [i_3] [i_1] [i_5] = ((var_7 / ((-(arr_17 [i_1] [i_2] [1] [i_1] [i_3] [i_5] [i_4])))));
                            }
                        }
                    }
                    var_26 *= ((((min((((!(arr_1 [i_3])))), (min(-8932781250055737053, (arr_19 [i_1] [2] [i_1] [i_3] [i_3] [i_1])))))) ? (((-1 || (~var_15)))) : (min((9 / var_11), var_14))));
                }
            }
        }
        var_27 = (arr_9 [i_1] [i_1]);
        var_28 ^= (((((!((min(var_13, (arr_2 [i_1]))))))) / -var_3));
        var_29 = ((((arr_16 [i_1]) ? var_11 : (arr_16 [i_1]))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_28 [i_7] [16] = (((max((var_17 && 1), (1 == 8))) ? (((min(7, -1325188380)) / (arr_26 [i_7 - 1] [i_7]))) : var_10));
            var_30 = (((arr_27 [i_7 + 1] [i_7 - 1]) ? (arr_25 [i_7 + 1] [i_7 - 1]) : var_1));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            var_31 = (min(var_31, (((-27 ? (~var_10) : (((arr_24 [i_8]) ? (arr_27 [i_6] [i_8]) : var_14)))))));
            var_32 = ((arr_25 [i_8 - 1] [i_8 - 1]) ? ((((!(arr_30 [i_6] [i_6] [i_6]))))) : ((var_9 ? 11372643155873371332 : 10110817750763901784)));
            arr_33 [i_6] [i_8] [i_8] = (((((var_0 ? var_18 : var_0))) ? (((arr_22 [i_6]) ? var_11 : 21)) : ((var_5 ? var_16 : var_16))));
        }
        var_33 = ((((min(var_4, (!var_1)))) ? ((var_1 ? var_18 : ((var_6 % (arr_25 [i_6] [i_6]))))) : (arr_22 [i_6])));
    }
    var_34 = ((-((32305 ? -1253249172 : ((var_0 ? 152 : 2147483647))))));
    var_35 = (((((var_7 * (!-24)))) + ((-(max(134, var_19))))));
    var_36 = (var_9 + var_17);
    #pragma endscop
}
