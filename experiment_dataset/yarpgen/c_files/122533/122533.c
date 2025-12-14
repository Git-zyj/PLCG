/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((-657112281159611619 >= var_3) ? var_10 : var_5)), ((65535 ? (max(var_3, 13446)) : 1))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [1] [i_0] = var_6;
        arr_4 [20] [20] &= -6437576070178357305;
    }
    #pragma endscop
}
