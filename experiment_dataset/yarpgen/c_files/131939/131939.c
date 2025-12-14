/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min(var_18, (!1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (-32767 - 1);
        arr_3 [i_0] [i_0] = (min(10512, (min(var_13, -286170327))));
        arr_4 [i_0] = (((((286170326 ? ((1048575 ? 1869422721 : var_18)) : ((1122185600 ? -1869422732 : -947628963))))) ? (min((((286170306 ? 286170327 : 521))), 2630436425)) : ((2 ? -1869422732 : 2630436425))));
        var_20 = ((1122185600 && (3690 / -1590170176)));
        arr_5 [i_0] = 0;
    }
    #pragma endscop
}
