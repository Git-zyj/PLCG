/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+((var_1 ? (~var_1) : 9223372036854775807))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = var_10;
        var_17 = (((var_7 - var_5) + var_0));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (!var_14)));
                        arr_9 [i_1] [i_2] = (var_10 ^ var_13);
                        var_19 = (min(var_19, ((((((var_7 ? (var_12 == 1119528719) : (min(var_11, var_1))))) ? ((((var_7 | var_7) <= (((var_8 ? var_13 : -47)))))) : (((!(var_5 <= var_10)))))))));
                        arr_10 [i_0] [i_1] [i_0] = (arr_4 [i_0]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_14 [i_4] = ((~(arr_13 [i_4])));

        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_20 = (((!(var_11 || var_13))) ? var_5 : (((9223372036854775802 && var_12) ? (min(var_5, -9223372036854775787)) : var_1)));
            arr_17 [i_5] [i_5] = (arr_16 [i_5] [i_5] [i_5]);
            arr_18 [i_5] [i_5] = var_14;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_21 = (((~var_4) <= (((arr_20 [i_6]) ? (arr_20 [i_4]) : (arr_15 [i_6] [i_6] [i_4])))));
            arr_21 [i_4] = -9223372036854775793;
            arr_22 [i_4] = ((-9223372036854775787 < (-9223372036854775807 - 1)));
        }
    }
    var_22 = (min(((var_4 ? ((var_3 ? var_1 : 9223372036854775807)) : ((9223372036854775807 << (var_0 - 3304277295))))), var_6));
    #pragma endscop
}
