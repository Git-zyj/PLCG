/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_4);
    var_11 = (max(var_11, (((((min((var_7 ^ var_0), var_0))) ? (max((~var_1), (min(-122, -9086871573601872483)))) : (~var_6))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((9086871573601872467 > (((((arr_1 [3]) / 9086871573601872463)) * -94))));
        var_12 = (max((arr_1 [i_0]), var_6));
    }
    #pragma endscop
}
