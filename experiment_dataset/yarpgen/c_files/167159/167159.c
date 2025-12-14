/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = var_3;
        arr_4 [i_0] = (((!var_1) ? ((((var_7 + 2147483647) << (((arr_2 [i_0]) - 1852806791))))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] |= (((max(var_8, 4121953376)) >> (((arr_3 [i_1]) - 1574))));
        arr_8 [i_1] = ((var_6 * ((~(arr_1 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = 0;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 |= (arr_3 [i_2]);
        arr_12 [i_2] = var_6;
        var_18 &= (arr_2 [i_2]);
    }
    var_19 = var_5;
    #pragma endscop
}
