/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!(255 | -32759))) ? -23207 : var_17));
    var_21 += min((((((min(var_19, -1))) ? -151 : 75))), ((var_5 ? var_12 : (min(var_16, 65582364736708994)))));
    var_22 = (max((((max(var_18, var_9)))), (max(((29 ? 67 : -19886)), -19886))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_23 = (max(var_23, (((~((((max(63, 37))) ? (~63) : 213)))))));
        arr_2 [i_0] = ((~(((arr_0 [i_0] [i_0]) ? ((min(10, (arr_1 [i_0])))) : (((arr_1 [10]) ? (arr_1 [i_0]) : 28260))))));
        arr_3 [i_0] [i_0] = ((((max((-32767 - 1), 29715))) ? (((arr_1 [i_0 + 1]) ^ 32759)) : (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = -32750;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [4] = (((((((min(-4714, 2781))) % ((min(32759, 231)))))) ? ((((!(arr_7 [i_3] [i_2]))))) : (max(var_3, ((max(var_4, 213)))))));
                    arr_15 [i_1] [i_3] [i_1] = ((~(~-5087111046309172979)));
                }
            }
        }
        arr_16 [i_1] = (min((((arr_9 [i_1]) | (arr_9 [i_1]))), 5087111046309172979));
        arr_17 [i_1] |= (arr_1 [i_1]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = (max((((((213 ? (arr_1 [i_4]) : 187))) ? (-19420 ^ 9) : (min(-504608843647335756, -6041058808483516949)))), ((((min(4267525145865289810, 20985))) ? (((max(var_0, -23011)))) : ((var_6 ? var_11 : var_19))))));
        var_24 = (max(((+(max((arr_8 [i_4] [i_4]), 39)))), ((255 ? (arr_19 [i_4] [i_4]) : 4267525145865289810))));
        var_25 *= ((~((((max((arr_12 [9] [i_4] [i_4] [i_4]), var_9))) ? ((min(17495, 213))) : ((min(var_4, var_15)))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [i_5] = var_8;
        arr_25 [i_5] = (min(68, -1));
        var_26 ^= (arr_8 [i_5] [i_5]);
        arr_26 [i_5] = (((((min(-32759, -6544)))) / (((arr_22 [i_5]) | 30247))));
    }
    #pragma endscop
}
