/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((1 ? -24 : 14690779005355630309)) - (((arr_3 [i_0]) ? (min(3755965068353921307, 3755965068353921307)) : var_7))));
        var_12 = (((min(493141396, 32676)) | ((max((arr_1 [i_0]), var_7)))));
    }
    var_13 = ((+((var_10 ? (var_1 % 5) : (~3755965068353921307)))));
    var_14 &= (max(var_7, ((var_11 ? var_1 : (!var_4)))));
    var_15 = (max(var_15, var_2));
    #pragma endscop
}
