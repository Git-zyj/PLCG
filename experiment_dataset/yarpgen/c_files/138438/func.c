/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138438
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= 0U;
        var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)68)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((((/* implicit */_Bool) (signed char)-68)) ? (18371651068895763988ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68)))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 7726288408382149745LL))))), (((((/* implicit */int) var_5)) << (((((((/* implicit */int) arr_0 [i_0] [i_0])) + (152))) - (22)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
    }
    var_13 = ((/* implicit */signed char) var_6);
    var_14 += ((/* implicit */signed char) ((var_3) > (((/* implicit */unsigned int) var_6))));
}
