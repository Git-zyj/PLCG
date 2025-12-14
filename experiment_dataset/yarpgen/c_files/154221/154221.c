/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2]);
                    var_20 = ((((((arr_2 [i_2] [i_1]) ? 1380500968 : -1380500968))) ? -var_12 : (!8128)));
                    var_21 = (max(var_21, ((((((arr_0 [i_0]) ^ (arr_4 [i_1] [i_2 + 2]))) | (~5592202567873435038))))));
                }
            }
        }
        arr_8 [i_0] [i_0] = ((-88 ? var_7 : (arr_2 [i_0] [i_0])));
        var_22 *= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_23 ^= 0;
        var_24 += (((arr_9 [i_3] [i_3]) != ((var_4 ? 87 : (arr_10 [i_3] [i_3])))));
        var_25 -= (arr_4 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_26 -= -1363819107;
        var_27 = ((((((var_16 <= (arr_12 [i_4] [i_4]))))) & ((((!(arr_11 [i_4]))) ? var_4 : ((9661 ? 17223718153573643537 : 1380500968))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_28 -= 14344583444326962002;
            arr_16 [i_4] [i_5] = (arr_15 [i_4] [i_4] [i_4]);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] = ((~(~var_11)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_26 [i_4] [0] [i_7] [i_6] = ((((arr_12 [i_4] [i_4]) ? (arr_12 [i_4] [i_4]) : -17947)));
                        var_29 += 80;
                    }
                }
            }
            var_30 = (max(var_30, (arr_24 [i_4] [i_6])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_31 = (max(var_31, (((!(arr_18 [i_4]))))));
            arr_31 [i_4] |= (arr_11 [i_4]);
            var_32 = ((~((0 ? var_15 : (arr_4 [i_4] [1])))));
        }
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] |= var_12;
        var_33 ^= -17223718153573643537;
    }
    var_34 = (-((max(33753, 14))));
    var_35 = ((((min((min(var_0, var_12)), (23921 <= var_6)))) ? var_6 : ((((((1223025920135908079 ? 107 : 99))) ? (5074400324666809823 <= var_14) : ((55874 ? var_18 : var_14)))))));
    var_36 += 50;
    var_37 |= (((((var_17 <= (~var_4)))) == (!var_15)));
    #pragma endscop
}
