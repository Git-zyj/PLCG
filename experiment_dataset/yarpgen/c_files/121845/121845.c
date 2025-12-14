/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(2052707802, (((!(((-2052707803 ? (arr_3 [i_0]) : 2052707788))))))));
        arr_4 [i_0] = 49219;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (max(var_16, var_11));
            var_17 = max(35185, var_11);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 = (max(var_18, (((var_8 * (max(((var_5 % (arr_6 [18]))), ((-2052707802 ? var_3 : var_4)))))))));
            var_19 ^= (((((max((arr_7 [i_0]), -31217)))) ? var_5 : (var_10 && 49219)));

            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_20 *= var_11;
                arr_16 [i_0] [i_0] [i_3] [i_0] = (min(((((max((arr_15 [i_0] [i_2] [i_3]), var_8))) ? ((min(1023581730, var_8))) : (15166 ^ var_4))), ((max((min((arr_15 [i_0] [i_2] [i_3]), -2052707803)), var_13)))));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
            {
                arr_19 [i_0] = (arr_14 [i_0] [1] [5] [i_0]);
                arr_20 [i_0] [4] [i_0 - 2] &= var_5;
            }
            arr_21 [i_0] = var_7;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_21 = (max(var_21, var_2));
            arr_24 [i_0] [i_0] = var_5;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_22 = (((-32764 + 2147483647) >> (268435455 - 268435430)));
                    var_23 += -2052707819;
                    var_24 &= 23346;
                    var_25 += (((arr_18 [i_7 - 1] [i_7 - 1] [i_0 + 1] [i_0 - 2]) && (arr_18 [i_7 - 1] [i_7 - 1] [i_0 + 1] [i_0 - 2])));
                    arr_31 [1] [i_6] [10] [i_5] [i_0] &= (((-2147483647 - 1) & -var_14));
                }
                arr_32 [i_0] [i_0] [i_0] [i_0] = (((((var_6 ? 10603218477027144545 : (arr_14 [i_0] [i_5] [i_0] [0])))) ? (((arr_13 [i_6]) / (arr_26 [i_0] [i_0] [i_0 + 1]))) : (-2147483647 - 1)));
                var_26 = (max(var_26, ((((((arr_1 [4] [4]) || 15203092204244565188)) && (var_3 || var_3))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_27 ^= (((arr_8 [i_9]) | 7843525596682407079));
                            var_28 = (max(var_28, 5520671477193114069));
                        }
                    }
                }
            }
        }
    }
    var_29 |= (-11 && 10);
    var_30 = ((var_1 + (((((min(var_9, var_3)))) + (-8016030036256156577 + var_8)))));
    var_31 = ((15418 && ((-10 || ((min(var_4, var_0)))))));
    #pragma endscop
}
