/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_8 ^ 95) <= ((var_7 ? 106 : var_0)))) ? 1684699511 : ((-var_6 ? (~49344) : ((-29 ? var_10 : var_10))))));
    var_12 = (((((((var_1 ? 195 : var_7)) >> (var_10 - 35191)))) ? (min((max(var_9, -1934640729)), (1 & var_6))) : ((((((var_6 ? 5413827813534372270 : var_9))) ? ((var_6 ? var_10 : 43044)) : -110)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [8] [13] = (((~168610842) ? (arr_0 [15]) : var_8));
        var_13 = var_6;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [1] = (((arr_3 [12] [i_1] [i_0]) && (arr_3 [12] [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = (((((arr_8 [i_2] [i_1] [15] [i_2]) ? (arr_10 [i_4] [0] [1] [0]) : 629214921)) <= var_6));
                            var_15 = (min(var_15, 3221225472));
                            var_16 = ((4292870144 ? (arr_10 [7] [9] [5] [i_0]) : (((-(arr_4 [i_0]))))));
                            arr_13 [i_2] [i_2] [i_2] [9] [i_1] [i_2] = (((~12440956002827864060) >> (var_5 - 6922738300863547196)));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] = (((arr_3 [i_0] [5] [8]) ? ((0 ? (arr_10 [15] [i_0] [i_0] [i_0]) : var_9)) : (var_8 > 3968)));
            arr_17 [9] [13] [9] = ((~((12 ? 4294967276 : 15107))));
            var_17 = (163 * var_6);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [5] = -var_10;
            arr_22 [i_0] [i_0] = ((~(arr_14 [i_6])));
            var_18 = ((((arr_14 [i_6]) ? var_8 : var_7)));
        }
    }
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        arr_26 [11] [11] = ((var_10 ? -0 : var_5));
        var_19 &= (6795776708654523487 > -99);
        arr_27 [i_7] = ((((var_4 * 4027697422038115528) ? (((arr_24 [12]) / (arr_24 [5]))) : 1)));
        var_20 = -4607533863871430364;
    }
    #pragma endscop
}
