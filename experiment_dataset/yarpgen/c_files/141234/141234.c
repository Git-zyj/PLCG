/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((!((((arr_4 [i_0 - 3]) | (arr_4 [i_0 - 3]))))));
            var_13 |= (max((((((arr_2 [i_0 - 2]) ^ (arr_3 [i_0] [i_0]))) % (arr_0 [i_0 - 3]))), ((max((arr_3 [i_1] [i_0 - 2]), (min(var_0, (arr_3 [9] [i_1]))))))));
            var_14 = ((~(max(((var_0 ? var_11 : (arr_1 [14] [i_0]))), (((var_11 <= (arr_3 [10] [i_1]))))))));
            var_15 |= ((!((((arr_0 [i_0 - 2]) % (arr_0 [i_0 + 1]))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_16 = (((arr_5 [i_0 + 1] [i_0 - 4]) >> (var_3 + 1449664220)));
            arr_10 [11] = ((!((((arr_7 [i_0 - 4] [i_0] [i_0]) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_7 [i_0 - 4] [i_0] [i_0]))))));
        }
        var_17 = (min(var_17, (!var_3)));
        var_18 = ((((((var_6 ? (arr_9 [i_0] [9]) : (arr_4 [i_0 - 3]))) | ((min(var_12, (arr_2 [i_0 + 1])))))) <= (min(((max(var_1, (arr_7 [i_0] [17] [i_0 + 1])))), (arr_3 [i_0] [i_0 + 1])))));
    }
    var_19 = (max(var_19, var_7));
    var_20 = (-28901 - var_10);
    var_21 = ((!(((((max(var_5, var_3))) ? (var_10 <= var_9) : ((max(1, var_2))))))));
    var_22 = (max(var_22, (((0 != (~var_6))))));
    #pragma endscop
}
