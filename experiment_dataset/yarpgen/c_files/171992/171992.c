/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((((arr_0 [i_0]) % (arr_2 [i_0] [i_0])))) ? ((-92 ? 15648834434751694384 : 16320)) : var_8)) == ((((min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_11 = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5)))));
        arr_4 [i_0] = (~33554430);
        var_12 *= (min((((-123 ? 2040224406 : 17))), (arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
