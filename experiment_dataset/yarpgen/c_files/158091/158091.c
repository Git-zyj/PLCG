/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_7 + (var_8 - var_6)))) && -var_3));
    var_12 |= (max(((max((var_9 | var_0), ((max(var_2, var_2)))))), (max(var_9, (var_7 % var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (((max(var_5, (!var_4))) & var_5));
                var_14 = max(((((min(var_8, var_3)) <= (((var_4 + 2147483647) >> (var_4 + 315194148)))))), (((!var_5) | (var_5 | var_8))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = (((var_2 + var_4) + (((min(var_8, var_1)) | (max(var_1, var_7))))));
                            var_16 = ((var_5 < (((!((max(var_2, var_10))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_17 = (max(((((var_4 | var_8) | var_5))), ((((max(var_3, var_4))) % (var_1 + var_2)))));
                        var_18 = (max(var_18, (var_5 | var_10)));
                        var_19 = ((((var_1 << (((~var_7) - 727673951)))) | (((min(var_9, var_1)) ^ var_8))));
                        var_20 = (((var_2 <= var_0) && (((var_9 | (var_3 & var_1))))));
                    }
                }
            }
        }
        var_21 -= var_1;
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_22 |= ((~(max((min(var_9, var_4)), (var_4 | var_4)))));
        var_23 = (((((((max(var_3, var_0))) / var_6))) && (((((min(var_2, var_2))) | (min(var_2, var_5)))))));
        var_24 = ((~var_10) && var_10);
        var_25 = (max((max((var_9 | var_10), (~var_1))), var_1));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_26 = (((min((var_9 & var_3), var_9)) | (((var_9 ^ var_8) | var_5))));
            var_27 = (max((((((max(var_4, var_7))) && var_1))), ((((var_8 >> (var_7 - 3567293337))) | var_6))));
            var_28 = ((-((var_3 / ((min(var_3, var_6)))))));
            var_29 = (((((~var_10) + 2147483647)) >> ((((~(max(var_4, var_8)))) + 441028538))));
            var_30 = (max(var_30, (((!((min(var_2, (max(var_2, var_4))))))))));
        }
        var_31 = (max(var_31, (((((((var_4 + var_4) || (var_5 == var_2)))) >> (((var_10 == (max(var_7, var_1))))))))));
        var_32 = (min((((((min(var_2, var_0))) || (var_9 / var_6)))), (max(-var_6, (max(var_1, var_10))))));
        var_33 = var_4;
    }
    for (int i_11 = 4; i_11 < 15;i_11 += 1)
    {
        var_34 = (((var_5 | var_8) >= var_10));

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_35 = var_8;
            var_36 -= (min(((-var_1 | (var_0 + var_3))), ((((var_1 < var_9) < var_2)))));
            var_37 = (((var_7 & var_3) & ((max(var_4, (var_4 >= var_4))))));
            var_38 = (max((((min(var_8, var_6)) ^ (~var_4))), ((~(var_9 & var_8)))));
        }
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            var_39 ^= (((((max(var_4, var_10) == var_10)))));
            var_40 = (max(var_40, var_10));
        }
    }
    #pragma endscop
}
