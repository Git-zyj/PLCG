/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((4294967282 + 1175508767), 16777215))) ? ((((!(~var_8))))) : (((var_8 <= var_0) ? (~843140431) : var_7)));
    var_11 = (max(var_11, ((-((min(371514874, var_8)))))));
    var_12 = (min(var_12, var_9));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (-(~var_9));
        arr_5 [i_0] = min((max((((arr_1 [i_0] [7]) ? (arr_2 [i_0]) : (arr_0 [i_0 - 2]))), var_8)), (((arr_1 [i_0 + 1] [i_0 - 2]) ? var_2 : (min(600216490, var_0)))));
        var_13 = var_2;
    }
    #pragma endscop
}
