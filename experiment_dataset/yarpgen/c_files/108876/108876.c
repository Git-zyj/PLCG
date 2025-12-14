/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (arr_1 [i_0])));
        arr_3 [i_0] = -3674684981946080699;
        var_19 = (arr_1 [8]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 = ((+(((((arr_2 [i_1]) < (arr_2 [i_1]))) ? (((var_14 == (arr_0 [i_1] [i_1])))) : (arr_0 [i_1] [i_1])))));
        arr_6 [10] = 3674684981946080698;
        arr_7 [i_1] = 42390;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_21 = ((11238 ? (arr_8 [i_2]) : (arr_8 [0])));
        var_22 = ((~((~(arr_8 [i_2])))));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    arr_16 [i_3] = (arr_0 [i_3 + 2] [i_5 + 1]);
                    var_23 = (min(var_23, (arr_12 [i_3 + 2] [i_4 - 1] [i_5 + 1])));
                    var_24 = (((46 % 1773099039) * 0));
                }
                arr_17 [i_3] = ((1 ? (arr_5 [i_3] [i_3 + 3]) : (arr_10 [i_3])));
            }
        }
    }
    #pragma endscop
}
