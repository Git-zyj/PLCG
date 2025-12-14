/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((((var_3 != var_13) != (~var_7))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 &= (~((((arr_0 [i_0]) != (arr_2 [i_0] [i_0])))));
        var_21 = ((((((!(arr_0 [i_0 + 1]))))) != (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2])))));
        arr_4 [i_0 + 2] = ((+((+((max((arr_3 [i_0]), (arr_3 [i_0]))))))));
    }
    #pragma endscop
}
