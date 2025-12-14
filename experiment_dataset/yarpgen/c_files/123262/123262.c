/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 + var_8) >> ((((((49652 ? 205372645480018849 : -9100)) + 7249220216309673692)) - 7454592861789692479)));
    var_11 |= 6719052151607871123;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((((arr_1 [i_0]) ? 1 : (arr_0 [1])))) ? (arr_1 [i_0 - 3]) : (arr_0 [i_0 - 1])))) ? (arr_1 [i_0]) : (((127 ^ 445276507) ? 764958375 : 957881428))));
        arr_3 [i_0 - 3] [i_0 - 3] = ((((((arr_0 [i_0 - 2]) + (arr_0 [i_0 + 1])))) ? 267386880 : ((62647 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
    }
    #pragma endscop
}
