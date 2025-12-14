/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(var_3, (min(((var_4 ? 0 : var_8)), var_9))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!var_8);
        var_15 ^= ((0 || ((min(-1, -23283)))));
        var_16 = 0;
        var_17 ^= (max(10, ((((max(var_0, var_8))) ? ((63 ? -10 : -17300)) : (((arr_2 [16]) ? var_3 : -92))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [4] &= (((1202075874 >= 19962) ? (max((max(-317795456, -11955)), (45574 > 11834))) : (var_2 <= 1963411127650776127)));

        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_18 &= (max(((1408534631 ? (var_13 && -13) : ((max(-17300, (arr_5 [i_3])))))), ((((((19962 << (((-105 + 123) - 12))))) || var_7)))));
                        arr_16 [i_1] [i_1] [i_3] [i_4] [i_2] = ((-((~(arr_10 [i_1] [1] [i_2 + 1])))));
                        var_19 = (-(max(4, -2043392999)));
                    }
                }
            }
            var_20 = 1;
            var_21 = ((((min((arr_11 [i_2 - 1] [i_1]), var_7))) ^ ((8348475793664463081 >> (-1074968674 + 1074968702)))));
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_22 = (max(((max(109, -26948))), ((var_6 ? (arr_17 [i_1]) : 16483332946058775507))));
            var_23 = (max(var_23, ((max(-13, -1)))));
            var_24 = (-var_6 && var_1);
            var_25 = (max((((((var_6 ? var_5 : 5))) ? 790823779 : ((var_13 ? 6 : 12)))), ((((((var_3 ? 56367 : 516889154))) || var_0)))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_22 [i_6] |= var_10;
            arr_23 [i_1] [i_1] [i_6] = ((((var_13 / (max(var_10, (arr_10 [i_1] [i_1] [i_6]))))) <= (((((16382 & 7369) <= -1551555166))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_26 = (((((var_0 ? (arr_30 [i_7] [i_7] [i_9 - 2] [i_7] [i_9]) : (arr_30 [i_7] [i_7] [i_9 - 2] [i_9 + 1] [i_9 + 1])))) || var_5));
                            var_27 += (((arr_8 [i_7]) ? 12499 : -var_9));
                        }
                    }
                }
            }
            var_28 -= var_9;
        }
        var_29 -= (((min(((var_13 ? var_5 : var_7)), ((max(0, var_3))))) % ((((max(21, var_4)))))));
    }
    #pragma endscop
}
