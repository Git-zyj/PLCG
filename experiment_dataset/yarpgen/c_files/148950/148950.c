/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 |= max(((max(((((arr_1 [i_0] [0]) < (-9223372036854775807 - 1)))), (((arr_0 [i_0]) << (var_11 - 1067936731)))))), (max(((min((arr_1 [i_1] [1]), var_9))), (((arr_2 [i_0]) - (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [9] [i_3] &= (((arr_8 [11] [i_2 + 1] [11] [i_3]) ? (max((-9223372036854775807 - 1), 2063751834)) : (min((arr_6 [i_0] [i_2 + 1] [i_2 + 1]), (arr_7 [i_0] [i_2 - 1] [i_2 - 1] [2])))));
                            var_21 -= ((~((((arr_7 [i_0] [11] [5] [i_3]) >= (arr_6 [i_0] [i_2 + 1] [i_2 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 |= 1;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = -2063751850;
        var_24 *= ((3739275900911902849 & (arr_11 [i_4])));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_25 -= (min(1887613619, ((max(-2063751835, var_5)))));
        var_26 |= (min(((~(min((arr_15 [i_5]), (arr_7 [i_5] [i_5] [i_5] [i_5]))))), (arr_3 [i_5])));
        var_27 *= (((((+(min((arr_10 [i_5]), 2118202851))))) || ((max(-var_18, (arr_13 [i_5] [i_5]))))));
        var_28 -= (((max((arr_12 [i_5]), (arr_12 [i_5]))) >> (((arr_7 [i_5] [i_5] [i_5] [i_5]) - 1815))));
        var_29 = (arr_3 [i_5]);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_30 -= (((arr_22 [i_7] [i_7 + 4] [i_7 + 3]) ? ((-(arr_23 [i_6] [i_7] [i_7 + 1] [0]))) : (((min(1, 1011438893849206089))))));
                                arr_31 [i_6] [i_7] [i_6] |= (((((min((arr_11 [i_6]), var_1)))) ? (arr_20 [i_6]) : (arr_27 [i_10] [i_8] [i_7] [1])));
                                arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] |= (arr_28 [i_7 + 3] [i_10] [i_10] [i_10]);
                            }
                        }
                    }
                    var_31 ^= ((-((-((~(arr_17 [i_6] [i_7 - 1])))))));
                }
            }
        }
        var_32 *= (min((max((arr_17 [i_6] [i_6]), (arr_24 [i_6] [i_6] [i_6]))), (arr_25 [i_6] [i_6] [2] [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
