/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_3 <= var_3);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = (~(arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 |= min((arr_1 [i_1]), (((((var_10 % (arr_4 [i_0] [1]))) / (arr_4 [i_2 + 2] [i_2 - 1])))));
                    var_15 = (min(((max(var_6, (arr_4 [i_2] [i_1])))), ((~(arr_3 [i_0] [i_0] [i_0])))));
                    var_16 = (arr_0 [i_1]);
                    arr_6 [i_0] = ((((min(((((arr_4 [i_0] [i_0]) || (arr_2 [i_1] [i_0])))), (((arr_2 [i_2] [i_2]) ? 1472408570 : var_8))))) ? (((2687347810 ^ 639) ? (arr_3 [i_0 - 2] [i_0 + 1] [i_2 + 1]) : (((-(arr_5 [i_0] [i_0] [i_0 - 1])))))) : (arr_0 [5])));
                }
            }
        }
        arr_7 [1] [i_0] = arr_1 [i_0];
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((-((-((82 ^ (arr_1 [i_3])))))));
        var_17 = (((~(((arr_3 [i_3] [i_3] [i_3]) ? (arr_10 [i_3]) : 1)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (arr_0 [12]);
        var_18 = (min(var_18, ((((arr_2 [i_4] [i_4]) ? (arr_0 [i_4]) : ((-(arr_1 [i_4]))))))));
        arr_15 [i_4] [i_4] = (((((-1 ^ (arr_1 [i_4])))) ? (arr_1 [i_4]) : (arr_13 [i_4])));
        var_19 = ((((!(arr_0 [i_4]))) || (((arr_12 [i_4]) && (arr_1 [i_4])))));
        var_20 = (((arr_1 [i_4]) >= (arr_5 [i_4] [i_4] [i_4])));
    }
    var_21 = (((var_4 | var_2) ? (min(var_11, -1)) : (min((var_11 % var_10), var_4))));
    #pragma endscop
}
