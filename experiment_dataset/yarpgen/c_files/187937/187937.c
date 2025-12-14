/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [6] [1] = (((arr_2 [5] [i_1 - 1]) ? (min((28923 != var_2), (arr_5 [i_1]))) : (((-(((var_8 >= (arr_1 [i_1 - 1])))))))));
            var_10 = (((min((arr_2 [i_1 + 1] [i_1]), (arr_2 [i_1 + 1] [i_1 + 1]))) ^ (((min(1, (min((arr_4 [i_1]), 33))))))));
        }
        var_11 = (max(var_11, (((+(((arr_4 [i_0]) + (arr_3 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_2 [i_2] [i_2]) ? (min((min((arr_5 [i_2]), (arr_0 [i_2]))), (arr_4 [i_2]))) : ((((~7944517721142637228) ? (((-(arr_4 [i_2])))) : 7944517721142637228)))));
        var_12 = (((1955006526233818332 & 14768967082836636198) ? 0 : 7944517721142637228));
        var_13 = ((((((max(-184548222, 45))) != (min(var_7, var_8)))) && (((((((!(arr_0 [i_2]))))) & (max(var_6, var_9)))))));
        var_14 = (((min((min((arr_5 [13]), var_2)), ((min(0, var_5))))) < (((((max(var_7, (arr_0 [i_2])))) % ((1 ? 1 : 0)))))));
        arr_11 [i_2] [i_2] = var_4;
    }
    var_15 = (((((max(-184548202, var_0)) ? ((max(1485787631, -1732944077))) : (var_7 / var_2)))));
    #pragma endscop
}
