/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 *= (((var_12 + -126) << ((((~(max(4, 3601547720)))) - 693419571))));
        var_16 = (min((arr_0 [i_0] [i_0]), var_13));
        var_17 = (min(var_17, ((min((var_1 <= var_5), (min(((max(var_1, 3601547729))), var_10)))))));
        arr_3 [i_0] = (((var_13 > var_8) && (arr_0 [i_0 - 2] [i_0])));
    }
    var_18 = (min(var_18, (((var_5 ? var_11 : (min(((var_8 >> (-1621210400 + 1621210430))), (min(var_11, 3601547723)))))))));
    var_19 = (min((-var_7 * var_14), (((var_11 + -219958043) ? (min(var_7, 4294967292)) : (min(var_9, var_7))))));
    #pragma endscop
}
