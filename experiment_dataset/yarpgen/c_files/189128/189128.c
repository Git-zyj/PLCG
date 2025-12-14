/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((3 - var_5) + (var_12 + var_9))) + (((1 + var_9) - (1 + var_5)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (((((((2038563662 == (arr_1 [i_0])))) - (((arr_1 [i_0]) - var_7))))) || (((912080251 & var_12) < ((((var_8 == (arr_1 [i_0]))))))));
        arr_2 [i_0] = (((((((3 / (arr_1 [i_0]))) / (((arr_1 [i_0]) - 17))))) + (((15 + -17) / (4294967287 * 1595576655)))));
    }
    var_15 = ((((var_11 * var_3) / (17147617417407268086 / var_10))) * ((((-3 * 96) * (var_5 / var_7)))));
    #pragma endscop
}
