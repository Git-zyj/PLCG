/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(((((max(997394074, -1))) ? -1 : var_1)), (((((max(var_6, var_5))) ? (min(var_5, var_2)) : var_10)))));
        arr_3 [i_0] [i_0] = ((((-(max(var_3, var_8)))) & ((6 >> (3297573221 - 3297573196)))));
    }
    var_13 = max(((max((!var_6), -var_9))), ((2909361294 << (-7 + 28))));
    var_14 = ((((min(-var_6, (var_6 <= var_7)))) <= (((min(var_6, var_7)) << (((max(var_7, var_6)) - 13937350087642151091))))));
    var_15 ^= ((((max(618282663, 3676684653))) ? (((-(var_4 != var_1)))) : ((((min(var_4, var_8))) ? ((var_3 ? var_7 : var_4)) : (var_4 && var_1)))));
    #pragma endscop
}
