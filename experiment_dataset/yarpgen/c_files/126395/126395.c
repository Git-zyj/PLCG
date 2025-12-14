/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(var_5, var_4)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (~-var_8);
        arr_3 [i_0 - 1] = 16513;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_12 = (min(var_12, (arr_0 [i_1 - 1] [i_2 + 1])));
            var_13 = (arr_8 [i_1] [i_1] [i_1]);
            var_14 = (max(-81, (max(((2400375306 ? 106 : 0)), 638038264))));
        }
        arr_9 [i_1] = (((arr_1 [i_1]) ? (((!63) ? (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_6 [i_1]))) : (arr_6 [i_1]))) : (arr_0 [i_1 + 1] [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] = (((arr_10 [i_3] [i_3]) << (1067695744 - 115)));
        var_15 = (max(var_15, (((((((arr_10 [i_3] [i_3]) ? 1 : var_8))) ? (((arr_11 [i_3]) ? var_2 : (arr_10 [i_3] [i_3]))) : (arr_10 [i_3] [i_3]))))));
        var_16 = (arr_11 [i_3]);
        arr_13 [i_3] = ((!(arr_10 [i_3] [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = (arr_11 [i_3]);
                        arr_23 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 + 1] = ((var_10 ? (arr_19 [i_3] [i_4] [i_3]) : (arr_15 [i_5 + 1] [i_6 - 4] [i_6 - 4])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_17 = ((~(arr_20 [i_7 - 1] [i_7 + 2] [i_7 + 1] [i_7 + 1])));
        var_18 = ((!(arr_14 [i_7 + 2])));
        var_19 = 67;
        arr_26 [i_7] = (arr_24 [i_7]);
        arr_27 [i_7 - 1] [i_7] = ((var_8 ? (((-(arr_11 [i_7 + 1])))) : (((arr_11 [i_7]) ? var_4 : (arr_19 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
    }
    var_20 &= (max(var_3, (((1300025751909124244 == 2140424624) ? var_5 : var_5))));
    var_21 |= ((((((var_7 * var_2) ? var_1 : 16662188697899636050))) ? (~-1708255203) : var_2));
    #pragma endscop
}
