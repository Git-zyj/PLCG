/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108252
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (min((arr_2 [(short)7] [i_0 + 1] [(unsigned char)8]), (-741129274471463618LL))) : (((((/* implicit */_Bool) arr_0 [9ULL])) ? (arr_2 [i_0] [i_0 - 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_1] [i_0] = ((((/* implicit */_Bool) (-(arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (11400237868096591248ULL))));
                var_19 = ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) 11400237868096591242ULL);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((2305843008945258496ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_1))))))))))));
}
