/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(-8940, (((min(-2799887806117583612, 0)) * var_4))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = -30702;
        var_20 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = ((26 ? ((max((arr_1 [i_0] [i_0]), var_15))) : var_8));
            arr_7 [i_0] [1] = (min(-8944, -2799887806117583615));
            var_21 = var_3;
            arr_8 [i_0] [i_0] = ((((max(98, 11))) || (arr_5 [i_1] [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = (min(var_22, ((~((min(var_6, (arr_0 [i_0] [1]))))))));
            var_23 = ((((min(-3, 2374216950))) ? 15645447000758361222 : (arr_2 [i_0])));
        }
        arr_11 [i_0] = (((((8807223908247902667 ? 1868182820 : -665850658))) ? ((min(((((arr_9 [i_0]) % var_8))), -2799887806117583609))) : (min((~5), var_11))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (~(((min(-20, 32024)))));
        var_24 = ((((~((((arr_0 [7] [i_3]) >= (arr_2 [i_3])))))) <= (arr_2 [i_3])));
    }
    var_25 = (((((-73 ? var_16 : (2056460181 <= 0)))) ? (-2147483647 - 1) : (var_3 * var_13)));
    var_26 = ((((min(-30712, -32))) ? ((min(((var_10 ? 65535 : 1750781350833264924)), 536870910))) : (((((16382 ? -16 : var_12))) ? (((max(var_7, 0)))) : ((var_4 ? 0 : var_10))))));
    var_27 = (max(var_27, ((min(var_7, 17880)))));
    #pragma endscop
}
