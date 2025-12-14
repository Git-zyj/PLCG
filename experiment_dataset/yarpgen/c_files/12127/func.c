/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12127
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
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) var_9))))), (min((min((var_4), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))));
        var_18 -= ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_14) : (arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (arr_3 [i_1]))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8266395893238427107ULL)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_2 [i_1] [(_Bool)1])))))) ? (((unsigned long long int) 2973131853U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) > (arr_0 [i_1]))))));
        var_21 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_9)))), ((~(((/* implicit */int) (short)842))))));
    }
    var_22 &= ((/* implicit */_Bool) var_12);
}
