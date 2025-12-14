/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_13;
    var_16 = (~-2471733637794429683);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1023 ^ 2809686939359100497);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((((min((arr_3 [i_2]), (arr_9 [i_0] [i_2] [i_1] [i_1] [i_0])))) / ((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_2])))))))));
                        var_18 = (((arr_3 [i_1]) ? (arr_4 [i_0] [i_1] [i_2]) : (((!var_6) ? (arr_9 [i_0] [i_1] [i_0] [i_3] [i_3]) : (arr_7 [i_0])))));
                        var_19 -= ((-(arr_8 [i_0] [i_3])));

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            var_20 -= ((((((arr_1 [i_0] [i_1]) / var_12))) ? var_6 : (arr_0 [i_2])));
                            var_21 = (((arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4 - 1] [i_4 - 3]) ? (arr_10 [i_4 - 4] [i_4 - 2] [i_4 + 3] [i_4 + 1] [i_4 - 4] [i_4 + 1]) : (arr_10 [i_4 - 3] [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 - 4])));
                        }
                    }
                }
            }
        }
        var_22 += (((((((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > var_11))) << (var_6 - 6948)))) * 2809686939359100500));
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_21 [i_7] [1] [i_7] [i_7] = (~15637057134350451116);
                    arr_22 [i_7] [i_7] = ((-((((((arr_20 [i_5] [i_6] [i_7]) ? (arr_8 [i_5 - 2] [i_7]) : (arr_16 [i_5 - 2] [i_5 - 2])))) ? (arr_18 [i_6] [i_6] [i_5]) : (arr_11 [i_5] [i_6] [i_5] [i_5 - 3] [i_5] [i_6])))));
                    arr_23 [i_5] [i_6] [i_7] [10] &= (arr_16 [i_6] [4]);
                }
            }
        }
        arr_24 [i_5] [1] = (18446744073709551615 % 4294967295);
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_23 &= ((!(((var_8 ? (arr_1 [i_5 + 1] [i_8 - 1]) : (arr_20 [i_5] [i_8 + 1] [i_9]))))));
                    arr_29 [i_5 - 1] [i_8] [i_9] [i_8] = (arr_10 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [6] [i_5 - 3]);
                }
            }
        }
        var_24 = (45795 <= 15637057134350451116);
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        arr_33 [i_10] = (i_10 % 2 == zero) ? ((min(((((min((arr_32 [i_10]), var_3))) >> (((arr_31 [i_10] [i_10 - 1]) - 44510)))), ((+(((arr_31 [i_10] [17]) ? var_6 : var_13))))))) : ((min(((((min((arr_32 [i_10]), var_3))) >> (((((arr_31 [i_10] [i_10 - 1]) - 44510)) - 20912)))), ((+(((arr_31 [i_10] [17]) ? var_6 : var_13)))))));
        var_25 = ((arr_30 [i_10] [i_10 - 1]) || (1 | 12));
        arr_34 [10] &= (((arr_31 [12] [i_10 + 1]) ? var_5 : ((var_7 / ((4294967295 ? (arr_32 [i_10]) : (arr_31 [4] [i_10 + 1])))))));
        arr_35 [i_10] = ((~(arr_32 [i_10 - 1])));
        arr_36 [i_10] = 0;
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_26 = ((!((min((min(26713, 4294967295)), (~var_4))))));
        arr_40 [i_11] [i_11] = ((max((arr_39 [i_11]), (arr_39 [i_11]))));
    }
    var_27 ^= var_1;
    #pragma endscop
}
