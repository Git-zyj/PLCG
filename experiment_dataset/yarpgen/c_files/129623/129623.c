/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [5] [5] = -962998482;
        var_11 = ((6421 << (9223372036854775786 - 9223372036854775784)));
        arr_4 [i_0] = max((!-5919053593346418750), ((-(max(1993067985, 1993067958)))));
    }
    var_12 = var_7;
    #pragma endscop
}
