/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(((-(max((arr_0 [i_0]), var_8)))), ((-(max((arr_1 [i_0] [13]), (arr_0 [0])))))));
        var_15 = (-2147483647 - 1);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_16 = (arr_6 [i_1]);
        var_17 &= (((((2147483647 ? (arr_2 [i_1]) : -12802))) ? (arr_2 [i_1 + 1]) : (arr_0 [i_1 - 1])));
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_18 = (((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))) * (arr_9 [i_2])));
        var_19 &= (((((arr_7 [i_2]) ? 1706327388 : (arr_7 [13]))) % ((max((arr_7 [i_2]), -2147483631)))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_20 = (max(var_20, (((((max(var_6, 2147483647))) == 2389)))));
            var_21 -= (((arr_12 [i_3] [i_3]) == (((arr_8 [i_3]) - (arr_8 [i_4])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_22 = (max((((((var_11 ? (arr_18 [5] [i_5] [i_5] [i_5]) : (arr_12 [i_5] [i_5])))) ? (9 | 38117) : (max(var_5, (arr_15 [i_4] [i_5]))))), (arr_13 [i_5])));
                        var_23 *= (((~var_9) > (max((arr_13 [i_3]), (((arr_9 [i_6]) ? (arr_9 [i_6]) : 11246553959775939115))))));
                        var_24 = ((((max(-24879, 0)))));
                    }
                }
            }
            var_25 -= ((!((max((arr_11 [i_4] [i_3]), (arr_11 [i_3] [i_3]))))));
        }
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_26 = (arr_26 [i_3] [i_7] [i_3]);
                            var_27 = (((~24879) - (((((((arr_22 [i_8] [i_7] [i_7 - 2]) != var_12))) == ((max(var_12, var_3))))))));
                            var_28 = (min(var_28, (arr_15 [i_10] [i_10])));
                            var_29 = (max(var_29, ((((arr_21 [4] [i_7] [i_7]) / ((max((arr_12 [i_7 - 2] [i_7]), (2147483647 - var_7)))))))));
                        }
                    }
                }
            }
            var_30 = (((((!(arr_21 [i_7 - 1] [i_7] [i_3])))) > -2147483612));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_31 = 1064770472;
                arr_35 [6] [i_7] [6] [i_7] = 581152890;
                var_32 = ((arr_21 [i_7 - 1] [i_7 - 2] [i_7 - 2]) ? (arr_21 [i_7 - 2] [i_7 - 2] [i_7 - 2]) : (arr_21 [i_7 - 1] [i_7 - 2] [i_7]));
                var_33 -= (arr_14 [i_7 - 1] [16] [i_11]);
            }
            arr_36 [i_7] = ((~(((!(arr_18 [i_7 - 1] [i_7] [7] [i_7]))))));
        }
        var_34 = ((((arr_15 [0] [i_3]) ? (!-390645116) : var_1)));
        var_35 = ((!((max((((arr_20 [i_3] [0] [i_3]) ? var_0 : var_2)), var_11)))));
    }
    #pragma endscop
}
