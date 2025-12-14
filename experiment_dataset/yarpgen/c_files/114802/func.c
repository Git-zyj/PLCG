/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114802
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
    var_16 *= var_14;
    var_17 = ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) -2307400238919193051LL);
        var_18 += ((min((10096214820297938017ULL), (((/* implicit */unsigned long long int) 4425644840104116606LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
        arr_3 [i_0] [11ULL] = ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) == (arr_0 [i_0 - 1])));
    }
    var_19 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_14), (var_13))))));
}
