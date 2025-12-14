/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 = (min((min(((min(0, 214368616))), (max(var_13, var_11)))), ((max(-214368625, 214368617)))));
        arr_3 [20] = (min(((max((max(var_11, 21626)), (max(var_12, 214368626))))), (max((max(-214368589, (arr_2 [20]))), (max((arr_1 [22]), var_2))))));
        var_19 -= (max((max((max((arr_0 [1]), (arr_1 [8]))), (min((arr_1 [3]), var_10)))), (min((min(var_10, var_6)), (max(var_0, (arr_0 [20])))))));
        arr_4 [16] = (max(((max((min((arr_0 [16]), var_4)), (max((arr_0 [20]), 2147483647))))), (max(8256384586536027232, 227))));
        arr_5 [9] = (max((max((max((arr_1 [20]), 134184960)), (min((arr_2 [7]), 17100)))), (min(((max(-214368618, -21626))), (max((arr_1 [7]), (arr_1 [4])))))));
    }
    var_20 = (max((min(((max(var_4, var_6))), (max(var_0, 10168159414539167598)))), ((max(((min(var_16, var_1))), (max(var_11, var_11)))))));
    #pragma endscop
}
