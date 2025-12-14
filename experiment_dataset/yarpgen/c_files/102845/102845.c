/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!(~var_8)))) <= (var_6 <= -1892811974)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(4294967295, 27196));
        var_21 = (!(((2052584895 ? 44471 : 32767))));
    }
    var_22 += (var_4 != var_4);
    #pragma endscop
}
