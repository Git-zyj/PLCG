/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 ? (var_5 ^ var_0) : -1));
    var_14 &= var_2;
    var_15 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min((max(var_2, ((((arr_0 [1] [i_0]) ? (arr_0 [i_0] [1]) : (arr_2 [4] [i_0])))))), (arr_2 [i_0] [i_0])));
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 = (((arr_0 [i_0] [i_0]) ? ((-(arr_1 [17] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_1] [i_1] = ((((~(((arr_7 [13]) ? var_2 : var_4)))) | 1));
            arr_13 [i_1] [2] = ((((max((arr_0 [i_2 - 4] [i_1]), (((arr_7 [i_1]) ? (arr_1 [i_1] [17]) : 0))))) ? var_1 : (min((arr_10 [19] [i_2]), ((1 ? (arr_0 [17] [i_2]) : (arr_9 [i_1] [i_2 - 4])))))));
        }
        var_18 = ((-(((max(var_2, 1)) ^ (arr_11 [i_1] [6] [i_1])))));
        arr_14 [i_1] = var_4;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_17 [i_3] |= (((arr_2 [i_1] [i_3]) ? (((((-(arr_5 [i_3])))) ? (((!(arr_10 [i_1] [i_3])))) : (((arr_8 [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_2 [i_1] [i_3]))))) : (arr_7 [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_24 [i_3] |= (arr_21 [i_5] [i_4 - 1] [i_3]);
                        var_19 |= ((((min(7, ((((arr_19 [i_3] [i_5]) & (arr_0 [i_3] [i_5]))))))) ? (max((min((arr_9 [i_3] [i_3]), (arr_11 [i_5] [i_3] [i_4]))), (arr_5 [i_5]))) : (((var_4 ? (((min(var_4, (arr_7 [18]))))) : (min(3344714965783438178, 1)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
