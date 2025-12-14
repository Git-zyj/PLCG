/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] |= (arr_2 [i_0]);
        var_16 ^= ((((!(arr_0 [i_0]))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((((arr_1 [i_0] [15]) <= (arr_1 [i_0] [i_0])))))));
        arr_4 [19] = (arr_2 [i_0]);

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_17 = (((min(((min((arr_2 [i_0]), (arr_5 [i_0] [i_1] [i_0])))), (max((arr_5 [i_0] [i_0] [i_1 - 2]), (arr_0 [i_0]))))) - ((((arr_6 [i_0] [i_0] [i_1]) + ((((arr_5 [i_1] [i_1] [i_1]) - (arr_5 [9] [9] [i_1 + 1])))))))));
            var_18 ^= ((((max(((((arr_2 [i_0]) / (arr_6 [i_1] [i_1] [i_0])))), (((arr_6 [i_0] [i_0] [i_1 - 1]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [12])))))) || (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) <= (((max((arr_2 [i_0]), (arr_2 [i_0])))))))));
            var_19 = (max(var_19, (((((min(((((arr_1 [12] [i_0]) < (arr_5 [i_0] [i_0] [i_0])))), (((arr_2 [i_0]) & (arr_0 [i_0])))))) ? (((max((arr_0 [i_0]), (arr_5 [i_0] [i_0] [i_1 - 1]))) << (min((arr_1 [i_0] [i_1 + 1]), (arr_2 [i_0]))))) : (max((arr_6 [i_0] [i_1 - 1] [i_1 - 1]), (arr_1 [i_0] [i_0]))))))));
            var_20 = (max(var_20, ((((max((arr_6 [16] [i_1 - 1] [i_1 - 1]), (arr_6 [i_0] [i_1 - 1] [i_1 - 1]))) == (max((arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]), (arr_6 [i_0] [i_1 - 1] [i_1 - 2]))))))));
            var_21 *= (((min(((((arr_5 [i_0] [i_0] [i_1 - 1]) == (arr_5 [i_0] [i_0] [i_0])))), (min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1 - 2] [i_1])))))) ? (min((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((arr_2 [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_1 [i_1] [i_1 - 1]))))) : (arr_1 [i_0] [i_0]));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_22 = (max(var_22, ((min((max((arr_1 [i_2 + 1] [i_2 + 1]), (arr_1 [i_2 + 1] [i_2 + 1]))), ((((((arr_1 [15] [15]) ^ (arr_6 [i_0] [i_0] [i_2 + 1])))) ? (min((arr_0 [i_2]), (arr_7 [i_0] [i_0] [i_0]))) : ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_6 [2] [22] [2]) : (arr_7 [i_0] [i_2 - 1] [i_2])))))))))));
            var_23 = (arr_6 [i_0] [i_2 - 2] [i_2 - 1]);
            var_24 = (max(var_24, ((((((((arr_7 [i_2] [i_2] [i_2]) ? (arr_8 [i_0] [i_2 - 2] [i_0]) : (arr_8 [i_0] [i_0] [i_0]))))) ? (min(((max((arr_2 [i_0]), (arr_6 [i_0] [i_0] [i_0])))), (min((arr_7 [i_0] [i_0] [i_2 - 1]), (arr_0 [i_0]))))) : (((arr_0 [i_2]) ? (((arr_5 [i_0] [i_0] [i_0]) | (arr_0 [i_0]))) : (((min((arr_7 [i_0] [i_0] [i_0]), (arr_2 [i_0]))))))))))));
            var_25 = (max(var_25, ((min(((((((arr_8 [i_0] [i_0] [i_2]) ^ (arr_8 [i_0] [1] [1])))) ? (arr_7 [i_0] [i_0] [i_2 + 1]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_2]))))), (arr_0 [i_0]))))));
        }
        var_26 = (max(var_26, (((((max(-322879883, 4294967280)) / ((max((arr_5 [i_0] [i_0] [i_0]), (arr_2 [i_0]))))))))));
    }
    var_27 = (min(var_27, (((((max((var_5 / var_10), (var_3 >= var_5)))) + var_1)))));
    #pragma endscop
}
