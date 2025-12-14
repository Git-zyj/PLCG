/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124509
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_14)))) * (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 0LL))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)0])) + (((/* implicit */int) var_5))))))))));
        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) max((var_4), ((unsigned char)255)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_7))))));
        var_21 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) (unsigned char)255)) ? (-3LL) : (((/* implicit */long long int) 0U)))) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((long long int) (+(((/* implicit */int) var_4))))) << ((((~(var_18))) - (1246654486907834196LL))))))));
}
