/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((min(var_2, var_3)) % var_4));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_11 -= (arr_0 [1]);
        var_12 = (min(((((arr_0 [i_0]) >= (min((arr_0 [i_0]), (arr_1 [i_0])))))), (arr_0 [i_0])));
        var_13 = ((((1510003554 == (max((arr_0 [i_0]), (arr_0 [i_0]))))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        arr_2 [0] [0] &= (arr_0 [6]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = 27210;
        arr_7 [i_1] [i_1 - 1] = ((-27201 ? (arr_1 [i_1]) : ((~(arr_0 [2])))));

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_2] [i_1] [i_2] = 16937;
            arr_12 [i_2] [i_2] [i_1] = (arr_10 [i_1] [i_1 - 1] [i_2 - 1]);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    var_15 = (-(arr_16 [i_1] [i_3] [i_3] [i_3]));
                    arr_17 [i_1] [i_1] [i_3] [18] &= (arr_6 [i_4 - 2] [i_1 - 1]);
                }
            }
        }
        arr_18 [i_1] &= ((~(((arr_0 [2]) ? (arr_14 [10] [i_1]) : (arr_15 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_22 [i_5] = 16380;
        arr_23 [i_5] [i_5] &= ((arr_5 [i_5] [i_5]) ? (arr_10 [i_5] [i_5] [i_5]) : (arr_0 [4]));
        var_16 = (arr_4 [i_5]);
    }
    var_17 += ((min(var_8, var_0)));
    #pragma endscop
}
