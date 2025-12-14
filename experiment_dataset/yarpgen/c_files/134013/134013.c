/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 >> (var_9 - 2005428113));
    var_14 = var_11;
    var_15 ^= (~var_5);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0 - 1] [i_0]);
        var_17 = (min(var_17, (~var_7)));
        arr_4 [10] = ((((var_6 ? 255 : (arr_2 [i_0 - 1])))) ? var_12 : ((((arr_1 [i_0] [i_0]) != (arr_2 [i_0 - 1])))));
        arr_5 [0] [i_0] = ((((arr_0 [i_0]) ? 12618150785282938093 : 17142)));
        arr_6 [i_0] = ((((((arr_2 [i_0]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))) != var_4));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 - 1] = (((arr_8 [i_1 - 1]) ? ((var_3 ? (arr_2 [i_1]) : 1)) : (arr_7 [6])));
        arr_10 [1] = (((((17125 * (arr_8 [i_1])))) ? var_11 : (arr_8 [i_1 - 1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_18 [i_4] = (((arr_11 [i_1 - 1] [i_1 - 1]) != (((~(arr_0 [10]))))));
                        var_18 ^= ((~((((arr_11 [i_1] [i_1]) > (arr_7 [i_1 - 1]))))));
                        arr_19 [i_1] [i_1] [i_1] [i_4] [i_4] = ((12618150785282938078 ? 1 : -12069));
                    }
                }
            }
        }
    }
    #pragma endscop
}
