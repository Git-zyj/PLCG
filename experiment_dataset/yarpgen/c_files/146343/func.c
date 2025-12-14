/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146343
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((~(((/* implicit */int) (unsigned char)41))))));
        arr_2 [i_0] [i_0] = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */int) var_4))))) : ((+(14332041945066506307ULL))))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -2095811614))))), (max((-3305902893479220088LL), (((/* implicit */long long int) (unsigned short)48061))))))));
        var_19 = var_4;
    }
    var_20 -= ((/* implicit */short) var_2);
}
