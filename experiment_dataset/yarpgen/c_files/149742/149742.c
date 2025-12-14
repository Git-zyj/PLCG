/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [22] [i_0] = (max(var_10, -1102880212));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [3] [i_0] = (max(-1102880217, var_18));

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (max(var_19, ((max((!1102880220), (~47340))))));
                        var_20 ^= (((-(arr_10 [i_1] [i_1 + 3] [i_3 - 3] [i_3 - 1]))) | (!var_2));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_21 = (min(var_21, (((((((arr_14 [i_5]) + (4 > var_7)))) ^ ((((3530503204212652398 + (arr_11 [i_5] [i_5] [i_5]))) * 47342)))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((max(1607794251, 18192)))));
                            arr_23 [i_4] [i_4] [i_4] [i_7] = ((1684007382 / 18183) + (((arr_14 [i_4]) ? (arr_14 [i_4]) : 18179)));
                            arr_24 [i_7 - 1] [i_4] [i_6] [i_4] [i_4] [i_4] = ((max(3588602912181461266, 6132589357724712909)) << (95 - 95));

                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                var_23 = 818787186;
                                var_24 = (((-5104378171671095924 + 9223372036854775807) >> (3918 - 3888)));
                                arr_29 [12] [i_4] [i_7] [i_4] [i_5] [i_5] [i_4] = (((((-(arr_21 [i_4] [i_7 - 2] [i_4 - 4] [i_7])))) ? (((((arr_21 [i_7] [i_7 + 1] [i_4 + 2] [i_7]) == (arr_21 [i_4] [i_7 - 3] [i_4 - 4] [i_7]))))) : (max(3588602912181461279, 1))));
                            }
                            for (int i_9 = 0; i_9 < 20;i_9 += 1)
                            {
                                arr_34 [i_4] = (max((((120 ^ ((var_0 << (-373106024 + 373106028)))))), (max((max(2023159048, 9007199254724608)), -1149263427))));
                                arr_35 [18] [i_5] [i_4] [i_7 + 1] = (((112 + var_14) - 47339));
                                arr_36 [8] [i_4] [i_6] [0] [i_4] [i_4] = ((max((arr_3 [i_9]), (((11986 + (-9223372036854775807 - 1)))))) + (max((max(-93, 13959381908770385750)), ((max(var_6, -6686246568590794136))))));
                                var_25 = (max((((609095518 | var_4) - (max(var_11, (arr_14 [i_4]))))), 17276693318614897448));
                            }
                            var_26 = 1;
                        }
                    }
                }
            }
        }
    }
    var_27 = var_13;
    var_28 = var_2;
    var_29 = 18446744073709551605;
    #pragma endscop
}
