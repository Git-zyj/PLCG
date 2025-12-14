/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 12;
    var_12 = ((18446744073709551615 | (786432 >= -1044587982)));
    var_13 = var_2;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_14, ((min((((min((arr_1 [i_0]), (arr_1 [i_0]))))), ((~(min(6198683834811871678, (arr_0 [i_0 - 4] [6]))))))))));
        var_15 -= ((-((((((arr_1 [i_0]) | var_5))) ? ((~(arr_0 [12] [12]))) : (min((arr_0 [0] [0]), (arr_1 [i_0])))))));
    }
    var_16 = ((((min(var_4, 4976)))) ? (((((var_7 % 9223372036854775807) <= var_6)))) : var_6);
    #pragma endscop
}
