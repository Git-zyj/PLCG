/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120205
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -1699561737))))))));
    var_13 = max((((/* implicit */int) (unsigned short)1023)), (min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))))), (var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = (((-(var_11))) ^ (-22755235));
        arr_4 [8U] [i_0] |= ((/* implicit */long long int) ((((var_11) - (((/* implicit */int) (unsigned short)48656)))) | (((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (0)))) ? ((((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775779LL))) + (47LL)))))))), (((((/* implicit */long long int) ((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) var_1))))) - (var_8))))))));
}
