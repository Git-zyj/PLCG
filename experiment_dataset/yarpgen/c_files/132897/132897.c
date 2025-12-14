/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min(((min(((min(13534, 52002))), 0))), (~9223372036854775807)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = 32767;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (arr_4 [7] [i_1] [2]);
            arr_7 [i_0] [i_1] = (((arr_0 [i_0]) & 445226480));
        }
        arr_8 [i_0] = (((arr_1 [i_0]) < ((13540 ? var_12 : (arr_0 [i_0])))));
        arr_9 [i_0] [i_0] = 124;
        arr_10 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_22 = (max(var_22, (((!((max((28953 - 2086601618), (arr_12 [i_2])))))))));
        arr_14 [i_2] [i_2] = 52479;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = ((((!(arr_11 [1]))) || 56936));
        var_23 = (max(var_23, ((max(var_12, ((min((min(var_5, 52015)), (!52496)))))))));
        var_24 = (max(var_24, ((((((((max((arr_2 [i_3]), 13508))) ? ((-(arr_5 [i_3] [i_3]))) : (arr_3 [i_3])))) ? (((arr_5 [i_3] [i_3]) ? (arr_5 [i_3] [i_3]) : (arr_5 [i_3] [21]))) : 129)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_25 = (arr_2 [i_4]);
                    var_26 = var_14;
                }
            }
        }
        var_27 = ((((((var_13 || (arr_21 [i_4] [i_4] [i_4]))))) ^ (min((arr_11 [i_4]), (arr_13 [i_4])))));
    }
    #pragma endscop
}
