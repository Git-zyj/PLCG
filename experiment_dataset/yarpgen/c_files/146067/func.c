/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146067
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1040384LL))))) : ((-(((/* implicit */int) var_7))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-1LL))))));
    }
    var_17 = ((/* implicit */int) (+((~((~(141863388262170624LL)))))));
    var_18 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) var_6))))), (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)199))))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), ((-(var_8)))))));
    var_20 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)195))))));
}
