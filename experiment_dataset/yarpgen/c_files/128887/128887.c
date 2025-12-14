/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 += var_6;
        var_16 = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 = (((((min(8192, (arr_5 [i_1]))))) <= (((min(-1975368583842551990, 5)) | 64))));
        var_18 |= ((-1261361736 | ((((-63 <= (((var_12 <= (arr_5 [1]))))))))));
    }
    var_19 = var_1;
    var_20 = ((((min(var_13, (min(var_11, -1975368583842551990))))) ? ((min(var_8, var_14))) : var_4));
    #pragma endscop
}
