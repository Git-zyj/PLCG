/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (max(123, 16));
        arr_5 [3] = ((((((arr_3 [i_0]) > var_5))) - (((((((arr_0 [i_0]) ^ (arr_1 [i_0])))) >= (max(var_2, (arr_3 [7]))))))));
    }
    var_13 &= 14;
    var_14 = (((((18446744073709551598 >> var_9) != (((var_10 ? var_1 : 143)))))) != ((((var_1 ? var_0 : var_3)))));
    #pragma endscop
}
