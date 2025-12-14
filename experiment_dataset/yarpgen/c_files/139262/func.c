/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139262
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) : (var_8)));
    var_12 = min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) (-(23U)))), (max((((/* implicit */long long int) var_2)), (var_3))))));
    var_13 = min((var_4), (((/* implicit */unsigned short) var_6)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned char) max((((int) (unsigned char)0)), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (-719323489325699056LL))))));
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2879283114U)) ? (((/* implicit */unsigned long long int) max((-9223372036854775794LL), (((/* implicit */long long int) arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_1)))));
        var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
