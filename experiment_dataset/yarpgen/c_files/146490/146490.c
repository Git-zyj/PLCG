/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_5;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1]))), ((var_10 * (arr_0 [i_0])))));
        arr_3 [9] = (max((arr_1 [i_0 - 2]), (max((arr_1 [i_0 + 1]), (arr_0 [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [16] &= ((~(arr_4 [16])));
        arr_7 [i_1] [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 = (((((!var_10) ? (((arr_8 [i_2] [i_2]) ? 2183223525 : 1)) : ((((arr_8 [i_2] [i_2]) ? 1 : (arr_4 [i_2])))))) * (!var_10)));
        arr_10 [0] = (((min((arr_9 [i_2]), (var_11 ^ var_1))) <= var_1));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [17] [i_4] [16] = ((var_0 % (((arr_4 [i_3]) ^ ((-1 * (arr_13 [1] [i_3] [10] [i_5 - 1])))))));
                        var_16 = max((((arr_18 [1] [1] [11] [1]) ? (((min((arr_4 [i_2]), (arr_8 [4] [i_2]))))) : (arr_12 [1] [i_5 - 1]))), (((!(~-72057594037927936)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
