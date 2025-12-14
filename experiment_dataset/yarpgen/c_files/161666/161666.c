/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_11) ? (~var_10) : ((-(var_5 > var_13)))));
    var_15 = (max((max(6409652381636566512, -var_7)), var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, (((((!(arr_1 [i_0]))) ? ((max(-6409652381636566516, (arr_2 [i_0])))) : ((((max(366341508, (arr_0 [i_0])))) % (((arr_1 [i_0]) ? (arr_2 [1]) : (arr_1 [i_0]))))))))));
        var_17 = ((((max((~var_3), -27722))) || ((((arr_2 [i_0]) / (arr_1 [i_0]))))));
    }
    #pragma endscop
}
