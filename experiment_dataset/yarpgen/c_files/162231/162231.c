/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((-36 ? -518065194 : ((var_13 ? 21059 : (arr_0 [i_0])))));
        var_18 = (min(var_18, (((((arr_1 [i_0]) ? 4194303 : -var_16))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_19 = 33554431;
        var_20 ^= (((((35241 ? ((max(-21048, 31))) : -4194300))) ? -4194298 : (var_15 | 34951)));
        arr_5 [i_1 - 1] = (((((arr_1 [i_1 - 1]) && (((11 % (arr_3 [i_1 + 2])))))) ? (((12 ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 + 3])))) : (min((arr_2 [i_1 + 3]), (arr_4 [i_1 + 1] [i_1 + 2])))));
    }
    var_21 = (min(var_21, (((16846622222200829572 ? 1751572581132325942 : (((((!var_7) < var_15)))))))));
    #pragma endscop
}
