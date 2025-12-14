/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 += (min((min(var_6, (!var_10))), (((var_6 != (arr_1 [i_0]))))));
        arr_2 [i_0] = ((((min(((min(-81, var_6))), (min(186341925, -23928))))) ? (((~(~-89)))) : (~var_9)));
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_12 = (~593840839);
        var_13 = ((((min(-103, (!var_5)))) - var_7));
    }
    #pragma endscop
}
