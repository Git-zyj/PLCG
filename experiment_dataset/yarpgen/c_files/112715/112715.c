/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~0);
    var_14 = min(15, var_0);
    var_15 -= var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
            {
                var_16 = (!85);
                var_17 = var_0;
            }
            for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_1] [i_3] [i_3] = -15;
                var_18 = 9;
            }
            var_19 |= ((-5 | (arr_10 [i_1])));
            var_20 += 40;
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_21 = (56 > -1);

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_22 = min(((min(-1, (arr_18 [16] [i_4] [i_5] [16])))), var_5);
                var_23 -= ((~((-((min(-1, var_10)))))));
                arr_20 [i_5] [10] [i_5] [i_5] |= ((45 ? -7 : (!-16)));
                var_24 ^= ((-1 ? ((~(((arr_1 [i_0]) ? 77 : var_2)))) : 103));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {
                var_25 -= (((arr_8 [i_0] [5]) ? var_10 : ((max(51, 0)))));

                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    var_26 = (max(var_26, (((((min(-27, (var_11 + var_12)))) ? ((((min((arr_7 [i_0] [23] [i_6] [i_7]), (arr_17 [i_6] [12] [24] [i_7])))) + (((arr_1 [i_4]) ? (arr_8 [i_0] [i_4]) : (arr_7 [i_4] [22] [i_4] [i_4]))))) : var_12)))));
                    var_27 = ((((((((arr_27 [18] [i_0] [i_4] [i_0] [i_0] [i_0]) + 2147483647)) >> (!var_6)))) ? (arr_17 [i_4] [i_7 - 1] [i_7] [i_7 + 2]) : ((min((arr_26 [i_4] [i_4] [i_4] [24] [i_6] [i_7 - 1]), 3)))));
                    arr_29 [i_0] [i_4] [i_6] [i_6] = max((min((arr_24 [i_7 - 1]), (((91 < (arr_21 [i_0])))))), -9);
                    var_28 = (min(((-(arr_7 [i_7] [i_7] [i_7 + 3] [i_7]))), (~var_7)));
                    arr_30 [i_7 - 1] [i_4] [i_4] [i_0] = var_10;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_29 = ((~(36 ^ var_8)));
                    var_30 = arr_12 [12] [i_8];
                    arr_34 [i_4] [i_6] = (min(((var_11 ? ((var_12 | (arr_25 [i_0] [i_0] [i_4] [i_6] [i_8] [15]))) : ((~(arr_10 [i_0]))))), ((1 >> (var_8 + 91)))));
                }
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
            {
                var_31 = (min(var_31, -108));
                arr_37 [i_0] [i_4] [i_4] = ((-((-(arr_24 [i_0])))));
                var_32 = ((+(((arr_14 [i_9] [i_9] [i_9]) + (arr_26 [i_9] [i_4] [i_4] [i_4] [i_0] [i_0])))));
            }
        }
        var_33 = arr_16 [24] [i_0] [24];
        arr_38 [i_0] = 98;
        arr_39 [14] = ((((((((-76 + 2147483647) << (var_12 - 58))) + ((var_9 ? (arr_24 [4]) : (arr_32 [i_0] [i_0] [12] [i_0])))))) && (arr_19 [14])));
    }
    for (int i_10 = 2; i_10 < 15;i_10 += 1)
    {
        var_34 = (max(var_34, ((((~0) % -83)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    var_35 = (min(var_35, (((((((arr_28 [i_10 - 2]) || var_7))) | (((((min(17, var_12))) && (((0 ? -4 : 40)))))))))));
                    arr_50 [i_10] [i_11] [i_11] = ((+((+(((arr_23 [4] [i_12] [i_12]) ? (arr_15 [i_11] [24]) : var_5))))));
                }
            }
        }
    }
    #pragma endscop
}
