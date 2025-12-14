/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_20 = (max(var_20, (max((~var_6), ((max((!2768801206406633258), -30170)))))));
        arr_3 [i_0] = (-32767 - 1);
        arr_4 [i_0] = var_9;
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (((((1940135634 ? 2354831661 : 15677942867302918358))) ? (max((max((arr_5 [i_1] [i_1]), 17)), var_0)) : (((~(arr_5 [i_1 + 3] [i_1]))))));
        var_21 -= ((+(((arr_6 [i_1 - 3]) ? var_17 : (arr_6 [i_1 - 2])))));
    }
    #pragma endscop
}
