/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 &= ((((min((!15597), (arr_0 [i_0 - 1])))) ? (!var_3) : var_7));
        var_16 = (max(var_16, (((~(((arr_1 [i_0]) ? var_13 : (((max(1326, (arr_0 [i_0]))))))))))));
        var_17 -= (arr_1 [i_0]);
        var_18 *= ((992485684157646559 < ((min((arr_1 [9]), (arr_0 [i_0 - 1]))))));
    }
    var_19 = ((((min(var_6, 20624))) ? (!var_9) : (min(1, ((var_12 ? var_5 : var_9))))));
    #pragma endscop
}
