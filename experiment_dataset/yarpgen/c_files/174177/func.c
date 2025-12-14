/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174177
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (283726776524341248ULL) : (((/* implicit */unsigned long long int) 9223372036854775800LL)))))))));
        var_20 -= ((/* implicit */unsigned short) (short)32758);
    }
    var_21 = ((/* implicit */signed char) var_15);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1099511365632LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18446744073709551615ULL)));
    var_23 = ((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) | (-1LL))))));
}
