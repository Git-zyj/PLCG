/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0 - 1]);

        for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1 + 3] = -53182;
            var_15 = (arr_4 [i_1 + 2] [i_1]);
            var_16 &= ((~-6256307211906198142) | (max((arr_3 [i_0 - 1] [i_0 - 3] [i_1 + 4]), (arr_3 [i_0] [i_0 + 1] [i_1 - 1]))));
            var_17 = (min(var_17, (((((((((arr_0 [i_0]) || (arr_0 [i_0 - 2]))) ? (15360 || 12) : ((max(53175, 1)))))) ? var_4 : 53185)))));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_18 = (arr_0 [i_5]);
                            var_19 -= var_7;
                            var_20 = var_14;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_21 = ((~(max(3918388125, (arr_8 [i_0 - 4] [i_7])))));
                        var_22 *= (((12331 >= 2494640876) ? (((arr_12 [i_0 - 4] [i_0 - 1] [i_0]) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_2 + 2]) : (arr_12 [i_0 - 3] [i_7] [i_7]))) : (arr_1 [i_0 - 3])));
                        arr_23 [i_0 + 1] [i_2] = min((((12343 ? var_0 : 45544))), (min(((max(204, 0))), (2096 * 4294967295))));
                    }
                }
            }
            var_23 ^= (min(29369, 1));
        }
        var_24 = (min(var_6, (min((2530613569 / 9223372036854775807), (((1 ? var_2 : var_1)))))));
    }
    for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = (((((min(var_10, (arr_12 [i_8 - 1] [i_8] [i_8])))) ? var_7 : (arr_6 [i_8] [8]))));
        var_25 *= 1446480838711055916;
        arr_29 [i_8] = (var_6 ? ((var_9 >> ((((1 ? (arr_15 [i_8] [i_8]) : (arr_12 [i_8] [i_8] [i_8]))) - 1891041253)))) : ((((arr_24 [i_8]) && var_11))));
        arr_30 [i_8] [i_8 - 1] = (((arr_10 [i_8] [i_8] [0]) ? ((8769690735330184209 ? var_13 : (arr_10 [15] [i_8 - 4] [i_8 - 4]))) : ((~(arr_10 [i_8] [i_8 + 1] [i_8 - 4])))));
        var_26 = (max(((((((arr_4 [i_8] [15]) ? (arr_12 [i_8] [i_8] [i_8]) : (arr_8 [i_8] [i_8])))) ? (((((arr_22 [i_8 - 3] [i_8] [i_8 - 3] [i_8]) + 2147483647)) << (((arr_17 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8 - 3] [i_8 - 4]) - 1552220117)))) : 126)), (arr_26 [i_8])));
    }
    var_27 = (min(2146959360, var_14));
    var_28 = ((!((min(944386865, 99)))));
    #pragma endscop
}
