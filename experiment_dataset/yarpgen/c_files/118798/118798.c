/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_15 = (73 | 183);
        var_16 += ((-(((arr_2 [i_0 + 2]) ^ (((min(3, 3))))))));
        arr_4 [i_0] = ((((min(((~(arr_2 [i_0]))), (var_6 < var_12)))) && (var_1 <= -3)));
    }
    var_17 = (405512344 ^ 183);
    var_18 = ((-1 * (max(var_1, 3))));
    #pragma endscop
}
