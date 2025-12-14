/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((var_8 - 1), 32019)))));
    var_15 = (min(var_15, var_3));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((arr_1 [i_0]) || var_4))));
        var_16 |= (arr_3 [i_0]);
        var_17 ^= var_5;
        var_18 = var_0;
        arr_5 [i_0] = 4193280;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = 1329813930817723683;
        var_19 = (min(var_19, var_4));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_13 [i_1] [i_1] = -4193292;
            var_20 = (arr_2 [i_1]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_21 = (min((((!18446744073709551606) ? 0 : 2935763550108848531)), 18));
            var_22 |= min(1947296167821327557, var_8);
            arr_16 [i_1] [i_1] [i_1] = var_2;

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_23 = (min((arr_14 [i_1] [i_3]), -4193251));
                arr_19 [10] [16] [i_1] = (var_10 >> 16);
                arr_20 [i_1] [i_3] [i_3] [i_4] = (arr_10 [10] [i_3] [i_4]);
                arr_21 [i_1] [i_1] [3] [i_1] = (max((!-4193281), (max((max((-32767 - 1), -2018151964)), 38))));
            }
            arr_22 [i_1] [i_3] [i_3] = 1842686785;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, (-2147483647 - 1)));
                            var_25 *= 32753;
                            arr_31 [i_1] [i_1] [i_8] = max((!var_10), (arr_28 [i_7 - 1] [i_1] [i_6] [i_7] [i_7 - 1] [18]));
                        }
                    }
                }
            }
            var_26 = var_5;
        }
        arr_32 [i_1] = (min((max((max(14264660587285564640, 2147483647)), -4193280)), ((min(2251799813685244, (arr_29 [i_1] [i_1] [i_1] [i_1] [1]))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_27 = ((251658240 - ((((arr_34 [i_9]) ? 188 : var_2)))));
        arr_35 [i_9 + 1] [1] |= ((!(arr_33 [i_9 - 1])));
    }
    #pragma endscop
}
