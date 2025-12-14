/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) + (((!((32767 <= (arr_0 [i_0]))))))));
        var_20 |= (max((arr_0 [i_0]), (((arr_1 [i_0]) / ((-(arr_0 [i_0])))))));
        arr_2 [i_0] = 116;
        var_21 *= (((!((max((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    var_22 = (max(((((-69 ? 32767 : -17411)) & var_7)), var_1));
    #pragma endscop
}
