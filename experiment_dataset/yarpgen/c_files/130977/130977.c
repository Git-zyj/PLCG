/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_8;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_20 += (-(arr_0 [i_0 - 1]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 ^= (!-12683);
                    arr_7 [i_0 + 1] [i_0 - 3] [i_0 - 4] = (((((var_10 ? var_10 : var_16))) ? -var_12 : (arr_2 [i_2 - 1] [i_2 + 2] [i_2 - 3])));
                    arr_8 [i_1] [i_1] [i_2 - 3] [i_2 - 2] = ((var_4 ? (arr_5 [i_0 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 1]) : var_17));
                    arr_9 [i_0 - 2] [i_1] [i_2 + 1] = ((!(arr_1 [i_0 - 2])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3 - 1] = ((((max(-50, 193132682))) ? ((var_18 ? (arr_10 [i_3 + 2]) : -121)) : (1413170440 == var_4)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_22 = (max(var_22, ((((((107 ? 8861362116870319123 : 2537930243))) ? (arr_16 [i_3 + 1]) : ((min((arr_16 [i_3 + 2]), (arr_16 [i_3 + 2])))))))));
                    var_23 -= ((-((3521548263748343667 ? (arr_19 [i_3 + 2] [i_3 + 1] [i_3 + 2]) : (arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                }
            }
        }
        var_24 = (min(var_24, (((-1748418119 ? -96 : -1748418119)))));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6 - 1] [i_6 - 1] &= (max(60516, (((((8861362116870319123 ? 1413170440 : var_15))) ? ((((arr_16 [i_6 - 1]) != (arr_11 [i_6 - 1])))) : (((!(arr_11 [i_6 + 1]))))))));
        arr_24 [i_6 + 2] = ((((((((arr_21 [i_6 + 2]) ? 16 : var_0))) ? (((!(arr_19 [i_6 + 1] [i_6 + 2] [i_6 + 1])))) : ((min(65519, 41802))))) >= ((((((arr_15 [i_6 + 1] [i_6 + 2]) ? (arr_21 [i_6 + 2]) : 2881796856))) ? ((-3436383824783768753 ? 7 : (arr_14 [i_6 + 2]))) : ((6193525891065292257 ? var_7 : (arr_10 [i_6 + 1])))))));
        var_25 |= (arr_17 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
    }
    #pragma endscop
}
