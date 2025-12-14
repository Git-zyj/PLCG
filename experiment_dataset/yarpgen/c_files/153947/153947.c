/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 ^= 65280;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_19 ^= (((arr_4 [i_0] [i_1]) && 4095));
                    var_20 = (((((-19996 ? -3876760969781388687 : (arr_1 [i_0] [12])))) ? (arr_6 [14] [i_1] [i_0]) : ((var_9 ? 18446744073709551615 : 19996))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_21 -= var_11;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_22 = (max(var_22, (--17247500796569644743)));
                            var_23 = (min(var_23, ((((((arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | (-127 - 1))) < (arr_8 [i_3]))))));
                            var_24 = (arr_17 [1] [1] [14] [17]);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_25 = 0;
            var_26 = (max(var_26, (var_8 <= 2062421647)));
            var_27 = ((17903 >> (((arr_20 [i_3]) - 221))));
        }
        var_28 |= -26441;
    }
    var_29 -= (((((1 ? (var_7 && var_11) : var_11))) ? var_6 : var_8));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            {
                var_30 -= 1;
                var_31 *= (((arr_25 [11] [i_10] [i_10]) <= ((((arr_22 [i_9] [i_10]) ? var_10 : var_8)))));
            }
        }
    }
    #pragma endscop
}
