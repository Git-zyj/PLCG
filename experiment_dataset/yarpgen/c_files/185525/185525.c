/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 += var_6;
    var_15 *= ((var_5 ? ((var_3 ? (max(140737486258176, -1847364294)) : var_5)) : (((((13132388681653082919 ? -116867382 : 4770)) & ((var_5 >> (var_1 - 13172086110693379978))))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((arr_0 [i_0 + 1] [i_0 - 1]), (((arr_0 [i_0 + 1] [i_0 - 1]) + -2060622290))));
        arr_5 [i_0] = (min(-116867382, ((var_6 ? 0 : (arr_3 [i_0 - 1] [i_0 + 1])))));
        var_16 = (max(var_8, (max((arr_3 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0])))));
    }
    #pragma endscop
}
