/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (((((1979812959 <= 20308) ? ((max(var_5, var_5))) : var_10)) <= var_0));
    var_16 = (~11);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((255 ? -1 : 51158));
        arr_4 [i_0] [i_0] = (((45228 ? 26 : (arr_0 [i_0] [i_0]))));
    }
    #pragma endscop
}
