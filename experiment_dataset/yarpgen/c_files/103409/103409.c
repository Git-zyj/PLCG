/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((11665018123965398455 == var_10) < -1));
        arr_4 [i_0 - 3] [i_0] = (~-63640);
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 14286388612663191575;
        arr_8 [i_1] = max(-255, (min(18250, 2147483630)));
        arr_9 [i_1] [i_1] = ((255 ? 14286388612663191575 : 1658020821));
        var_20 *= (-5 * 3347382321576525281);
        var_21 = 1;
    }
    var_22 = var_12;
    var_23 = ((min(((min(-88, var_11)), (~0)))));
    var_24 = (var_1 ? (((2 ? ((18257 << (-88 + 89))) : (63640 & var_5)))) : (max((max(18248, 0)), ((min(241, 47278))))));
    #pragma endscop
}
