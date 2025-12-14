/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_10 = (max(var_10, (((((((arr_2 [i_0 - 4]) % (arr_2 [i_0 + 1])))) ? 5785 : ((((arr_2 [i_0 - 4]) >= (arr_2 [i_0 - 3])))))))));
        var_11 = (min((((((170 ? 18014398508957696 : 3883837694)) != (((max(1, var_0))))))), (arr_1 [i_0 + 1] [i_0 + 1])));
    }
    var_12 = ((((~(var_7 - 119))) >> (var_4 - 108)));
    var_13 = var_7;
    var_14 = ((((((((115 ? var_8 : var_4))) == var_5))) <= ((~(131 | var_4)))));
    var_15 = var_0;
    #pragma endscop
}
