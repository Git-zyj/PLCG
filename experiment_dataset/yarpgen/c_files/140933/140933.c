/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((~(((var_2 > (~var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = ((!(((((-2052209664396668987 >= (arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                            arr_12 [i_3] [6] [6] [i_0] |= ((((((arr_3 [i_0] [i_0] [i_0 - 1]) & ((~(arr_0 [i_0])))))) ? (((~((max(var_5, 1)))))) : (min(((var_14 | (arr_9 [i_0] [i_1] [i_0]))), (max((arr_4 [i_1]), var_12))))));
                            var_21 = ((((min((arr_9 [i_1 + 1] [i_1] [i_0 - 1]), ((min((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1]), (arr_10 [i_0] [1] [16] [i_2] [i_3]))))))) || ((max((!var_2), (min((arr_2 [i_0 - 1]), (arr_7 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))))));
                        }
                    }
                }
                var_22 = (max(var_22, ((((((~(arr_3 [i_0] [i_1] [i_1 + 2])))) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 2]) : (arr_3 [i_1 - 1] [16] [i_1 + 2]))))));
                arr_13 [0] [i_1] [i_1] &= (arr_3 [i_0] [i_0] [i_1 + 1]);
                var_23 = (((((((max(var_0, var_4))) ? ((min(-2052209664396668987, (arr_3 [i_1] [i_1] [i_0 - 1])))) : ((7 ? 0 : (arr_4 [2])))))) && (((((((arr_7 [1] [1] [i_0] [i_0 - 1]) <= (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))) ^ var_14)))));
            }
        }
    }

    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_24 = (max(var_24, (var_3 % 53)));
                        arr_24 [i_4] = ((((((23133 > ((((arr_22 [i_4] [i_5] [i_6] [i_7]) < var_9))))))) ^ (arr_22 [i_4] [i_5] [i_6 + 1] [i_7])));
                        var_25 = (max(var_25, ((((((17440934128794162774 * (((15 ? (arr_19 [i_7] [i_6] [i_5] [i_4 + 1]) : (arr_16 [i_4] [i_5] [i_6]))))))) ? (min((arr_19 [i_4] [i_5] [i_6] [i_7]), ((var_6 ? var_7 : var_4)))) : (arr_20 [i_4] [i_5]))))));
                        arr_25 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_7] = 1;
                    }
                }
            }
        }
        var_26 = (max(var_26, (arr_23 [i_4] [i_4] [5] [5])));
        var_27 *= (((((((max(var_3, var_16))) && (arr_17 [i_4 - 1] [i_4 + 3])))) << (((((((arr_22 [i_4] [i_4 - 2] [i_4] [i_4 + 2]) + 2147483647)) >> (((((arr_23 [i_4] [0] [i_4] [i_4]) ? var_7 : -123)) - 4605911729154328383)))) - 131049))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_28 = 666786795;
        var_29 = (max(var_29, (((var_12 >> (((((arr_5 [i_8] [i_8]) ? (arr_18 [i_8 - 1]) : var_7)) - 21136)))))));
    }
    #pragma endscop
}
