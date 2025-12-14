/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, -17554818043697405377));
                                var_16 = ((((((!((max((arr_0 [4] [14]), (arr_9 [0])))))))) == (((arr_5 [i_3 - 2]) ? (min(var_8, (arr_8 [4] [i_1]))) : (((arr_13 [i_1] [i_2]) ? 17793546447051089397 : 2701144184))))));
                                arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = (max((~1593823112), (arr_1 [i_0])));
                            }
                        }
                    }
                }
                var_17 = (((((~(arr_4 [i_0 + 1] [i_0])))) ? ((((arr_7 [i_0 + 1] [i_0 - 1]) ^ (arr_7 [i_0 + 1] [i_0 - 1])))) : ((~(~var_9)))));
                arr_17 [i_0 + 1] [i_0 + 1] [i_1] = (((((((((arr_8 [i_1] [i_1]) ? -1 : 4))) ? (arr_7 [i_0 + 1] [i_0 - 1]) : (((arr_8 [i_0] [i_1]) & 2701144184))))) ? ((min(32721, 4))) : (arr_12 [20] [i_1])));
            }
        }
    }
    var_18 = (min(var_18, ((var_3 + (var_4 + var_1)))));
    var_19 = (((((2701144170 ? -2328954650 : (-114 * -23)))) ? (2601524846 * var_7) : (var_5 / var_10)));

    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_20 = (max(var_20, (((((((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) % (arr_3 [i_5] [i_5])))) <= ((-75 - ((((arr_4 [1] [i_5 - 3]) ^ var_8))))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_34 [i_6] [i_8] [9] [i_6] = (((((arr_2 [i_7] [i_9]) - (arr_2 [i_8 + 1] [i_6]))) < (((((arr_28 [i_8 - 1] [5] [i_8 - 1]) == (arr_28 [i_8 - 1] [i_9] [i_9])))))));
                                var_21 -= (((((var_3 - (arr_10 [i_5] [i_8] [i_7] [i_8] [i_9] [i_8 + 1])))) ? ((-(arr_10 [10] [i_6] [i_7] [i_5] [8] [i_8 + 1]))) : (((arr_10 [i_5] [i_6] [i_7] [i_5 - 2] [17] [i_8 + 1]) >> (((arr_31 [i_5 - 3] [1] [i_9] [i_5 - 2] [i_9]) - 40120))))));
                                arr_35 [i_8 + 1] [i_7] = ((~(((!((min(var_1, 1560480561))))))));
                                var_22 = (max(1593823107, (((arr_18 [i_8 + 1] [i_5 - 3]) & 4294967295))));
                            }
                        }
                    }
                    arr_36 [i_5 - 2] [0] [i_7] = (((((((arr_10 [i_7] [i_7] [i_7] [i_7] [i_6] [i_5]) >> 1)) < (95 == var_5))) ? ((4 - ((min(-23, (arr_19 [i_5])))))) : ((min((((9044681075842755353 && (arr_30 [5])))), 16)))));
                    var_23 = ((-((((arr_5 [4]) != (arr_5 [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
