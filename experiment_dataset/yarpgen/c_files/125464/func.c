/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125464
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) max((12105102178569421713ULL), (((/* implicit */unsigned long long int) var_18)))))))), (max((((((/* implicit */int) (unsigned char)191)) / (var_18))), (max((((/* implicit */int) (unsigned char)255)), (var_18)))))));
    var_21 = ((/* implicit */unsigned long long int) var_3);
    var_22 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */short) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((unsigned long long int) (-9223372036854775807LL - 1LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)196))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_1 [(short)3] [(short)3])))) && (((/* implicit */_Bool) (+(2692518109U))))));
    }
}
