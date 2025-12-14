/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (max(var_16, ((((~((4294967295 ? 3606045472 : 0))))))));
        arr_3 [i_0] [i_0] = (min(((((min(0, 2147483647))) ? (((max(19446, 1)))) : (var_9 - 4294967295))), (!4294967279)));
    }
    var_17 = (min(var_17, (((((((!(19467 - 19446))))) * (var_13 % 4294967294))))));
    var_18 = var_1;
    var_19 = var_6;
    var_20 *= (min((max(4294967284, (-2147483647 - 1))), (847972834 >= 4294967295)));
    #pragma endscop
}
