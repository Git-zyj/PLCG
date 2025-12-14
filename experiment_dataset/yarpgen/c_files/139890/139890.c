/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(((min(0, -1503789940))), var_6)), var_10));
    var_14 += (min(((((max(0, 169))) >> (122 - 111))), -2452762448973056600));
    var_15 = (max((((((min(4115114891, 1))) <= var_7))), var_1));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [19] = -451814445;
        arr_5 [i_0] = 187;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 = (max(var_16, (arr_8 [i_1 + 1])));
        var_17 = (min(var_17, ((((~(min(-21840, 2147483647))))))));
    }
    var_18 = -var_10;
    #pragma endscop
}
