/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(var_4, var_9))) << (var_14 - 22))) != (!-var_12)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 = (min((!var_10), (arr_2 [i_0] [i_1] [i_0])));
            var_17 = arr_0 [i_0];
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            arr_6 [i_2] &= ((~(arr_2 [i_0] [i_0] [i_2])));
            arr_7 [i_0] [i_0] [i_0] = ((((((arr_3 [i_2 - 2] [20] [i_2]) - (arr_3 [i_2 - 2] [i_0] [i_0])))) ? ((~(((!(arr_2 [i_0] [i_0] [i_0])))))) : ((-(arr_3 [i_0] [i_0] [i_0])))));
            arr_8 [i_0] [i_0] = (((0 / 40) ? 254 : ((min(16772, ((((arr_1 [i_0]) <= 18376))))))));
        }
        var_18 = ((var_14 / (arr_2 [i_0] [i_0] [i_0])));
        var_19 = (min((((arr_3 [i_0] [i_0] [i_0]) | (arr_0 [i_0]))), ((max((max(var_11, var_14)), (arr_2 [i_0] [i_0] [i_0]))))));
        arr_9 [i_0] = (((~(arr_3 [i_0] [i_0] [i_0]))));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        var_20 = (max(((((15768 ? (arr_5 [22]) : var_8)) >> (var_4 - 190))), (arr_5 [14])));

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            arr_14 [i_3 - 3] = ((((((~3) ? ((~(arr_0 [i_3 - 3]))) : (((arr_10 [5]) | 25336))))) ? ((max((arr_1 [i_4]), (arr_10 [i_3 + 1])))) : (((((arr_1 [i_4]) & var_10)) ^ ((max(var_4, (arr_3 [i_3] [i_3] [20]))))))));
            var_21 = (max(((var_14 / (arr_13 [i_3 - 3]))), 92));
        }
        var_22 = ((-(arr_11 [i_3])));
        var_23 = (arr_10 [i_3]);
    }
    #pragma endscop
}
