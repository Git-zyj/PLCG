/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? ((((((((arr_1 [i_0]) ? var_0 : 8188911225025827320)) + 9223372036854775807)) >> (1812272141 - 1812272135)))) : ((3672847267050930161 ? (arr_0 [i_0]) : (~2482695162)))));
        var_12 = var_4;
    }
    var_13 = var_9;
    var_14 -= (var_6 ? (~1812272136) : ((((((((-3174 + 2147483647) << (13228957355382698147 - 13228957355382698147)))) > ((var_8 ? var_4 : 13228957355382698147)))))));
    var_15 += ((-(var_10 == 1812272133)));
    #pragma endscop
}
