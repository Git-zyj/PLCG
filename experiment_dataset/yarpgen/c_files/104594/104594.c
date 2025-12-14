/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 &= (((((((var_1 ? var_1 : -116)) & ((((arr_2 [i_0]) ? var_9 : var_11)))))) ? (var_15 != var_18) : ((min(-2576, (var_1 < var_17))))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_20 = (!var_0);
            arr_7 [i_1] = (((max(((524224 ? 4294967295 : 4294967295)), (((~(arr_6 [i_0] [i_1] [i_1])))))) <= (var_3 - var_17)));
        }
        var_21 = ((((min((var_1 / var_3), (arr_2 [i_0])))) ? var_13 : (arr_3 [i_0] [i_0])));
    }
    var_22 = 0;
    var_23 = (((var_18 | var_0) / ((((-3718025690375676613 ? var_2 : var_9)) >> (var_1 || -2)))));
    var_24 = (min(var_8, 130023424));
    var_25 = ((var_10 * (((var_4 && (var_0 + var_7))))));
    #pragma endscop
}
