/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 |= (((!127) - 11033));
        arr_3 [i_0] = (max((arr_0 [6]), (min(((1046712018 ? 11033 : -9139)), (arr_2 [i_0] [i_0])))));
        arr_4 [9] = ((((~((2611211794769035024 >> (1138116581 - 1138116535))))) >= (((((arr_1 [1]) != 65535))))));
    }
    var_21 = (max(2147483647, 19994));
    var_22 -= var_0;
    #pragma endscop
}
