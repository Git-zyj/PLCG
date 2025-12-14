/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 183;
    var_12 = (~7186544206065251378);
    var_13 = var_3;
    var_14 = ((var_6 == ((max((min(var_10, var_9)), (71 < var_2))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((((((99 ? var_3 : 1)) == (var_9 < 32))) ? ((((!(179 < 9223336852482686976))))) : var_6));
        var_16 = (max(var_16, ((max((((183 ? -30 : -11152))), (min(2020418137305789414, 178)))))));
    }
    #pragma endscop
}
