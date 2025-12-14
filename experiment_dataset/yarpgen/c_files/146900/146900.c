/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((!0), (((var_6 % (min(435519208, var_2)))))));
    var_11 -= ((((var_2 - (var_4 < var_0)))) ? (((-((var_1 ? var_9 : var_6))))) : (((var_3 <= var_5) ? 10425314748132980549 : ((18446744073709551612 ? 3859448079 : 1)))));
    var_12 ^= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((31385 ? 4 : 39403)));
        var_13 ^= (!var_4);
        var_14 = (arr_2 [i_0] [i_0]);
        var_15 = var_9;
        var_16 = 3859448079;
    }
    #pragma endscop
}
