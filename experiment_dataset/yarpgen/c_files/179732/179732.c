/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-32752 == -1544);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (((arr_0 [i_0 + 1]) % ((-(((0 <= (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (arr_2 [i_1] [i_1]);
        var_22 = (max((arr_3 [i_1]), ((min(-2147483646, 1)))));
        arr_6 [i_1] = ((((min(((var_16 ? (arr_2 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (arr_1 [i_1])))) ? -20206 : (3221225472 > 274877906943)));
    }
    #pragma endscop
}
