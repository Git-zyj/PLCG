/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (var_4 >= var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_1] = 121;
            var_19 = ((!(((-23875 ? var_17 : 124)))));
        }
        var_20 |= var_10;
        var_21 -= var_13;
        var_22 = 20;
    }
    #pragma endscop
}
