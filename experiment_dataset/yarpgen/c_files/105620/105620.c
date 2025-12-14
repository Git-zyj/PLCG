/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (65533 | 9223372036854775788)));
    var_11 *= var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [4] &= -8336;
        arr_4 [i_0] = (min((arr_2 [i_0]), (((-1 < (arr_1 [i_0]))))));
    }
    var_12 = (min((((((var_2 ? var_8 : 18446744073707454464))) ? (1 + var_0) : ((min(1, var_7))))), (~-1)));
    var_13 = ((-var_7 ? 8335 : ((((min(var_1, var_5)) >= (((var_2 ? var_4 : var_5))))))));
    #pragma endscop
}
