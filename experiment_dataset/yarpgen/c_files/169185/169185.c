/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (!var_2);
    var_18 = (((min(var_0, (!576460752303357952)))) || 54556);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = -var_15;
        var_19 = (4294967278 >= -1569360895);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = (max(var_20, var_8));
        arr_7 [i_1] [i_1] = (max(((-((var_13 ? var_1 : (arr_5 [i_1]))))), (((!((((arr_5 [i_1]) ? var_9 : var_6))))))));
    }
    var_21 &= ((~(!var_9)));
    #pragma endscop
}
