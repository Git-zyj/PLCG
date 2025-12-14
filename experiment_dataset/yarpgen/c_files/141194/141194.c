/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_14 -= 34439;
        arr_2 [13] = (max(1152270061, ((((var_6 != var_3) == (((!(arr_1 [i_0 + 2])))))))));
        var_15 |= ((!((min((arr_0 [i_0 - 3]), (arr_1 [i_0 + 1]))))));
        var_16 = (min(var_16, (var_11 * -3142697235)));
    }
    var_17 = (max(var_17, 74));
    #pragma endscop
}
