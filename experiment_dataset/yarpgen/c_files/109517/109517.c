/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = var_12;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [17] = ((arr_0 [7]) >> (((var_2 * var_6) - 16713333708956152974)));
        arr_4 [i_0 - 1] [i_0 + 1] = ((((((arr_2 [i_0 - 1]) ^ (arr_2 [i_0 - 1])))) || ((var_4 == (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = var_5;
    }
    #pragma endscop
}
