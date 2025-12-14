/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((((1 / 1) ? -9223372036854775807 : -50)));
                arr_6 [i_0] [i_1] [i_1] = (((!9980) - (((arr_0 [i_1 - 1] [i_1 - 2]) ? 9963 : (arr_0 [i_1 - 2] [i_1 - 2])))));
                var_16 &= ((!(arr_5 [14])));
            }
        }
    }
    var_17 = min((!var_10), (var_9 && var_9));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = (!-101);
        arr_10 [i_2] [i_2] = var_5;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        var_19 = (min(var_19, (!var_3)));
                        arr_21 [i_3] [i_4] [i_5] = ((+((((arr_11 [i_6] [i_3]) || var_1)))));
                        var_20 = (~var_6);
                        var_21 = 65280;
                        var_22 |= (+(((-9223372036854775807 + 9223372036854775807) << (var_6 + 571109133472445323))));
                    }
                }
            }
        }
        var_23 &= (((arr_16 [i_3] [i_3] [i_3] [i_3]) ^ (arr_16 [i_3] [i_3] [i_3] [i_3])));
        arr_22 [i_3] = ((arr_18 [6] [i_3]) | ((var_7 ? (arr_20 [i_3] [i_3]) : (arr_14 [i_3] [i_3]))));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_24 = (((((var_13 ? var_1 : 55026))) || 0));
                        var_25 += (((!(arr_11 [i_7] [i_7]))));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_40 [i_7] [i_8] [i_7] [i_9] [i_7] [i_11] = (arr_30 [i_7] [i_7] [i_8]);
                            arr_41 [i_9] [i_9] = -23697;
                        }
                        var_26 = ((4294967282 ? 56 : 9980));
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_27 = ((+(min(14, (((arr_31 [i_7] [i_8] [i_9] [i_13]) ? -1366078057 : 7639658599861579905))))));
                        arr_44 [i_8] [i_9] [i_8] [i_8] [i_9] [i_7] = var_3;
                        arr_45 [i_7] [i_7] [i_9] [i_9] [i_8] = ((((((-(-10311 * -10311))) + 2147483647)) << (((var_3 + 1794328001) - 20))));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            var_28 = (~var_6);
                            var_29 = (min(var_29, (arr_31 [i_9 - 1] [i_8] [i_8] [i_9 - 1])));
                            var_30 &= var_3;
                        }
                        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_9] [i_8] [i_9 + 1] [i_9 + 1] [i_15] = (min((~var_8), (max((min(2723101042, 9223372036854775807)), var_13))));
                            var_31 = ((((max(48602, var_5))) * (((-(arr_33 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1]))))));
                        }
                        arr_51 [i_7] [i_9] [i_9] [i_13] = (min((min((arr_34 [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 1]), ((var_8 << (((((arr_37 [i_7] [i_8]) + 577133890)) - 13)))))), (--65535)));
                    }
                    var_32 |= min((min(((107 ? (arr_35 [i_7] [i_7] [i_7]) : (arr_36 [i_9] [i_8] [i_9 + 1] [i_9 - 1] [i_8] [i_8]))), (!10311))), (~var_2));
                    var_33 = (min(var_33, (((!(((0 ? 1920 : -74))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    arr_59 [i_16] [i_17] [i_16] [i_16] = ((+((max((arr_53 [i_16]), (arr_53 [i_16]))))));
                    arr_60 [i_7] [i_7] [i_7] [i_16] = var_8;
                }
            }
        }
    }
    var_34 ^= (min(var_0, var_4));
    #pragma endscop
}
