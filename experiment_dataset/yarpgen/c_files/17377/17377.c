/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = var_1;
    var_19 = ((10338 ? 197 : 1));
    var_20 = (max(((max(55188, ((-8 ? -24981 : -8))))), var_15));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = ((((min(var_6, (arr_1 [i_0])))) ? ((~(((arr_0 [10]) ? (arr_1 [i_0]) : 55204)))) : ((((!55198) ? ((4 ? 55199 : -8)) : 10338)))));
        var_22 ^= (((((var_0 << (((arr_0 [i_0]) - 95))))) / (((~7583364511993541061) % (arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = var_15;
    }
    #pragma endscop
}
