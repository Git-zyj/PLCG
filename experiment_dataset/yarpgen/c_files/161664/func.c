/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161664
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(122634429204752564LL)));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (unsigned short)17482))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (9223372036854775807LL) : (5721367655278407551LL)));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) -4532541709150466650LL);
        arr_7 [i_1] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_4)), (7693695286955346109ULL))) < (var_16)));
        arr_8 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)20656)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
    }
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(-5721367655278407552LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5721367655278407551LL)))))) : (min((var_5), (var_16))))), (((/* implicit */unsigned long long int) var_11))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) - ((~(((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}
