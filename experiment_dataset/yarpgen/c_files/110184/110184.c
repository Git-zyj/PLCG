/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] = ((((var_1 != (~18446744073709551615))) ? (arr_2 [i_0]) : var_5));
                    arr_9 [i_0] [i_2] [i_2] [i_2] |= ((((10610800609453876498 ? (((var_0 ? (arr_4 [i_0] [i_0]) : var_11))) : (max((arr_6 [i_0] [i_0] [i_2]), (arr_5 [i_2])))))) & ((var_8 & (max(7727922921030651123, (arr_1 [i_2] [i_1]))))));
                    var_14 = (max(var_14, (((22 < ((-(max(-1250008076, var_1)))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((min(-6010785767299047900, 0)));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_15 = 1;
                    arr_13 [i_0] [i_1] [i_0] [i_3] = (((arr_4 [i_0] [i_3]) != (((arr_0 [i_0]) ? (((arr_4 [i_0] [i_0]) ? 21 : (arr_11 [3] [i_0] [i_1] [i_1]))) : (arr_4 [i_1] [i_1 + 3])))));
                }
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 += (max(((~(min(var_10, var_3)))), ((max((~var_5), (max((arr_6 [i_0] [i_0] [i_6]), -6010785767299047880)))))));
                                arr_22 [i_0] = ((((933680555 ? (!var_8) : (var_7 || var_5)))) ? (((((var_12 ? 5 : 1))) ? (((arr_7 [i_5] [i_4 - 1]) ? 16814810878506559133 : 51837)) : ((var_1 ? var_10 : 6010785767299047879)))) : 2147483647);
                                var_17 = (min(var_17, ((((7835943464255675123 + var_9) ? (((((var_2 ? (arr_12 [i_4] [i_1] [i_1] [i_4]) : -510977926)) != ((((arr_18 [i_1 + 3] [i_4] [i_5] [i_5]) ? var_13 : var_9)))))) : var_5)))));
                                var_18 = (((max(0, (~var_4))) & (min((arr_4 [i_1 + 2] [i_6]), ((53245 ? 1 : var_9))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_4 - 2] [i_0] [i_1 + 1] = (arr_23 [i_1] [1] [1]);
                        arr_27 [i_7] [i_7] [i_0] [12] [i_7] [i_7] = (arr_14 [i_1 + 4] [i_4]);
                        arr_28 [i_0] [i_0] [i_4] &= (var_2 == (var_9 ^ -6010785767299047900));
                    }
                    arr_29 [i_0] [i_0] [i_4 - 2] = (((~32250) ? (arr_2 [i_0]) : 9760288564159893221));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_19 = var_3;
                    var_20 = (((((0 << (var_10 - 4706245343237959027)))) ? (((((var_13 ? var_13 : 2147483647))))) : (((((var_13 ? 4294967295 : (arr_7 [5] [i_8])))) ? (arr_14 [i_0] [i_8]) : (((221 ? var_3 : 65535)))))));
                }
                arr_32 [i_0] [i_1] [i_1 + 1] = (max((((arr_20 [i_1] [i_0] [i_1 + 2]) ? 13249 : (arr_19 [i_1] [i_0] [i_1 - 1] [i_1 + 4]))), (arr_19 [i_1] [i_0] [i_1 - 1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                var_21 = (max(var_21, (max(1764437366038693639, ((((~-2147483647) ? ((var_10 ? 65535 : (arr_35 [i_9] [i_10] [i_9 + 2]))) : (((arr_34 [i_9] [i_9]) ? (arr_33 [i_10]) : var_7)))))))));
                var_22 = var_1;
                arr_37 [i_9] [i_10] = (((((arr_35 [i_9] [i_9 + 1] [i_9 - 2]) ? var_7 : var_7)) ^ (arr_34 [i_9] [i_9 - 2])));
            }
        }
    }
    #pragma endscop
}
