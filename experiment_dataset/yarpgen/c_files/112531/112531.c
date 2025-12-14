/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~-0);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (!14595868524689146492);
        var_18 = (min((max(199, 219859073473993818)), (((255 >> (6328201841080758825 - 6328201841080758825))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (arr_2 [i_1]);
        var_20 = ((-(((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) ^ ((min(var_10, var_9)))))));
    }
    var_21 = (min(var_21, ((min((min(((207 ? var_6 : 68)), var_10)), var_6)))));
    #pragma endscop
}
