/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_0 ? (~var_7) : 27374)), (var_3 | var_1)));
    var_16 = ((var_0 <= ((max(var_13, ((1 >> (27371 - 27347))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((arr_1 [i_0 + 2]) ? ((var_2 >> (var_5 - 57))) : 1))) ? (((1 || 27374) ? ((-27388 ? 15873647858020079345 : (arr_1 [i_0]))) : ((var_6 * (arr_0 [i_0] [i_0]))))) : (((var_1 >> (((27376 + 159) - 27514))))))))));
        var_18 = (min((min((arr_0 [i_0] [i_0]), (arr_2 [i_0 + 2] [i_0]))), (((((27376 ? (arr_1 [i_0]) : 0))) ? (min((arr_2 [i_0] [4]), var_8)) : ((((arr_1 [0]) ? 27374 : -27381)))))));
        var_19 = (((((-((var_11 ? var_4 : var_8))))) + (((arr_0 [i_0 - 1] [i_0 - 1]) ? var_6 : (arr_0 [i_0 + 1] [i_0 - 1])))));
    }
    #pragma endscop
}
