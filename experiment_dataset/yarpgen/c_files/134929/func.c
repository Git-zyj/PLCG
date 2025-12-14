/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134929
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
    var_10 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)100)))))))) - (((/* implicit */int) max((max((var_4), (((/* implicit */unsigned short) var_3)))), (var_4))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -589639567)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) ((arr_0 [(_Bool)1]) > (var_7)))))))) : (max((min((((/* implicit */unsigned long long int) var_4)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57425)) ? (((/* implicit */long long int) 363884165)) : (arr_0 [(signed char)6]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526)))))))));
    }
}
