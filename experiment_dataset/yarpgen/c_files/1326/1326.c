/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] &= (max((((arr_0 [i_0]) - var_2)), (max(var_3, 1310393170190050179))));
        arr_3 [i_0] [i_0] &= ((+(max((arr_1 [i_0]), var_8))));
        var_12 = ((((!(~var_5)))) >> (((arr_0 [i_0]) >> var_9)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_13 = arr_5 [i_1] [i_2];
            var_14 -= ((((!(arr_4 [i_1]))) ? ((((((arr_7 [i_1] [i_1]) ? (arr_6 [i_1] [7]) : (arr_5 [i_2] [i_1])))) ? (arr_5 [i_1] [i_2 - 1]) : (max(var_3, var_0)))) : (arr_8 [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_15 = (max(var_15, (((var_3 ? ((-(arr_6 [i_1] [i_3]))) : var_5)))));
            arr_13 [7] [7] [i_3] &= var_2;
        }
        var_16 = (arr_6 [12] [12]);
    }
    var_17 &= ((!(((((max(var_6, var_2))) ? (min(18446744073709551615, var_10)) : var_11)))));
    #pragma endscop
}
