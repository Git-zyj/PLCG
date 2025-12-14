/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max((!-110), (max(14682, 65535))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = (min(var_17, (((+((((((arr_2 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_1])))) ? ((((arr_0 [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_1 [i_0])))) : (((arr_3 [i_1] [i_1]) ? (arr_4 [i_0]) : (arr_3 [i_0] [i_1]))))))))));
            var_18 = (min(var_18, ((~((~(((arr_1 [2]) ? (arr_4 [i_0]) : (arr_1 [1])))))))));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_0] = (arr_7 [i_0] [0] [i_2]);
            arr_12 [i_0] [i_2 - 2] [i_2] = 13877;
            var_19 = (min(((min((arr_1 [i_2 - 1]), (arr_1 [i_2 + 1])))), (((arr_6 [i_0] [i_2] [i_0]) ? (arr_2 [i_2 - 2] [i_2 + 1]) : (arr_9 [i_2])))));
            arr_13 [i_2] = (((((~((min((arr_7 [i_0] [i_0] [i_0]), (arr_10 [i_0]))))))) ? ((min(1, 1))) : (((arr_2 [i_0] [i_2 + 1]) ? (arr_2 [i_0] [i_2 - 2]) : (arr_2 [i_0] [i_2 + 1])))));
            arr_14 [i_0] [7] = (arr_6 [i_0] [i_2 - 2] [i_0]);
        }
    }
    var_20 = var_8;
    #pragma endscop
}
