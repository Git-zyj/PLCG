/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_7;
    var_20 = (max(var_20, (((-(((255 & (-127 - 1)))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = var_0;
        var_22 |= -var_10;
        var_23 = ((((max(var_9, 1))) ? (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : var_7));
        var_24 = (i_0 % 2 == 0) ? ((max(var_8, (((arr_3 [i_0 + 1] [i_0]) << (((arr_3 [i_0 - 1] [i_0]) - 63))))))) : ((max(var_8, (((arr_3 [i_0 + 1] [i_0]) << (((((arr_3 [i_0 - 1] [i_0]) - 63)) - 14)))))));
        var_25 = ((-(((arr_3 [i_0] [i_0]) % (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_26 = (((var_14 - -var_16) ? -5606103370284044931 : -var_10));
        var_27 = (max(var_3, ((var_9 ? 5606103370284044938 : -5606103370284044953))));
    }
    var_28 = (((((((((var_5 ? -5606103370284044931 : var_1))) || var_17)))) * (max(var_10, ((245635430 ? -5606103370284044939 : 5606103370284044931))))));
    #pragma endscop
}
