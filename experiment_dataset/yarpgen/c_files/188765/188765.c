/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, ((((!0) == (~2389752187))))));
        var_19 |= -1431573071;
        var_20 = ((((-(arr_2 [i_0])))) ? ((~(arr_1 [i_0 - 1]))) : (((!(arr_1 [i_0 - 1])))));
        var_21 = ((-((1966080 ? 18446744073709551591 : -1966075))));
    }
    var_22 = var_2;
    var_23 |= (~-11713506378544555225);
    #pragma endscop
}
