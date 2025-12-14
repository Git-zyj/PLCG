/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [6] = ((-((((((4294967295 ? -126 : 2789599918))) >= (max(var_1, var_16)))))));
        arr_4 [i_0] = (((var_12 / var_5) << (((((max(9, 8760)))) - 8751))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = var_14;
        var_19 = ((~(((!((max(2032, var_4))))))));
        var_20 = (min(((((~134217472) && (64 || -64)))), 127));
        arr_9 [i_1] = ((-535540224 ? (((387645457 ? 1152921504606846976 : 1))) : 209));
    }
    var_21 &= (min(((var_3 & ((max(195, 175))))), var_17));
    var_22 = ((((max(14, var_6)) / (var_2 / 2047))));
    #pragma endscop
}
