/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_16 = var_13;
            arr_6 [4] [7] = (arr_4 [i_0 + 1] [i_0 - 1] [i_1 + 1]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (min((min((arr_1 [i_0 - 2]), (arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1]))), ((-(arr_1 [i_0])))));
            var_17 = (~(((!(arr_3 [i_0 + 1] [i_0 - 3] [i_0 + 1])))));

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                var_18 = (min(var_18, (max((arr_0 [i_0 - 1]), ((((max((arr_8 [i_0] [i_0]), (arr_0 [i_0])))) ? (arr_10 [i_3 - 2] [i_3 - 2] [i_3] [i_3]) : (min((arr_10 [i_2] [i_2] [i_3] [i_2]), (arr_11 [i_0] [i_2])))))))));
                arr_12 [i_2] [i_2] [i_2] [14] = (min((arr_5 [i_3] [10]), (arr_5 [10] [i_3])));
            }
            arr_13 [i_2] [i_2] [14] = (arr_1 [i_0 - 2]);
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_0] = (arr_1 [8]);
            arr_17 [14] [i_0] = (((arr_8 [i_0 + 1] [i_4 + 1]) ? (117 ^ -3984869261479857478) : (((min((arr_8 [i_0 - 1] [i_4 + 1]), (arr_8 [i_0 - 1] [i_4 + 1])))))));
            var_19 = ((+(((arr_7 [i_4 + 1] [i_0 - 3]) * (arr_5 [i_4] [i_4 - 1])))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                var_20 = (arr_8 [1] [i_0 + 1]);
                var_21 = (arr_18 [i_0 - 2] [i_0 + 1]);
                arr_22 [i_0] [i_5] [i_6] [i_6] = -3984869261479857478;
                var_22 = ((max((arr_0 [i_5]), ((((arr_7 [i_5] [i_6 + 2]) < -1555473122))))));
                var_23 ^= (((arr_21 [i_0 - 3] [i_0 - 3] [i_6 + 2]) ? (2609443303344951620 && 0) : (arr_21 [i_0 - 1] [i_0] [i_6 - 1])));
            }

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_24 *= (((((((((arr_20 [i_0]) ? (arr_21 [i_0] [i_5] [i_0]) : (arr_20 [i_0])))) || (arr_18 [i_5] [i_7])))) != (((arr_8 [i_0] [i_0]) ? (arr_4 [i_7 + 1] [i_7 - 1] [i_7 - 1]) : (((13 >= (arr_23 [i_0] [i_0]))))))));
                var_25 -= (max((arr_2 [i_0]), (((((~(arr_4 [i_0] [5] [i_0 + 1])))) ? (arr_19 [4]) : (arr_21 [12] [i_0 + 1] [i_7 + 2])))));
                var_26 = (max(((((!(arr_21 [6] [i_5] [i_0]))))), (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_7 [11] [i_0 - 3])))));
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_0] [0] = (arr_19 [i_8 - 1]);
                var_27 = 2147483647;
            }
            /* vectorizable */
            for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
            {
                arr_32 [i_9 + 1] [2] [0] = (!61);
                var_28 = (arr_11 [i_0 - 2] [i_0 - 3]);
                var_29 += (arr_7 [i_9 + 1] [i_9 + 1]);
            }
        }

        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_30 = (-2147483647 - 1);
            var_31 = (arr_18 [i_0 - 3] [i_0 + 1]);
            var_32 = ((!(arr_25 [i_10 + 1] [i_0 - 2] [11] [i_10])));
        }
    }
    var_33 = (max(var_33, ((((var_2 + 2147483647) << (!var_10))))));
    #pragma endscop
}
