/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? var_9 : ((268435200 ? var_0 : var_6))));
    var_12 = var_7;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_13 = (max(var_13, (max(9878615429174587148, ((827160353219485363 ? 18263120917078185782 : 8568128644534964462))))));
        var_14 = (17664280552942083545 ? 576460752303423487 : 9878615429174587139);
        var_15 += (((((arr_1 [i_0 + 2]) / (arr_1 [i_0 - 1])))) ? (arr_0 [i_0]) : var_5);
        arr_2 [i_0] = (6302034339355799944 ? 6268921900687290803 : 8333358837095095813);
        arr_3 [i_0] [i_0] = (72057594037927920 ? 9062622042655847469 : 11249485811944429452);
    }
    var_16 ^= (((((var_4 / var_1) ? -var_1 : -var_2))) ? (var_6 == var_10) : (((var_8 ? var_7 : var_3))));
    var_17 = var_1;
    #pragma endscop
}
