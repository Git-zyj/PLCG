/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((var_3 < var_6), (max(var_4, var_14))))) << ((((var_9 ? var_12 : 6)) / var_12))));
    var_19 = (max((((var_0 & var_15) ? 65518 : 1743630147474599864)), var_15));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [5] [12] = min((min(((var_2 ? 0 : 6800479449459659564)), ((max(var_17, var_10))))), (min(2023281725, var_6)));
        var_20 = (max(((var_4 ? 18 : (max(var_15, var_0)))), var_3));
        var_21 = var_0;
    }
    var_22 = var_5;
    var_23 *= var_1;
    #pragma endscop
}
