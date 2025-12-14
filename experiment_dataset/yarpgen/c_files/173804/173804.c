/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((var_13 ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0])));
        arr_4 [i_0] = var_18;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_5 [i_1 - 1] [i_1 + 2]) ? (!0) : (((arr_5 [i_1 - 1] [i_1 + 3]) ? var_3 : 4294967288))));
        arr_9 [i_1] = -var_1;
        arr_10 [8] = ((((((((!(arr_5 [i_1] [i_1]))) || ((max((arr_5 [i_1] [i_1]), 49278))))))) >= (((((var_1 ? var_3 : (arr_5 [i_1 + 3] [i_1])))) ? ((((arr_6 [i_1] [i_1 + 2]) ? 192 : (arr_7 [i_1] [i_1])))) : (min(var_15, var_15))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_21 += (~var_14);
        var_22 = var_18;
        arr_14 [i_2 + 3] = ((-(((arr_11 [i_2]) ^ ((49288 ? var_15 : (arr_8 [i_2])))))));
    }
    var_23 = (min(4294967295, 63));
    var_24 = (max(var_24, ((((!var_12) || var_2)))));
    var_25 += var_4;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_25 [4] [i_6] [i_4] [i_4 - 1] &= var_0;
                            var_26 = (((((((((var_13 ? var_7 : var_13))) ? (arr_8 [i_3]) : (arr_19 [i_4 + 1] [i_5 + 2]))) + 2147483647)) >> (var_6 - 488635341)));
                        }
                    }
                }
                var_27 ^= (min((min((((48 ? (arr_11 [i_3]) : (arr_7 [i_4 + 1] [i_3])))), (((arr_11 [i_3]) ? var_16 : (arr_19 [i_3] [i_3]))))), ((((((var_0 ? var_6 : -887755099))) ? (arr_5 [i_3] [i_3]) : (max((arr_16 [i_3] [i_3]), 1)))))));

                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    arr_30 [1] [i_4 - 1] [i_4] [i_7] = ((((max(30414, -5906))) << ((((((min(var_14, 192))) ? var_15 : (~-405901730))) - 10778672854719248156))));
                    var_28 = (arr_20 [i_3] [i_3] [i_4] [i_7]);

                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_29 = (min(var_29, (((((arr_31 [20] [i_4] [i_4]) << (((arr_16 [i_7 - 1] [i_7]) - 1047173057)))) | (arr_19 [i_3] [i_7 - 1])))));
                        arr_35 [i_8 + 3] [i_8] [i_7] [i_4] [i_8] [i_3] = min((((5609 ? 49278 : -32082))), ((-(max(var_7, var_4)))));
                        var_30 = (max(var_30, ((min((max(17, (48708 && var_7))), ((((arr_16 [i_4 + 1] [i_7 - 2]) ? (((!(arr_18 [i_4] [i_7 - 1] [i_8])))) : ((1339610528 ? var_8 : (arr_17 [i_4] [i_4])))))))))));
                    }
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        arr_39 [i_3] [i_4] [i_7] [i_4] = ((((arr_15 [i_4]) == (((arr_7 [i_3] [i_4]) / var_7)))));
                        var_31 = (arr_27 [i_3]);
                        var_32 += (((((173 ? ((((arr_5 [7] [i_4]) % 4607182418800017408))) : 17418925267500394395))) ? var_18 : (arr_17 [i_4 - 1] [i_7])));
                        var_33 = (max((var_5 ^ -32082), 887755098));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_34 = var_6;
                        arr_42 [i_3] [i_3] [i_3] [i_3] [i_10] = (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]) ? var_9 : ((var_7 + (arr_27 [i_3])))));
                    }
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        var_35 = (arr_12 [i_3]);
                        arr_45 [i_7] [i_11] = ((((((max((arr_28 [i_7]), 0)) != var_3))) - (arr_44 [i_3] [1] [i_7] [i_11] [1])));
                        var_36 = ((~(max(((((arr_44 [i_3] [i_3] [i_7 + 1] [i_3] [i_11 - 1]) ? (arr_44 [i_3] [i_4] [i_4] [i_7 - 1] [i_3]) : var_13))), (((arr_12 [21]) ^ var_1))))));
                        arr_46 [i_4] [12] [i_7] [i_11] = 7887676215539800437;
                    }
                }
                var_37 = (max((~-8388608), var_15));
            }
        }
    }
    #pragma endscop
}
