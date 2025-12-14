/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((((max(var_11, var_12))) ? var_4 : (35892 ^ var_9))), var_8);
    var_17 = 29643;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((max((var_13 & var_10), ((max(var_4, 0))))) + (((1006632960 && 16224606650285466909) & (min(var_4, (arr_1 [i_0 - 1])))))));
        var_18 = (~var_6);
        var_19 = (((!var_10) && -29651));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_20 = -1771460428319700485;
        var_21 = (((((-466728013 ? 250 : 35892) >> (35892 - 35892)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_22 = (~5);
        var_23 = (~var_1);
        arr_9 [i_2] = (24576 ? var_0 : var_4);
        var_24 = -5331373958475662771;
    }
    var_25 = (!var_15);
    #pragma endscop
}
