/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((647703979617343067 ? (min(-var_8, ((min(49105, -15466))))) : ((min(-1517616540, 637049484)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_18, ((((--18446744073709551615) ? (min(var_16, (((637049481 | (arr_1 [i_0])))))) : ((max((max(var_9, -637049484)), -var_1))))))));
        var_19 = (max(var_19, ((((((var_1 * (~var_13)))) ? ((var_7 ? 208 : 19240)) : ((min(38673, 637049483))))))));
    }
    var_20 = (((((-20082 ? ((var_1 << (var_16 - 12120781621369331706))) : -7161))) || (((((max(var_15, 1))) ? (max((-127 - 1), var_4)) : var_12)))));
    #pragma endscop
}
