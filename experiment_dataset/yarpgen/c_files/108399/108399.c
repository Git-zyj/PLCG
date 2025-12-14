/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((min(((var_6 ? -17749 : var_10)), ((670120231503768355 ? 11 : var_8)))) != (((((33 >= 64) < var_10))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (~5);
        var_13 = (((!9009276376376415296) ? ((-((max(28, -119))))) : (!var_8)));
        var_14 &= (max(((min(var_3, (!-87)))), (max(((max(124, 12))), (arr_1 [i_0])))));
    }
    var_15 = (min(-var_2, 15));
    var_16 = (((!((max(var_0, -272539693))))));
    var_17 = (min(var_17, (28 | 1)));
    #pragma endscop
}
