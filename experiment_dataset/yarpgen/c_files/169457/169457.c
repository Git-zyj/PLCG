/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(1943552300, 8388607)), ((((1943552293 ? 31 : -30820))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((((var_1 ? -255 : ((min(315184451, 1943552312)))))) ? ((((-20376 ? -1943552301 : 17645)))) : var_11));
                    var_14 = (min(((268435455 << (((-1 + 8) - 6)))), (!-1943552321)));
                    var_15 = (max(var_15, ((((arr_4 [6] [6]) % 16445945468008322332)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_14 [i_0] [i_3] [i_4] = 15;
                        var_16 = (max(var_16, (((-var_3 || ((max(10902573846417029153, 23040))))))));
                    }
                }
            }
        }
        var_17 = ((~((255 ? -1 : ((127 >> (188 - 170)))))));
        arr_15 [i_0] = (min((((-((var_10 ? var_9 : var_6))))), (max(((var_7 >> (-1943552321 + 1943552375))), -1))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_18 = (((arr_11 [i_6] [i_6] [i_6]) ? ((~(arr_7 [i_6]))) : (((-1 ? (arr_1 [i_6] [i_6]) : -256)))));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_19 = (min(var_19, (((1943552311 ? (arr_11 [i_7] [i_7] [i_7]) : var_10)))));
            arr_21 [i_7] = ((-(arr_8 [i_6] [i_6] [i_6])));
            var_20 = ((((-1 ? 1 : 1))) ? 10902573846417029153 : 1);
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_21 = (min(var_21, ((((arr_20 [i_8] [i_8] [i_8]) ? (arr_18 [i_8] [i_8]) : var_10)))));

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_26 [i_9] [1] [4] [i_6] = (((arr_20 [i_6] [i_6] [i_6]) ? ((36 ? 1 : 1)) : ((var_7 ? var_3 : var_6))));
                var_22 = ((36 ? ((18446744073709551615 ? 211 : 7544170227292522463)) : 7));
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] = (((((-(arr_13 [12] [2] [i_10] [i_10] [0] [i_10])))) ? (((var_0 < (arr_13 [i_10] [6] [i_10] [i_10] [i_10] [i_10])))) : (((arr_13 [i_10] [14] [i_10] [i_10] [i_10] [i_10]) ? (arr_13 [10] [10] [i_10] [i_10] [i_10] [i_10]) : (arr_13 [i_10] [6] [i_10] [i_10] [6] [i_10])))));
        arr_32 [i_10] = -1;
        var_23 = (((1003 & -1) ? (((min(var_3, var_6)) ? (1248953751 | 1) : var_11)) : ((max(((8191 ? var_6 : 1)), ((var_9 << (((-1943552313 + 1943552344) - 18)))))))));
    }
    var_24 += var_6;
    #pragma endscop
}
