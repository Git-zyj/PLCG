/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(-1989436415808281591, 9);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [10] |= max(((min(1989436415808281591, var_6))), (var_1 != -1989436415808281591));
        var_19 = (max(var_19, (((!(((+(min((arr_2 [i_0]), -1989436415808281591))))))))));
    }
    var_20 = (~1989436415808281591);
    var_21 = (!4756802987758262931);
    #pragma endscop
}
