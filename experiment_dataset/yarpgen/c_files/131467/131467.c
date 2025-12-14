/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max(var_0, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((1720855559786210238 ? ((max(478970711, var_9))) : 16725888513923341371)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_11 [1] [i_0] [13] [i_1 - 1] [16] [i_2]) ? ((1 ? 68 : var_6)) : (((max(1, var_8))))))) ? ((20 ? ((((arr_3 [i_2]) ? var_9 : var_10))) : (arr_8 [i_2] [i_2] [1]))) : (arr_8 [i_2] [i_2] [i_2])));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = 9458608555634801233;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_15 [11] [i_1] [i_5] = ((((((((var_7 ? 2147483647 : 65535))) * (arr_9 [i_1])))) ? (((arr_10 [1] [i_0] [11] [i_1] [i_1 - 1] [i_5]) ? var_5 : 16128)) : (((((var_3 ? var_1 : 3553616415245850877))) ? (min(var_6, (arr_3 [i_5]))) : (arr_9 [18])))));
                    var_16 = (arr_5 [i_5] [i_5]);
                    var_17 |= var_12;

                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_5] [i_6] = (min(((var_2 ? 1 : var_0)), ((~((90 ? 281474976702464 : (arr_9 [i_1])))))));
                        arr_19 [12] [i_1 + 1] [i_1] [i_1] [i_5] [i_6] = (((-5771773348184594947 ? ((~(arr_2 [i_0]))) : (arr_14 [i_1 + 1]))));
                    }
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_1 + 1] [i_1 + 1] [i_7] = (min(var_10, (((-2147483647 - 1) ? (arr_8 [i_0] [20] [i_1 + 1]) : var_0))));
                    arr_24 [i_0] [i_1] = ((((!(((var_12 ? 5971648455560285689 : (-127 - 1)))))) && 75));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_18 -= 101;
                    arr_28 [16] [i_8] = (arr_3 [i_1]);
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_9] [i_1 + 1] [i_9] = ((var_2 ? (((var_1 ^ 2838) ^ (var_0 & var_0))) : (((min(var_2, 112))))));
                    arr_34 [i_0] [i_9] [i_9] = (min(((((!(arr_30 [i_0] [i_1]))) ? var_8 : ((18 ? 11 : 0)))), (var_4 + var_7)));
                }
                var_19 ^= 1;
            }
        }
    }
    var_20 = (((((var_4 ? var_5 : var_8))) + (max((-1202391565 + 1), 5894))));
    #pragma endscop
}
