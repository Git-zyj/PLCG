/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min((((var_0 < var_4) * 220001910)), var_8));
    var_17 = ((var_4 ? var_5 : var_1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = 6224931065751628952;
        arr_2 [i_0] = ((14421458478647284283 ? ((max(13086420845380805046, 40302))) : (((1761842117 >= (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
