/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = var_6;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((96 - (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (var_9 < 96);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = (~-118722363);
                        var_19 &= var_6;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_20 = (96 == 3367970662603825630);
                            var_21 *= ((((((arr_1 [i_2] [i_4]) << (var_15 - 13006774361825896880)))) ? (((arr_1 [i_0] [i_1]) & (arr_1 [i_0] [i_2]))) : var_13));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] = -var_13;
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = ((((((arr_18 [i_0] [i_3]) ? (arr_17 [i_0] [i_0] [i_1] [i_0]) : 0))) ? (arr_17 [i_5] [i_5] [i_5] [i_5]) : 1782046066));
                            var_22 = (arr_15 [i_3] [i_2] [i_0] [i_0] [i_0]);
                            arr_21 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (((((arr_5 [i_0]) && var_4)) ? -96 : (var_1 <= 80)));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_32 [i_8] [i_8] [i_6] [i_6] = (((arr_27 [i_6] [i_6]) ? (arr_23 [i_8]) : ((4294967295 ? 528854047 : (arr_14 [i_8] [i_7])))));

                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_23 = (arr_27 [i_6] [i_7 - 1]);
                        var_24 = (~96);
                    }
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        var_25 ^= ((-3367970662603825630 ? 1 : (arr_15 [i_7 + 1] [i_7 + 1] [i_8] [i_8] [i_10 + 1])));
                        arr_39 [i_6] [i_6 + 1] [i_6] = (((arr_7 [i_6] [i_6 + 1]) && (arr_29 [i_6] [i_6 + 1] [i_6 + 1])));
                        var_26 += (var_8 * (arr_1 [i_6 + 1] [i_8]));
                    }
                    arr_40 [i_6 + 1] [i_6 + 1] [i_7] [i_8] = (~-58);
                }
            }
        }
        var_27 = 1710871582;
    }
    #pragma endscop
}
