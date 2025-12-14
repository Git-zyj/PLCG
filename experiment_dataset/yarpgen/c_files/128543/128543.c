/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_12 = (min(var_12, (((var_0 && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = var_1;
            arr_5 [i_1] [i_1] = ((arr_3 [i_0]) << (-40 + 60));
            var_14 = ((((var_3 || (arr_4 [i_0]))) ? var_6 : var_2));
        }
        arr_6 [i_0] = (((((((((arr_0 [i_0]) ? 63488 : (arr_0 [i_0])))) || ((max(var_5, var_9)))))) >> (((var_5 + 393109108) - 3396821149))));
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_2] = (min(((var_5 ? 2016 : (arr_10 [i_2 - 4] [i_3 + 1]))), ((-(((arr_12 [i_2 - 2]) ? 261888 : (arr_14 [0])))))));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_15 ^= ((((max((arr_20 [i_2 + 1] [i_5 - 2] [i_5] [i_4 - 2]), (arr_20 [i_2 + 1] [i_5 - 2] [i_5] [i_4 + 1])))) ? (arr_20 [i_2 - 4] [i_5 - 1] [i_5] [i_4 + 1]) : (var_8 > 231)));
                            var_16 = ((!(((arr_19 [i_2 + 2] [i_5 + 1]) > (arr_11 [i_2 + 1] [i_5 - 2] [i_4 - 3])))));
                        }
                    }
                }
            }
        }
        arr_22 [i_2 + 1] &= ((((!(arr_12 [i_2 - 4])))));
        arr_23 [i_2] = (((arr_13 [i_2] [i_2] [i_2]) ? var_10 : (((((var_3 ? 63488 : (arr_18 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))))))));
        var_17 = ((+((((arr_12 [i_2 + 1]) <= (((-(arr_10 [i_2 + 2] [i_2 - 2])))))))));
        var_18 = var_2;
    }
    var_19 = var_10;
    #pragma endscop
}
