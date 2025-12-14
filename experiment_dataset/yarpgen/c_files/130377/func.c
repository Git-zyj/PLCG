/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130377
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_5))));
    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((var_10) / (((/* implicit */int) var_8)))))) < (((/* implicit */int) ((((unsigned long long int) var_10)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    var_13 = ((/* implicit */unsigned int) ((signed char) (+(((((/* implicit */int) var_8)) << (((((/* implicit */int) var_0)) - (194))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((4644007704121261915LL) << (((4644007704121261906LL) - (4644007704121261906LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) -594882158)) < (-6516056248875651709LL)))) : (((/* implicit */int) (signed char)-15)))))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
}
