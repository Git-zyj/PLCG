/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109608
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
    var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) | (var_0)))))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (unsigned short)65535)), ((-2147483647 - 1)))), (((/* implicit */int) var_2))))) : (var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(arr_2 [i_0] [i_0]))))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((var_11), (var_11))))));
}
