/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_12 + 28869) || var_10));
    var_18 = var_2;
    var_19 = 16528392690300992263;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = var_1;
        var_21 = (max(var_5, (~-29)));

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_22 = ((-(((!4294967289) / var_9))));
            var_23 = (((((134838167623558457 & var_10) << (((2310456952 - var_1) - 841776890)))) << (var_7 - 3058493556452762010)));
        }
    }
    #pragma endscop
}
